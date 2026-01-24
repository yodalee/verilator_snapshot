// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<17>/*543:0*/ Vsim__ConstPool__CONST_h902eb634_0;
extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h93e1b771_0;

void Vsim_NV_NVDLA_SDP_CORE_x___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_bs__4(Vsim_NV_NVDLA_SDP_CORE_x* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_SDP_CORE_x___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_bs__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chn_alu_out_cns_pipe__DOT__FIFO__DOT____Vlvbound_ha955979d__0;
    chn_alu_out_cns_pipe__DOT__FIFO__DOT____Vlvbound_ha955979d__0 = 0;
    CData/*0:0*/ chn_mul_out_cns_pipe__DOT__FIFO__DOT____Vlvbound_ha955979d__0;
    chn_mul_out_cns_pipe__DOT__FIFO__DOT____Vlvbound_ha955979d__0 = 0;
    CData/*0:0*/ chn_trt_out_cns_pipe__DOT__FIFO__DOT____Vlvbound_ha955979d__0;
    chn_trt_out_cns_pipe__DOT__FIFO__DOT____Vlvbound_ha955979d__0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__sel = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__input_0 = 0;
    QData/*48:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__sel = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_4;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_4 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_3 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_0 = 0;
    CData/*4:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_3 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_2 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_1 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_3 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_2 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_1 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_3;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_3 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_2;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_2 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_1 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_0 = 0;
    CData/*3:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__sel = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__Vfuncout = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__input_0;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__input_0 = 0;
    IData/*29:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__input_1;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__sel;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3850__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3850__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3850__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3850__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3850__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3850__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3856__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3856__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3856__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3856__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3856__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3856__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3862__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3862__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3862__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3862__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3862__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3862__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3868__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3868__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3868__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3868__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3868__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3868__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3874__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3874__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3874__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3874__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3874__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3874__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3880__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3880__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3880__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3880__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3880__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3880__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3886__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3886__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3886__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3886__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3886__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3886__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3892__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3892__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3892__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3892__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3892__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3892__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3898__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3898__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3898__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3898__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3898__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3898__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3904__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3904__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3904__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3904__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3904__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3904__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3910__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3910__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3910__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3910__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3910__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3910__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3916__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3916__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3916__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3916__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3916__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3916__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3922__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3922__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3922__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3922__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3922__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3922__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3928__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3928__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3928__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3928__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3928__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3928__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3934__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3934__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3934__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3934__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3934__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3934__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__input_0 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__sel = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3940__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3940__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3940__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3940__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3940__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3940__sel = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__input_2 = 0;
    CData/*7:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__input_0 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__sel = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__input_0 = 0;
    CData/*1:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__sel = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__sel = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__input_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__input_2 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__input_1;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__input_0;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__input_0 = 0;
    CData/*2:0*/ __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__sel;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__sel = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5842__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5842__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5842__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5842__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5842__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5842__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5843__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5843__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5843__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5843__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5845__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5845__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5845__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5845__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5845__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5845__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5846__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5846__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5846__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5846__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5848__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5848__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5848__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5848__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5848__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5848__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5849__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5849__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5849__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5849__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5851__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5851__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5851__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5851__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5851__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5851__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5852__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5852__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5852__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5852__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5854__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5854__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5854__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5854__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5854__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5854__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5855__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5855__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5855__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5855__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5857__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5857__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5857__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5857__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5857__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5857__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5858__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5858__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5858__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5858__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5860__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5860__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5860__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5860__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5860__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5860__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5861__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5861__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5861__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5861__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5863__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5863__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5863__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5863__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5863__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5863__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5864__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5864__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5864__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5864__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5866__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5866__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5866__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5866__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5866__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5866__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5867__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5867__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5867__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5867__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5869__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5869__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5869__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5869__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5869__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5869__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5870__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5870__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5870__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5870__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5872__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5872__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5872__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5872__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5872__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5872__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5873__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5873__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5873__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5873__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5875__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5875__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5875__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5875__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5875__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5875__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5876__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5876__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5876__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5876__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5878__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5878__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5878__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5878__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5878__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5878__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5879__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5879__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5879__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5879__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5881__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5881__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5881__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5881__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5881__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5881__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5882__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5882__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5882__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5882__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5884__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5884__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5884__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5884__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5884__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5884__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5885__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5885__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5885__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5885__vector = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5887__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5887__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5887__input_1;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5887__input_1 = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5887__sel;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5887__sel = 0;
    CData/*0:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5888__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5888__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5888__vector;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5888__vector = 0;
    // Body
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_13_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_14_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_14_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_14_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_14_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_14_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3927__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_6_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_7_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_7_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_7_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_7_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_7_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3885__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_11_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_12_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_12_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_12_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_12_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_12_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3915__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_3_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_4_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_4_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_4_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_4_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_4_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3867__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_10_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_11_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_11_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_11_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_11_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_11_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3909__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_5_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_6_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_6_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_6_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_6_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_6_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3879__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_14_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_15_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_15_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_15_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_15_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_15_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3933__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_2_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_3_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_3_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_3_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_3_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_3_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3861__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_9_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_10_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_10_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_10_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_10_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_10_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3903__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_12_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_13_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_13_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_13_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_13_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_13_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3921__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_8_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_9_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_9_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_9_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_9_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_9_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3897__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_4_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_5_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_5_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_5_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_5_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_5_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3873__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_15_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_2_itm_1));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_2_itm_1))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3939__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_7_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_8_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_8_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_8_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_8_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_8_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3891__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_1_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_2_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_2_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_2_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_2_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_2_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3855__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__sel 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_FpMul_8U_23U_else_2_else_nand_itm_2;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__input_1 
        = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_1_2_itm));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__input_0 
        = (0x000000ffU & ((IData)(1U) + (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_1_itm) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__reg_FpMul_8U_23U_p_expo_1_2_itm))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__sel)
            ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__input_1)
            : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__input_0));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_1_lpi_1_dfm_1_mx0 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_8_2_2__3849__Vfuncout;
    vlSelfRef.X_alu_inst__DOT__X_alu_core_inst__DOT____VdfgRegularize_h74425f87_0_288 
        = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__io_read_cfg_alu_bypass_rsc_svs_7) 
           | (2U != (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__cfg_alu_algo_1_sva_st_205)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_899_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__main_stage_v_4)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__io_read_cfg_alu_bypass_rsc_svs_7)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_1812_nl 
        = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_equal_tmp_237) 
           | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__io_read_cfg_alu_bypass_rsc_svs_7));
    vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_out_rsci_inst__DOT__chn_trt_out_rsci__DOT__vd 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chn_trt_out_cns_pipe__DOT__FIFO__DOT__stat)) 
                 | (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_in_rsci_inst__DOT__chn_relu_in_rsci__DOT__ld)));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_1_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0U] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0U])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0U])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_2_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[1U] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[1U])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[1U])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_3_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[2U] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[2U])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[2U])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_4_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[3U] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[3U])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[3U])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_5_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[4U] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[4U])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[4U])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_6_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[5U] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[5U])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[5U])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_7_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[6U] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[6U])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[6U])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_8_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[7U] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[7U])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[7U])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_9_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[8U] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[8U])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[8U])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_10_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[9U] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[9U])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[9U])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_11_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000aU] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000aU])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000aU])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_12_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000bU] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000bU])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000bU])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_13_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000cU] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000cU])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000cU])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_14_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000dU] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000dU])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000dU])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_15_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000eU] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000eU])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000eU])))))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_lor_lpi_1_dfm_mx0w0 
        = (1U & (~ ((vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000fU] 
                     >> 0x0000001fU) & (IData)(((0x7f800000U 
                                                 != 
                                                 (0x7f800000U 
                                                  & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000fU])) 
                                                | (0U 
                                                   == 
                                                   (0x007fffffU 
                                                    & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000fU])))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1108_rgt) 
                  | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1111_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1112_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1448_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__sel 
                = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1108_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1111_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1112_rgt)));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_mux_252_itm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_5_mux_60_mx0w1;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__input_2 
                = (1U & (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[0x00000010U] 
                         >> 0x0000000eU));
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__input_0) 
                   & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__sel));
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__input_1) 
                      & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__input_2) 
                      & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__sel) 
                         >> 2U)));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_mux_252_itm_3 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4649__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1180_rgt) 
                  | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1183_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1184_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1480_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__sel 
                = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1180_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1183_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1184_rgt)));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_mux_124_itm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_5_mux_28_mx0w1;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__input_2 
                = (1U & (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[8U] 
                         >> 6U));
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__input_0) 
                   & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__sel));
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__input_1) 
                      & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__input_2) 
                      & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__sel) 
                         >> 2U)));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_mux_124_itm_3 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4657__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1234_rgt) 
                  | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1237_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1238_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1504_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__sel 
                = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1234_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1237_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1238_rgt)));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_mux_28_itm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_5_mux_4_mx0w1;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__input_2 
                = (1U & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[2U]);
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__input_0) 
                   & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__sel));
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__input_1) 
                      & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__input_2) 
                      & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__sel) 
                         >> 2U)));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_mux_28_itm_3 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4663__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1243_rgt) 
                  | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1246_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1247_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1508_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__sel 
                = (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1243_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1246_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_1247_rgt)));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_mux_12_itm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_else_5_mux_mx0w1;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__input_2 
                = (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[0U] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__input_0) 
                   & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__sel));
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__input_1) 
                      & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__input_2) 
                      & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__sel) 
                         >> 2U)));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_mux_12_itm_3 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_s_1_3_2__4664__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_and_1_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_14_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_14_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_14_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_14_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_7_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_7_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_7_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_7_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_12_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_12_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_12_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_12_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_4_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_4_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_4_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_4_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_11_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_11_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_11_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_11_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_6_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_6_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_6_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_6_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_15_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_15_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_15_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_15_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_3_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_3_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_3_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_3_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_10_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_10_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_10_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_10_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_13_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_13_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_13_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_13_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_9_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_9_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_9_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_9_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_5_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_5_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_5_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_5_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_8_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_8_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_8_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_8_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_2_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_2_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_2_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_2_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_1_lpi_1_dfm_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_1_lpi_1_dfm_8;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_1_lpi_1_dfm_10 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_1_lpi_1_dfm_9;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__io_read_cfg_mul_bypass_rsc_svs_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__io_read_cfg_mul_bypass_rsc_svs_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__io_read_cfg_mul_bypass_rsc_svs_st_6 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__io_read_cfg_mul_bypass_rsc_svs_st_5;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0U] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[0U];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[1U] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[1U];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[2U] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[2U];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[3U] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[3U];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[4U] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[4U];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[5U] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[5U];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[6U] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[6U];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[7U] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[7U];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[8U] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[8U];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[9U] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[9U];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x0000000aU] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[0x0000000aU];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x0000000bU] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[0x0000000bU];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x0000000cU] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[0x0000000cU];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x0000000dU] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[0x0000000dU];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x0000000eU] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[0x0000000eU];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x0000000fU] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[0x0000000fU];
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x00000010U] 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_534[0x00000010U];
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_aelse_and_48_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_14_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_14_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_7_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_7_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_12_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_12_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_4_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_4_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_11_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_11_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_6_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_6_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_15_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_15_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_3_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_3_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_10_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_10_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_13_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_13_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_9_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_9_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_5_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_5_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_8_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_8_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_2_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_2_lpi_1_dfm_st_6;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_1_lpi_1_dfm_st_7 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_1_lpi_1_dfm_st_6;
        }
        if (((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_95) 
                | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_tmp_823)) 
             & (IData)(vlSelfRef.X_alu_inst__DOT__X_alu_core_inst__DOT____VdfgRegularize_h74425f87_0_81))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1851__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_4_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_4_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_4_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1852__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_8_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_8_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_8_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1853__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_12_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_12_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_12_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1854__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_16_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_16_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_16_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1855__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_20_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_20_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_20_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1856__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_24_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_24_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_24_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1857__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_28_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_28_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_28_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1858__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_32_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_32_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_32_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1859__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_36_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_36_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_36_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1860__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_40_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_40_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_40_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1861__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_44_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_44_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_44_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1862__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_48_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_48_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_48_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1863__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_52_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_52_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_52_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1864__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_56_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_56_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_56_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1865__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_840;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_60_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_60_itm_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_60_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1866__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1533_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_6_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_6_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1525_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_10_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_10_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1522_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_11_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_11_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1516_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_13_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_13_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1539_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_3_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_3_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1535_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_5_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_5_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1527_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_9_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_9_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1531_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_7_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_7_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1529_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_8_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_8_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1544_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_1_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_1_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1519_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_12_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_12_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1513_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_14_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_14_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1541_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_2_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_2_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1537_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_4_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_4_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1510_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_15_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_15_sva_8;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_50))) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_1547_nl)))) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_0_sva_9 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_0_sva_8;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_81_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_57_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_87_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_75_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_78_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_63_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_66_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_84_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_90_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_51_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_54_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_60_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_93_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_69_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_72_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_48_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_8_9_0_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_7_9_0_1;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_8_22_13_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_7_22_13_1;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_and_16_cse) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_0_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_0_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_1_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_1_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_2_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_2_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_3_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_3_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_4_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_4_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_5_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_5_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_6_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_6_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_7_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_7_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_8_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_8_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_9_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_9_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_10_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_10_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_11_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_11_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_12_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_12_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_13_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_13_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_14_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_14_sva_7);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_15_sva_7 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__nl_AluOut_data_15_sva_7);
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_and_2_cse) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__io_read_cfg_alu_bypass_rsc_svs_st_6 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__io_read_cfg_alu_bypass_rsc_svs_st_5;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0U] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0U];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[1U] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[1U];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[2U] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[2U];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[3U] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[3U];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[4U] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[4U];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[5U] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[5U];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[6U] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[6U];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[7U] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[7U];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[8U] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[8U];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[9U] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[9U];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0x0000000aU] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000aU];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0x0000000bU] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000bU];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0x0000000cU] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000cU];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0x0000000dU] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000dU];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0x0000000eU] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000eU];
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0x0000000fU] 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000fU];
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_141_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_832) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_834) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_45_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_45_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000fU] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_45_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1816__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_832) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_834) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_47_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_47_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000fU]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_47_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1818__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_105_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_698) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_701) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_6_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_6_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_3_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[2U] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_6_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1780__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_698) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_701) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_8_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_8_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_3_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[2U]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_8_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1782__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_108_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_711) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_714) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_12_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_12_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_5_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[4U] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_12_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1783__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_711) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_714) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_14_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_14_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_5_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[4U]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_14_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1785__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_111_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_722) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_725) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_15_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_15_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_6_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[5U] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_15_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1786__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_722) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_725) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_17_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_17_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_6_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[5U]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_17_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1788__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_114_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_733) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_736) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_18_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_18_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_7_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[6U] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_18_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1789__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_733) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_736) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_20_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_20_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_7_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[6U]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_20_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1791__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_117_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_744) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_747) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_21_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_21_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_8_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[7U] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_21_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1792__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_744) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_747) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_23_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_23_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_8_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[7U]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_23_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1794__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_120_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_755) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_758) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_24_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_24_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_9_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[8U] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_24_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1795__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_755) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_758) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_26_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_26_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_9_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[8U]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_26_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1797__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_123_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_766) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_769) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_27_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_27_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_10_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[9U] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_27_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1798__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_766) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_769) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_29_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_29_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_10_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[9U]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_29_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1800__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_126_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_777) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_780) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_30_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_30_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_11_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000aU] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_30_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1801__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_777) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_780) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_32_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_32_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_11_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000aU]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_32_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1803__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_129_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_788) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_791) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_33_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_33_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_12_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000bU] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_33_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1804__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_788) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_791) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_35_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_35_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_12_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000bU]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_35_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1806__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_132_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_799) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_802) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_36_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_36_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_13_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000cU] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_36_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1807__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_799) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_802) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_38_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_38_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_13_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000cU]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_38_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1809__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_135_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_810) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_813) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_39_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_39_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_14_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000dU] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_39_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1810__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_810) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_813) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_41_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_41_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_14_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000dU]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_41_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1812__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_138_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_821) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_824) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_42_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_42_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_31_15_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_3 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000eU] 
                   >> 0x0000001fU);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_42_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1813__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_821) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_824) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_704) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_707)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_44_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_44_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_0_15_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_3 
                = (1U & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000eU]);
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__sel) 
                         >> 3U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_44_itm_3 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_4_2__1815__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_and_16_cse) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_14_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000dU] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_14_lpi_1_dfm_3) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_14_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_14_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_15_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000eU] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_15_lpi_1_dfm_3) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_15_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_15_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_1_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0U] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_1_lpi_1_dfm_4) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_1_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_3_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[2U] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_3_lpi_1_dfm_4) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_3_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_4_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[3U] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_4_lpi_1_dfm_4) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_4_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_4_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_5_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[4U] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_5_lpi_1_dfm_4) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_5_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_5_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_6_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[5U] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_6_lpi_1_dfm_4) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_6_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_6_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_7_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[6U] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_7_lpi_1_dfm_4) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_7_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_7_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_2_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[1U] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_2_lpi_1_dfm_4) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_2_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_8_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[7U] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_8_lpi_1_dfm_3) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_8_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_8_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_9_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[8U] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_9_lpi_1_dfm_3) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_9_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_9_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_10_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[9U] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_10_lpi_1_dfm_3) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_10_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_10_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_11_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000aU] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_11_lpi_1_dfm_3) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_11_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_11_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_12_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000bU] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_12_lpi_1_dfm_3) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_12_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_12_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_13_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000cU] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_13_lpi_1_dfm_3) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_13_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_13_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_6_tmp_2)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_sva_6 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000fU] 
                   != ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_nan_to_zero_op_sign_lpi_1_dfm_3) 
                         << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_9) 
                                             << 0x0000001bU) 
                                            | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_lpi_1_dfm_9) 
                                               << 0x00000017U))) 
                       | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_6_tmp) 
                           << 0x0000000dU) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1) 
                                               << 0x0000000aU) 
                                              | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_6_tmp_2)))));
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1481_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1483_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1485_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1487_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1481_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1483_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1485_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1487_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_14_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_13_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_13_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_13_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_13_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_14_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1910__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_78_cse) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_6_tmp_2;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_cse) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_1_else_if_conc_itm_31 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_itm_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_1_else_if_conc_itm_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_2_itm_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_else_if_conc_1_itm_31 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_3_itm_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_else_if_conc_1_itm_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_5_itm_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_else_if_conc_1_itm_31 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_9_itm_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_else_if_conc_1_itm_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_11_itm_2;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_cse) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_1_else_else_if_conc_itm_31 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_itm_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_1_else_else_if_conc_itm_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_2_itm_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_else_else_if_conc_1_itm_31 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_3_itm_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_else_else_if_conc_1_itm_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_5_itm_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_else_else_if_conc_1_itm_31 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_9_itm_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_else_else_if_conc_1_itm_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_11_itm_2;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1469_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1471_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1473_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1475_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1469_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1471_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1473_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1475_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_13_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_12_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_12_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_12_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_12_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_13_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1909__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_and_cse) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_6_tmp_2;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_7_tmp_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_6_tmp_1;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_7_tmp 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_6_tmp;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_7_tmp_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_6_tmp_2;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1380_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1382_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1384_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1386_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1380_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1382_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1384_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1386_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_6_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_5_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_5_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_5_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_5_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_6_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1900__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_aelse_or_1_cse) 
                 | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1346_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1347_rgt))) 
                & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse)))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__sel 
                = (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_aelse_or_1_cse) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1346_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1347_rgt)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_6_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_6_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm_mx0w0;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_6_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__sel) 
                         >> 2U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_6_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1898__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__sel 
                = (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_aelse_or_1_cse) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1346_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1347_rgt)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_13_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_13_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm_mx0w0;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_13_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__sel) 
                         >> 2U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_13_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1899__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1425_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1427_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1429_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1431_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1425_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1427_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1429_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1431_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_10_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_9_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_9_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_9_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_9_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_10_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1906__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_aelse_and_1_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_10_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_10_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_10_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1904__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_14_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_14_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_14_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1905__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_2_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_2_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1882__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_5_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_5_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_5_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1883__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_9_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_9_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_9_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1884__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_11_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_11_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_11_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1885__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_12_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_12_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_12_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1886__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1351_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1353_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1355_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1356_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1351_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1353_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1355_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1356_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_4_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_3_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_3_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_3_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_3_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_4_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1896__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1318_cse) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1307_cse)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1346_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1347_rgt))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__sel 
                = (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_aelse_or_1_cse) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1346_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1347_rgt)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_FpAdd_8U_23U_IsZero_8U_23U_1_nand_itm_mx0w0;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_4_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__sel) 
                         >> 2U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_4_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_3_2__1895__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1364_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1366_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1368_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1369_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1364_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1366_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1368_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1369_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_5_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_4_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_4_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_4_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_4_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_5_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1897__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1413_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1415_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1417_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1418_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1413_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1415_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1417_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1418_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_9_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_8_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_8_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_8_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_8_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_9_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1903__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1438_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1440_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1442_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1444_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1438_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1440_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1442_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1444_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_11_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_10_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_10_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_10_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_10_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_11_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1907__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1452_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1454_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1456_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1458_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1452_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1454_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1456_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1458_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_12_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_11_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_11_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_11_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_11_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_12_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1908__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1323_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1325_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1327_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1328_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1323_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1325_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1327_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1328_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_2_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_1_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_1_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_1_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_1_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_2_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1887__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1492_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1494_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1496_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1498_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1492_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1494_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1496_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1498_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_15_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_14_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_14_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_14_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_14_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_15_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1911__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_aelse_IsNaN_8U_23U_1_aelse_or_5_cse)) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_825_nl))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_aelse_or_5_cse;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_15_lpi_1_dfm_6;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_15_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_15_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1775__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1333_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1335_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1337_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1339_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1333_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1335_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1337_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1339_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_3_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_2_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_2_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_2_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_2_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_3_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1894__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_aelse_IsNaN_8U_23U_1_aelse_or_5_cse)) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_892_nl))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_aelse_or_5_cse;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_3_lpi_1_dfm_6;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_3_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_3_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1778__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1400_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1402_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1404_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1406_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1400_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1402_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1404_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1406_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_8_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_7_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_7_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_7_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_7_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_8_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1902__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_aelse_and_2_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_3_FpCmp_8U_23U_false_slc_8_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_3_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_3_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1888__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_6_FpCmp_8U_23U_false_slc_8_1_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_6_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_6_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1889__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_8_FpCmp_8U_23U_false_slc_8_1_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_8_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_8_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1890__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_10_FpCmp_8U_23U_false_slc_8_1_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_10_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_10_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1891__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_13_FpCmp_8U_23U_false_slc_8_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_13_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_13_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1892__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_14_FpCmp_8U_23U_false_slc_8_1_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_14_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_14_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1893__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_aelse_IsNaN_8U_23U_1_aelse_or_5_cse)) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_857_nl))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_aelse_or_5_cse;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_8_lpi_1_dfm_6;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_8_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_8_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1776__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1391_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1393_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1395_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1396_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1391_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1393_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1395_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1396_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_7_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_6_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_6_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_6_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_6_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_7_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1901__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_aelse_IsNaN_8U_23U_1_aelse_or_5_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_870_nl)))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_aelse_or_5_cse;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_7_lpi_1_dfm_6;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_7_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_7_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1777__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1503_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1505_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1507_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1508_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1503_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1505_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1507_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1508_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_15_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_15_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_15_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_15_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1912__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_aelse_IsNaN_8U_23U_1_aelse_or_5_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_813_nl)))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_aelse_or_5_cse;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_lpi_1_dfm_6;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1774__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_aelse_and_2_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_1_FpCmp_8U_23U_false_slc_8_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_1_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_1_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1871__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_FpCmp_8U_23U_false_slc_8_1_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_2_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_2_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1872__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_FpCmp_8U_23U_false_slc_8_1_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_4_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_4_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1873__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_5_FpCmp_8U_23U_false_slc_8_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_5_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_5_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1874__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_7_FpCmp_8U_23U_false_slc_8_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_7_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_7_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1875__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_9_FpCmp_8U_23U_false_slc_8_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_9_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_9_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1876__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_11_FpCmp_8U_23U_false_slc_8_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_11_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_11_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1877__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_12_FpCmp_8U_23U_false_slc_8_1_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_12_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_12_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1878__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_15_FpCmp_8U_23U_false_slc_8_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_15_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_15_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1879__Vfuncout;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1308_rgt;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_16_FpCmp_8U_23U_false_slc_8_1_svs_st_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_lpi_1_dfm_6;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1880__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1311_rgt) 
                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1313_rgt)) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1315_rgt)) 
                  | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1316_rgt)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse))) 
             & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_1092_cse))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1311_rgt) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1313_rgt) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1315_rgt) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1316_rgt) 
                       << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_1141_cse)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_1_lpi_1_dfm_1_mx0w4;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_if_1_FpCmp_8U_23U_true_if_1_or_mx0w3;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_true_else_1_FpCmp_8U_23U_true_else_1_and_mx0w2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_3 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_if_1_FpCmp_8U_23U_false_if_1_or_mx0w1;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_else_1_FpCmp_8U_23U_false_else_1_and_mx0w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_0) 
                   & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__sel));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_1) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_2) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_3) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__sel) 
                         >> 3U)));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__input_4) 
                      & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__sel) 
                         >> 4U)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_1_lpi_1_dfm_7 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_s_1_5_2__1881__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_aelse_IsNaN_8U_23U_1_aelse_or_5_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__mux_908_nl)))) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_aelse_or_5_cse;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_4_land_1_lpi_1_dfm_6;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_1_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__sel)
                    ? (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__input_1)
                    : (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__input_0));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_1_lpi_1_dfm_8 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_s_1_2_2__1779__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_mux_252_itm_3 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_mux_124_itm_3 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_mux_28_itm_3 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_mux_12_itm_3 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_14_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_14_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_14_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_7_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_7_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_7_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_12_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_12_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_12_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_4_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_4_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_4_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_11_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_11_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_11_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_6_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_6_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_6_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_15_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_15_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_15_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_3_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_3_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_3_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_10_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_10_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_10_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_13_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_13_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_13_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_9_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_9_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_9_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_5_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_5_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_5_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_8_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_8_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_8_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_2_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_2_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_2_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_1_lpi_1_dfm_9 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_1_lpi_1_dfm_10 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__io_read_cfg_mul_bypass_rsc_svs_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_1_lpi_1_dfm_st_7 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__io_read_cfg_mul_bypass_rsc_svs_st_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_4_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_8_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_12_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_16_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_20_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_24_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_28_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_32_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_36_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_40_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_44_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_48_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_52_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_56_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_and_60_itm_3 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_6_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_10_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_11_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_13_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_3_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_5_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_9_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0U] 
            = Vsim__ConstPool__CONST_h902eb634_0[0U];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[1U] 
            = Vsim__ConstPool__CONST_h902eb634_0[1U];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[2U] 
            = Vsim__ConstPool__CONST_h902eb634_0[2U];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[3U] 
            = Vsim__ConstPool__CONST_h902eb634_0[3U];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[4U] 
            = Vsim__ConstPool__CONST_h902eb634_0[4U];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[5U] 
            = Vsim__ConstPool__CONST_h902eb634_0[5U];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[6U] 
            = Vsim__ConstPool__CONST_h902eb634_0[6U];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[7U] 
            = Vsim__ConstPool__CONST_h902eb634_0[7U];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[8U] 
            = Vsim__ConstPool__CONST_h902eb634_0[8U];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[9U] 
            = Vsim__ConstPool__CONST_h902eb634_0[9U];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x0000000aU] 
            = Vsim__ConstPool__CONST_h902eb634_0[0x0000000aU];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x0000000bU] 
            = Vsim__ConstPool__CONST_h902eb634_0[0x0000000bU];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x0000000cU] 
            = Vsim__ConstPool__CONST_h902eb634_0[0x0000000cU];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x0000000dU] 
            = Vsim__ConstPool__CONST_h902eb634_0[0x0000000dU];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x0000000eU] 
            = Vsim__ConstPool__CONST_h902eb634_0[0x0000000eU];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x0000000fU] 
            = Vsim__ConstPool__CONST_h902eb634_0[0x0000000fU];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_sva_535[0x00000010U] 
            = Vsim__ConstPool__CONST_h902eb634_0[0x00000010U];
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_7_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_8_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_1_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_12_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_14_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_2_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_4_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_15_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulOut_data_0_sva_9 = 0ULL;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_8_9_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_8_22_13_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_0_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_1_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_2_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_3_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_4_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_5_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_6_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_7_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_8_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_9_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_10_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_11_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_12_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_13_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_14_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluOut_data_15_sva_7 = 0ULL;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__io_read_cfg_alu_bypass_rsc_svs_st_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_45_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_47_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_6_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_8_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_12_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_14_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_15_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_17_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_18_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_20_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_21_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_23_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_24_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_26_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_27_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_29_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_30_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_32_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_33_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_35_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_36_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_38_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_39_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_41_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_42_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_44_itm_3 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_14_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_15_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_14_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_1_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_3_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_4_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_5_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_6_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_7_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_2_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_1_else_if_conc_itm_31 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_1_else_else_if_conc_itm_31 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_1_else_if_conc_itm_0 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_1_else_else_if_conc_itm_0 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_8_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_9_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_10_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_11_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_12_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_13_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_o_0_sva_6 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_13_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_6_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_6_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_13_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_10_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_10_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_14_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_else_if_conc_1_itm_31 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_else_else_if_conc_1_itm_31 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_else_if_conc_1_itm_0 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_else_else_if_conc_1_itm_0 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_else_if_conc_1_itm_31 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_else_else_if_conc_1_itm_31 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_else_if_conc_1_itm_0 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_else_else_if_conc_1_itm_0 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_4_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_4_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_5_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_9_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_11_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_12_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_2_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_2_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_5_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_9_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_11_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_12_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_15_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_15_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_3_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_3_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_8_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_3_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_6_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_8_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_10_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_13_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_14_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_8_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_7_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_7_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpCmp_8U_23U_false_is_a_greater_1_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_7_tmp_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[1U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[2U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[3U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[4U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[5U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[6U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[7U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[8U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[9U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0x0000000aU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0x0000000bU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0x0000000cU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0x0000000dU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0x0000000eU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_502[0x0000000fU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_7_tmp = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_7_tmp_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_1_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_2_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_4_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_5_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_7_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_9_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_11_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_12_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_15_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_lpi_1_dfm_7 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_1_lpi_1_dfm_8 = 0U;
    }
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_16_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5841__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000fU]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5841__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5841__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5841__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5841__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_15_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5844__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000eU]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5844__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5844__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5844__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5844__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_14_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5847__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000dU]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5847__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5847__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5847__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5847__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_13_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5850__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000cU]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5850__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5850__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5850__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5850__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_12_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5853__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000bU]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5853__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5853__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5853__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5853__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_11_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5856__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000aU]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5856__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5856__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5856__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5856__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_10_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5859__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[9U]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5859__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5859__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5859__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5859__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_9_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5862__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[8U]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5862__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5862__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5862__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5862__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_8_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5865__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[7U]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5865__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5865__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5865__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5865__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_7_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5868__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[6U]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5868__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5868__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5868__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5868__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_6_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5871__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[5U]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5871__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5871__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5871__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5871__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_5_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5874__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[4U]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5874__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5874__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5874__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5874__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_4_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5877__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[3U]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5877__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5877__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5877__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5877__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_3_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5880__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[2U]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5880__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5880__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5880__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5880__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_2_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5883__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[1U]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5883__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5883__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5883__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5883__Vfuncout))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_1_else_else_acc_nl 
        = (0x00000003ffffffffULL & (1ULL + VL_EXTEND_QQ(34,33, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5886__vector 
                            = (~ vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0U]);
                        vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5886__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5886__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5886__vector)));
                    }(), vlSelfRef.__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__conv_s2u_32_33__5886__Vfuncout))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_in_rsci_inst__DOT__chn_mul_in_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_chn_alu_out_rsci_inst__DOT__chn_alu_out_rsci__DOT__ld) 
           | (IData)(vlSelfRef.__PVT__chn_alu_out_cns_pipe__DOT__FIFO__DOT__stat));
    vlSelfRef.__PVT__chn_trt_out_cns_pipe__DOT__FIFO__DOT__stat_nxt 
        = (((IData)(vlSelfRef.__PVT__chn_trt_out_cns_pipe__DOT__FIFO__DOT__stat) 
            & ((~ (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_in_rsci_inst__DOT__chn_relu_in_rsci__DOT__ld)) 
               | (IData)(vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_out_rsci_inst__DOT__chn_trt_out_rsci__DOT__ld))) 
           | ((IData)(vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_out_rsci_inst__DOT__chn_trt_out_rsci__DOT__ld) 
              & (~ (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_in_rsci_inst__DOT__chn_relu_in_rsci__DOT__ld))));
    chn_trt_out_cns_pipe__DOT__FIFO__DOT____Vlvbound_ha955979d__0 
        = vlSelfRef.__PVT__chn_trt_out_cns_pipe__DOT__FIFO__DOT__stat_nxt;
    vlSelfRef.__PVT__chn_trt_out_cns_pipe__DOT__FIFO__DOT__stat_pre 
        = chn_trt_out_cns_pipe__DOT__FIFO__DOT____Vlvbound_ha955979d__0;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_in_rsci_inst__DOT__chn_relu_in_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_out_rsci_inst__DOT__chn_trt_out_rsci__DOT__ld) 
           | (IData)(vlSelfRef.__PVT__chn_trt_out_cns_pipe__DOT__FIFO__DOT__stat));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_out_rsci_inst__DOT__chn_mul_out_rsci__DOT__vd 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chn_mul_out_cns_pipe__DOT__FIFO__DOT__stat)) 
                 | (IData)(vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_in_rsci_inst__DOT__chn_trt_in_rsci__DOT__ld)));
    vlSelfRef.__PVT__chn_alu_out_cns_pipe__DOT__FIFO__DOT__stat_nxt 
        = (((IData)(vlSelfRef.__PVT__chn_alu_out_cns_pipe__DOT__FIFO__DOT__stat) 
            & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_in_rsci_inst__DOT__chn_mul_in_rsci__DOT__ld)) 
               | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_chn_alu_out_rsci_inst__DOT__chn_alu_out_rsci__DOT__ld))) 
           | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_chn_alu_out_rsci_inst__DOT__chn_alu_out_rsci__DOT__ld) 
              & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_in_rsci_inst__DOT__chn_mul_in_rsci__DOT__ld))));
    chn_alu_out_cns_pipe__DOT__FIFO__DOT____Vlvbound_ha955979d__0 
        = vlSelfRef.__PVT__chn_alu_out_cns_pipe__DOT__FIFO__DOT__stat_nxt;
    vlSelfRef.__PVT__chn_alu_out_cns_pipe__DOT__FIFO__DOT__stat_pre 
        = chn_alu_out_cns_pipe__DOT__FIFO__DOT____Vlvbound_ha955979d__0;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_chn_alu_out_rsci_inst__DOT__chn_alu_out_rsci__DOT__vd 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__chn_alu_out_cns_pipe__DOT__FIFO__DOT__stat)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_in_rsci_inst__DOT__chn_mul_in_rsci__DOT__ld)));
    vlSelfRef.__PVT__chn_mul_out_cns_pipe__DOT__FIFO__DOT__stat_nxt 
        = (((IData)(vlSelfRef.__PVT__chn_mul_out_cns_pipe__DOT__FIFO__DOT__stat) 
            & ((~ (IData)(vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_in_rsci_inst__DOT__chn_trt_in_rsci__DOT__ld)) 
               | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_out_rsci_inst__DOT__chn_mul_out_rsci__DOT__ld))) 
           | ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_out_rsci_inst__DOT__chn_mul_out_rsci__DOT__ld) 
              & (~ (IData)(vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_in_rsci_inst__DOT__chn_trt_in_rsci__DOT__ld))));
    chn_mul_out_cns_pipe__DOT__FIFO__DOT____Vlvbound_ha955979d__0 
        = vlSelfRef.__PVT__chn_mul_out_cns_pipe__DOT__FIFO__DOT__stat_nxt;
    vlSelfRef.__PVT__chn_mul_out_cns_pipe__DOT__FIFO__DOT__stat_pre 
        = chn_mul_out_cns_pipe__DOT__FIFO__DOT____Vlvbound_ha955979d__0;
    vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_in_rsci_inst__DOT__chn_trt_in_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_out_rsci_inst__DOT__chn_mul_out_rsci__DOT__ld) 
           | (IData)(vlSelfRef.__PVT__chn_mul_out_cns_pipe__DOT__FIFO__DOT__stat));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_72 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_3) 
           & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nor_tmp_568 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__main_stage_v_1) 
           & ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_3) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_4)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_5 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_4) 
           & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_3));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_1_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_1_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_2_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__663__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_3_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_3_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_5_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_4_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__675__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_4_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_4_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_7_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_5_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__681__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_5_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_5_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_9_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_6_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__687__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_6_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_6_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_11_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_and_cse) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_11_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_11_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_10_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_10_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_9_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_9_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_6_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_6_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_5_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_5_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_4_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_4_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_2_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_2_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_12_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_12_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_13_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_13_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_14_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_14_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_15_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_15_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_8_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_8_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_7_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_7_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_3_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_3_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_2_land_1_lpi_1_dfm_mx1w0;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_nor_tmp_16 
                = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__cfg_bs_alu_algo) 
                         >> 1U));
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_39_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_3_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_3_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_3_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4378__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_49_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_4_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_4_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_4_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4379__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_59_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_5_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_5_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_5_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4380__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_66_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_6_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_6_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_6_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4381__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_73_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_7_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_7_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_7_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4382__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_93_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_9_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_9_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_9_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4384__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_100_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_10_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_10_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_10_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4385__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_114_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_12_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_12_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_12_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4387__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_124_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_13_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_13_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_13_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4388__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_141_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_15_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_15_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_15_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4390__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_151_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4391__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_107_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_11_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_11_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_11_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4386__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_131_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_14_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_14_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_14_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4389__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_19_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_1_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_1_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_1_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4376__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_29_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_2_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_2_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_2_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4377__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_aelse_IsNaN_8U_23U_aelse_or_31_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mux_83_nl)))) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_87;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_8_lpi_1_dfm;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_8_lpi_1_dfm_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_8_lpi_1_dfm_st_5 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_s_1_2_2__4383__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__cfg_alu_shift_value_rsc_triosy_obj_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_33_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_14_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_14_lpi_1_dfm_mx0w0;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_18_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_9_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_9_lpi_1_dfm_mx0w0;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_9_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_6_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_6_lpi_1_dfm_mx0w0;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_39_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_16_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_16_lpi_1_dfm_mx0w0;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_30_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_13_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_13_lpi_1_dfm_mx0w0;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_15_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_8_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_8_lpi_1_dfm_mx0w0;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_27_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_12_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_12_lpi_1_dfm_mx0w0;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_42_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_17_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_if_2_FpMul_8U_23U_if_2_or_28_tmp;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_6_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_5_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_if_2_FpMul_8U_23U_if_2_or_4_tmp;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_24_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_11_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_if_2_FpMul_8U_23U_if_2_or_16_tmp;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_12_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_7_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_if_2_FpMul_8U_23U_if_2_or_8_tmp;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_36_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_15_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_if_2_FpMul_8U_23U_if_2_or_24_tmp;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_45_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_if_2_FpMul_8U_23U_if_2_or_30_tmp;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_21_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_10_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_if_2_FpMul_8U_23U_if_2_or_14_tmp;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_3_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_4_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_if_2_FpMul_8U_23U_if_2_or_2_tmp;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_3_lpi_1_dfm_st 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_if_2_FpMul_8U_23U_if_2_or_tmp;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MulIn_data_and_cse) {
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_5_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_5_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_3_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_3_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_4_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_4_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_6_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_6_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_7_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_7_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_8_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_8_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_9_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_9_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_10_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_10_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_1_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_1_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_13_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_13_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_11_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_11_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_2_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_2_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_12_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_12_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_14_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_14_lpi_1_dfm_7;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_15_lpi_1_dfm_8 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_15_lpi_1_dfm_7;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsZero_8U_23U_and_16_cse) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_1_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[0U]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[1U]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_3_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[2U]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[3U]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_5_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[4U]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_6_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[5U]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_7_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[6U]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_8_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[7U]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_9_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[8U]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_10_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[9U]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_11_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[0x0000000aU]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_13_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[0x0000000cU]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_14_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[0x0000000dU]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_15_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[0x0000000eU]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_16_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[0x0000000fU]));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_12_FpAdd_8U_23U_IsZero_8U_23U_or_itm 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__chn_alu_in_rsci_d_mxwt[0x0000000bU]));
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_81_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_148;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4467__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_148;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_12_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_12_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_12_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4464__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_148;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_12_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_12_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_12_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4465__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_57_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_116;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4427__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_116;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_4_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_4_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_4_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4424__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_116;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_4_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_4_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_4_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4425__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_66_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_128;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4442__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_128;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_7_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_7_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_7_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4439__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_128;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_7_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_7_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_7_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4440__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_87_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_156;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4477__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_156;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_14_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_14_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_14_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4474__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_156;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_14_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_14_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_14_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4475__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_75_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_140;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4457__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_78_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_144;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4462__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_144;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_11_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_11_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_11_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4459__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_144;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_11_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_11_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_11_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4460__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_63_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_124;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4437__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_124;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_6_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_6_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_6_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4434__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_124;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_6_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_6_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_6_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4435__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_75_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_140;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_10_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_10_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_10_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4454__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_140;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_10_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_10_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_10_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4455__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_84_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_152;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4472__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_90_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_160;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4482__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_51_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_108;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4417__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_54_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_112;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4422__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_60_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_120;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4432__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_69_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_132;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4447__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_72_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_136;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4452__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_93_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_164;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4487__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_164;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4484__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_164;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4485__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_51_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_108;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4414__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_108;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4415__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_69_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_132;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_8_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_8_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_8_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4444__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_132;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_8_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_8_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_8_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4445__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_84_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_152;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_13_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_13_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_13_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4469__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_152;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_13_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_13_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_13_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4470__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_60_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_120;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_5_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_5_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_5_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4429__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_120;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_5_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_5_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_5_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4430__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_72_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_136;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_9_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_9_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_9_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4449__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_136;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_9_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_9_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_9_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4450__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_90_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_160;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_15_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_15_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_15_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4479__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_160;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_15_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_15_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_15_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4480__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_54_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_112;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4419__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_112;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4420__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_and_48_cse) {
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_102;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_3_12_10;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_3_12_10_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_7_12_10_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_3_2_2__4412__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_102;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_3_3_2;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_3_3_2_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_7_3_2_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4409__Vfuncout;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__sel 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_102;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__input_1 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_3_1_0;
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__input_0 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_3_1_0_mx0w0;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__sel)
                    ? (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__input_1)
                    : (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__input_0));
            __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__Vfuncout 
                = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_7_1_0_1 
                = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_2_2_2__4410__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_54_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1686;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000fU] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_46_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2087__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_54_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1691;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000fU] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_46_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2090__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_15_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1504;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_3_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[2U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_7_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2009__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_15_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1511;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_3_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[2U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_7_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2012__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_21_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1532;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_5_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[4U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_13_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2021__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_21_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1539;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_5_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[4U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_13_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2024__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_24_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1546;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_6_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[5U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_16_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2027__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_24_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1553;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_6_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[5U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_16_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2030__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_27_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1560;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_7_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[6U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_19_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2033__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_27_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1567;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_7_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[6U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_19_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2036__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_30_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1574;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_8_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[7U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_22_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2039__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_30_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1581;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_8_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[7U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_22_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2042__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_33_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1588;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_9_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[8U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_25_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2045__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_33_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1595;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_9_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[8U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_25_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2048__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_36_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1602;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_10_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[9U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_28_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2051__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_36_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1609;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_10_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[9U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_28_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2054__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_39_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1616;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_11_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000aU] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_31_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2057__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_39_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1623;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_11_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000aU] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_31_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2060__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_42_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1630;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_12_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000bU] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_34_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2063__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_42_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1637;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_12_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000bU] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_34_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2066__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_45_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1644;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_13_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000cU] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_37_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2069__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_45_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1651;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_13_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000cU] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_37_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2072__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_48_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1658;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_14_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000dU] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_40_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2075__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_48_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1665;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_14_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000dU] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_40_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2078__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_and_51_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1672;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_15_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000eU] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_43_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2081__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_51_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__sel 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1679;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_15_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__input_0 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0x0000000eU] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__sel)
                    ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__input_1
                    : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__input_0);
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_43_itm 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_30_2_2__2084__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_144_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1044) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1046) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1048) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1050)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_1_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_1_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_1_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_3 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[0U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                = (__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_0 
                   & (- (IData)((1U & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__sel)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                   | (__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_1 
                      & (- (IData)((1U & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                   | (__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_2 
                      & (- (IData)((1U & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                   | (__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__input_3 
                      & (- (IData)((1U & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__sel) 
                                          >> 3U))))));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_1_itm_2 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1915__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_147_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1052) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1054) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1048) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1050)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_4_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_4_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_2_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_3 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[1U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                = (__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_0 
                   & (- (IData)((1U & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__sel)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                   | (__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_1 
                      & (- (IData)((1U & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                   | (__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_2 
                      & (- (IData)((1U & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                   | (__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__input_3 
                      & (- (IData)((1U & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__sel) 
                                          >> 3U))))));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_4_itm_2 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1918__Vfuncout;
        }
        if (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_and_150_cse) {
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__sel 
                = ((((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1060) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1062) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1048) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_1050)));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_0 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_10_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_1 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_10_itm;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_2 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IntShiftLeft_16U_6U_32U_return_30_1_4_sva_2;
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_3 
                = (0x3fffffffU & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__AluIn_data_sva_501[3U] 
                                  >> 1U));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                = (__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_0 
                   & (- (IData)((1U & (IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__sel)))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                   | (__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_1 
                      & (- (IData)((1U & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                   | (__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_2 
                      & (- (IData)((1U & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                = (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result 
                   | (__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__input_3 
                      & (- (IData)((1U & ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__sel) 
                                          >> 3U))))));
            __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__Vfuncout 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__Vstatic__result;
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_10_itm_2 
                = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX1HOT_v_30_4_2__1921__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_393) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_785))))) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_2_lpi_1_dfm 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_2_lpi_1_dfm_mx0w0;
        }
        if (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_393) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_783))))) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_4_lpi_1_dfm 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_4_lpi_1_dfm_mx0w0;
        }
        if (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_393) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_694))))) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_5_lpi_1_dfm 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_5_lpi_1_dfm_mx0w0;
        }
        if (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_393) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_780))))) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_6_lpi_1_dfm 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_6_lpi_1_dfm_mx0w0;
        }
        if (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_393) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_777))))) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_9_lpi_1_dfm 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_9_lpi_1_dfm_mx0w0;
        }
        if (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_393) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_775))))) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_10_lpi_1_dfm 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_10_lpi_1_dfm_mx0w0;
        }
        if (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_393) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_688))))) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_11_lpi_1_dfm 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_11_lpi_1_dfm_mx0w0;
        }
        if (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_393) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_686))))) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_13_lpi_1_dfm 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_13_lpi_1_dfm_mx0w0;
        }
        if (((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_393) 
                   | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_dcpl_683))))) {
            vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_14_lpi_1_dfm 
                = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_3_land_14_lpi_1_dfm_mx0w0;
        }
    } else {
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_11_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_10_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_9_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_6_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_5_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_4_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_2_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_12_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_13_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_14_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_15_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_8_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_7_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_3_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_land_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_3_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_4_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_5_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_6_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_7_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_9_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_10_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_12_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_13_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_15_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_11_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_14_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_1_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_2_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_8_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_14_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_9_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_6_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_16_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_13_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_8_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_12_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_17_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_5_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_11_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_7_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_15_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_10_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_4_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_3_lpi_1_dfm_st = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_nor_tmp_16 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_5_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_3_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_4_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_6_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_7_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_8_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_9_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_10_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_1_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_13_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_11_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_2_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_12_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_14_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_else_land_15_lpi_1_dfm_8 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_1_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_3_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_5_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_6_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_7_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_8_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_9_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_10_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_11_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_13_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_14_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_15_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_16_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_12_FpAdd_8U_23U_IsZero_8U_23U_or_itm = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_12_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_4_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_7_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_14_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_10_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_11_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_6_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_13_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_15_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_5_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_8_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_9_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_7_12_10_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_46_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_46_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_7_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_7_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_13_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_13_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_16_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_16_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_19_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_19_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_22_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_22_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_25_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_25_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_28_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_28_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_31_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_31_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_34_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_34_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_37_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_37_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_40_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_40_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_if_mux_43_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_43_itm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_1_itm_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_4_itm_2 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_else_else_if_mux_10_itm_2 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_12_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_12_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_4_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_4_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_7_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_7_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_14_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_14_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_11_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_11_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_6_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_6_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_10_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_10_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_8_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_8_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_13_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_13_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_5_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_5_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_9_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_9_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_15_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_15_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_7_3_2_1 = 0U;
        vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_7_1_0_1 = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_2_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_4_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_5_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_6_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_9_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_10_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_11_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_13_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__IsNaN_8U_23U_1_land_14_lpi_1_dfm = 0U;
    }
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_7_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__693__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_7_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_7_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_13_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_8_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__699__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_8_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_8_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_15_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_9_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__705__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_9_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_9_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_17_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_10_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__711__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_10_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_10_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_19_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_11_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__717__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_11_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_11_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_21_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_12_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__723__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_12_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_12_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_23_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_13_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__729__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_13_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_13_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_25_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_14_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__735__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_14_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_14_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_27_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_15_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__741__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_15_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_15_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_29_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_16_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__747__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_31_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__753__Vfuncout;
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__sel 
        = (1U & (IData)((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_2_lpi_1_dfm_5 
                         >> 0x31U)));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_2_lpi_1_dfm_5 
                                    >> 1U));
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__input_0 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_3_nl;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__sel)
            ? __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__input_1
            : __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__input_0);
    __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__Vfuncout 
        = vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_3_lpi_1_dfm_2_mx0 
        = __Vfunc_X_alu_inst__DOT__X_alu_core_inst__DOT__MUX_v_49_2_2__669__Vfuncout;
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_584 
        = (1U & ((~ ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_10_FpMantRNE_48U_24U_else_and_svs_2)) 
                     | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_10_FpMantRNE_48U_24U_else_and_svs_st_2))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h39421174_1_24)));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_577 
        = (1U & ((~ ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_11_FpMantRNE_48U_24U_else_and_svs_2)) 
                     | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_11_FpMantRNE_48U_24U_else_and_svs_st_2))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h39421174_1_26)));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_570 
        = (1U & ((~ ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_12_FpMantRNE_48U_24U_else_and_svs_2)) 
                     | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_12_FpMantRNE_48U_24U_else_and_svs_st_2))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h39421174_1_28)));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_563 
        = (1U & ((~ ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_13_FpMantRNE_48U_24U_else_and_svs_2)) 
                     | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_13_FpMantRNE_48U_24U_else_and_svs_st_2))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h39421174_1_30)));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_556 
        = (1U & ((~ ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_14_FpMantRNE_48U_24U_else_and_svs_2)) 
                     | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_14_FpMantRNE_48U_24U_else_and_svs_st_2))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h39421174_1_32)));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_549 
        = (1U & ((~ ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_15_FpMantRNE_48U_24U_else_and_svs_2)) 
                     | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_15_FpMantRNE_48U_24U_else_and_svs_st_2))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h39421174_1_34)));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_542 
        = (1U & ((~ ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_16_FpMantRNE_48U_24U_else_and_svs_2)) 
                     | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_16_FpMantRNE_48U_24U_else_and_svs_st_2))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h39421174_1_36)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1835_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_11_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_390) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2082_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_14_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_387) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1023_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_1_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_400) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1103_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_2_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_399) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1185_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_3_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_398) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1268_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_4_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_397) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1430_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_6_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_395) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1512_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_7_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_394) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1592_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_8_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_393) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1672_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_9_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_392) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1752_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_10_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_391) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1913_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_12_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_389) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1996_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_13_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_388) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2162_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_15_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_386) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2242_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_lpi_1_dfm_st_8) 
           | ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_385) 
              | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl)));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_362 
        = ((IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_396) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2278_nl));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3928__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_14_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3928__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_14_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3928__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3928__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3928__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_14_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3928__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_14_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_14_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_14_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_14_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_14_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_14_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_14_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_14_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3932__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3886__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_7_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3886__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_7_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3886__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3886__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3886__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_7_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3886__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_7_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_7_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_7_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_7_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_7_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_7_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_7_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_7_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3890__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3916__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_12_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3916__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_12_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3916__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3916__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3916__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_12_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3916__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_12_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_12_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_12_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_12_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_12_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_12_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_12_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_12_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3920__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3868__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_4_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3868__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_4_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3868__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3868__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3868__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_4_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3868__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_4_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_4_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_4_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_4_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_4_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_4_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_4_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_4_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3872__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3910__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_11_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3910__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_11_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3910__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3910__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3910__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_11_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3910__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_11_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_11_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_11_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_11_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_11_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_11_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_11_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_11_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3914__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3880__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_6_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3880__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_6_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3880__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3880__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3880__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_6_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3880__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_6_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_6_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_6_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_6_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_6_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_6_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_6_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_6_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3884__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3934__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_15_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3934__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_15_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3934__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3934__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3934__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_15_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3934__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_15_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_15_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_15_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_15_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_15_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_15_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_15_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_15_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3938__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3862__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_3_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3862__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_3_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3862__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3862__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3862__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_3_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3862__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_3_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_3_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_3_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_3_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_3_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_3_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_3_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_3_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3866__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3904__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_10_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3904__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_10_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3904__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3904__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3904__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_10_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3904__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_10_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_10_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_10_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_10_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_10_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_10_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_10_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_10_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3908__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3922__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_13_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3922__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_13_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3922__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3922__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3922__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_13_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3922__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_13_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_13_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_13_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_13_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_13_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_13_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_13_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_13_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3926__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3898__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_9_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3898__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_9_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3898__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3898__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3898__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_9_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3898__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_9_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_9_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_9_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_9_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_9_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_9_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_9_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_9_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3902__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3874__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_5_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3874__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_5_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3874__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3874__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3874__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_5_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3874__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_5_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_5_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_5_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_5_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_5_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_5_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_5_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_5_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3878__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3940__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3940__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3940__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3940__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3940__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3940__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_16_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_16_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_16_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3944__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3892__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_8_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3892__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_8_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3892__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3892__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3892__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_8_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3892__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_8_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_8_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_8_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_8_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_8_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_8_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_8_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_8_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3896__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3856__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_2_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3856__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_2_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3856__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3856__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3856__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_2_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3856__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_2_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_2_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_2_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_2_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_2_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_2_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_2_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_2_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3860__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3850__sel 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_1_lpi_1_dfm_1_mx0))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3850__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__nl_FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_1_sva);
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3850__sel)
            ? 0x007fffffU : __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3850__input_0);
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3850__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_mant_1_lpi_1_dfm 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX_v_23_2_2__3850__Vfuncout;
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_1_FpMantRNE_48U_24U_else_and_svs_2)) 
                  << 2U)) | ((((0xffU == (0x000000ffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_1_lpi_1_dfm_1_mx0)))) 
                               & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_1_FpMantRNE_48U_24U_else_and_svs_2)) 
                              << 1U) | ((0xffU != (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_1_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_1_FpMantRNE_48U_24U_else_and_svs_2))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_1_lpi_1_dfm_1_mx0)));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__input_2 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_p_expo_1_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__sel)))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__sel) 
                                  >> 2U))))));
    __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__Vfuncout 
        = vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMantWidthDec_8U_47U_23U_0U_0U_o_expo_1_lpi_1_dfm_1 
        = __Vfunc_X_mul_inst__DOT__X_mul_core_inst__DOT__MUX1HOT_v_8_3_2__3854__Vfuncout;
    vlSelfRef.X_alu_inst__DOT__X_alu_core_inst__DOT____VdfgRegularize_h74425f87_0_16 
        = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_899_cse) 
           | (2U != (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__cfg_alu_algo_1_sva_st_205)));
    vlSelfRef.X_alu_inst__DOT__X_alu_core_inst__DOT____VdfgRegularize_h74425f87_0_268 
        = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_899_cse) 
           | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_equal_tmp_237));
    vlSelfRef.X_alu_inst__DOT__X_alu_core_inst__DOT____VdfgRegularize_h74425f87_0_356 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_nor_dfs_79)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_899_cse)));
    vlSelfRef.X_alu_inst__DOT__X_alu_core_inst__DOT____VdfgRegularize_h74425f87_0_13 
        = (1U & ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_899_cse) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__cfg_alu_algo_1_sva_st_205)));
    vlSelfRef.__VdfgRegularize_h39421174_1_39 = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__main_stage_v_4)) 
                                                    | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_1812_nl)));
    vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_out_rsci_inst__DOT__X_trt_core_chn_trt_out_rsci_chn_trt_out_wait_dp_inst__DOT__chn_trt_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_out_rsci_inst__DOT__X_trt_core_chn_trt_out_rsci_chn_trt_out_wait_ctrl_inst__DOT__chn_trt_out_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_out_rsci_inst__DOT__chn_trt_out_rsci__DOT__vd));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5843__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_16_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5843__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5843__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5842__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5843__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5842__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000fU]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5842__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5842__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5842__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5842__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5846__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_15_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5846__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5846__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5845__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5846__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5845__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000eU]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5845__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5845__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5845__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_15_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5845__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5849__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_14_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5849__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5849__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5848__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5849__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5848__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000dU]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5848__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5848__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5848__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_14_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5848__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5852__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_13_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5852__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5852__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5851__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5852__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5851__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000cU]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5851__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5851__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5851__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_13_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5851__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5855__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_12_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5855__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5855__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5854__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5855__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5854__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000bU]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5854__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5854__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5854__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_12_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5854__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5858__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_11_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5858__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5858__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5857__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5858__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5857__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0x0000000aU]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5857__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5857__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5857__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_11_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5857__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5861__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_10_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5861__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5861__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5860__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5861__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5860__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[9U]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5860__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5860__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5860__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_10_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5860__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5864__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_9_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5864__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5864__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5863__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5864__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5863__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[8U]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5863__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5863__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5863__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_9_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5863__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5867__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_8_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5867__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5867__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5866__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5867__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5866__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[7U]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5866__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5866__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5866__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_8_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5866__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5870__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_7_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5870__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5870__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5869__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5870__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5869__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[6U]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5869__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5869__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5869__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_7_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5869__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5873__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_6_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5873__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5873__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5872__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5873__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5872__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[5U]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5872__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5872__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5872__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_6_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5872__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5876__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_5_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5876__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5876__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5875__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5876__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5875__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[4U]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5875__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5875__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5875__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_5_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5875__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5879__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_4_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5879__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5879__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5878__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5879__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5878__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[3U]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5878__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5878__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5878__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_4_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5878__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5882__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_3_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5882__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5882__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5881__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5882__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5881__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[2U]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5881__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5881__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5881__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_3_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5881__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5885__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_2_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5885__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5885__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5884__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5885__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5884__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[1U]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5884__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5884__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5884__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_2_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5884__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5888__vector 
        = (0x00000001ffffffffULL & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__nl_relu_loop_1_else_else_acc_nl);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp 
        = (0x00000001ffffffffULL & VL_SHIFTR_QQI(33,33,32, __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5888__vector, 0x00000020U));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5888__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__Vstatic__tmp));
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5887__sel 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__readslicef_33_1_32__5888__Vfuncout;
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5887__input_1 
        = (0x7fffffffU & vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_d_mxwt[0U]);
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result 
        = ((IData)(__Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5887__sel)
            ? __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5887__input_1
            : 0U);
    __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5887__Vfuncout 
        = vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__Vstatic__result;
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__relu_loop_else_else_qr_30_0_1_lpi_1_dfm 
        = __Vfunc_X_relu_inst__DOT__X_relu_core_inst__DOT__MUX_v_31_2_2__5887__Vfuncout;
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_in_rsci_inst__DOT__X_mul_core_chn_mul_in_rsci_chn_mul_in_wait_dp_inst__DOT__chn_mul_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_in_rsci_inst__DOT__X_mul_core_chn_mul_in_rsci_chn_mul_in_wait_ctrl_inst__DOT__chn_mul_in_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_in_rsci_inst__DOT__chn_mul_in_rsci__DOT__vd));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_in_rsci_inst__DOT__X_relu_core_chn_relu_in_rsci_chn_relu_in_wait_dp_inst__DOT__chn_relu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_in_rsci_inst__DOT__X_relu_core_chn_relu_in_rsci_chn_relu_in_wait_ctrl_inst__DOT__chn_relu_in_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_in_rsci_inst__DOT__chn_relu_in_rsci__DOT__vd));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_out_rsci_inst__DOT__X_mul_core_chn_mul_out_rsci_chn_mul_out_wait_dp_inst__DOT__chn_mul_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_out_rsci_inst__DOT__X_mul_core_chn_mul_out_rsci_chn_mul_out_wait_ctrl_inst__DOT__chn_mul_out_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__X_mul_core_chn_mul_out_rsci_inst__DOT__chn_mul_out_rsci__DOT__vd));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_chn_alu_out_rsci_inst__DOT__X_alu_core_chn_alu_out_rsci_chn_alu_out_wait_dp_inst__DOT__chn_alu_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_chn_alu_out_rsci_inst__DOT__X_alu_core_chn_alu_out_rsci_chn_alu_out_wait_ctrl_inst__DOT__chn_alu_out_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__X_alu_core_chn_alu_out_rsci_inst__DOT__chn_alu_out_rsci__DOT__vd));
    vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_in_rsci_inst__DOT__X_trt_core_chn_trt_in_rsci_chn_trt_in_wait_dp_inst__DOT__chn_trt_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_in_rsci_inst__DOT__X_trt_core_chn_trt_in_rsci_chn_trt_in_wait_ctrl_inst__DOT__chn_trt_in_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__X_trt_inst__DOT__X_trt_core_inst__DOT__X_trt_core_chn_trt_in_rsci_inst__DOT__chn_trt_in_rsci__DOT__vd));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_505 
        = ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__and_dcpl_5)) 
           & (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_1_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_2_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_2_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_3_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_4_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_4_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_4_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_5_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_5_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_5_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_6_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_6_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_6_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_7_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_7_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_7_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_8_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_8_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_8_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_9_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_9_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_9_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_10_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_10_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_10_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_11_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_11_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_11_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_12_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_12_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_12_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_13_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_13_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_13_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_14_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_14_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_14_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_15_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_15_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_15_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_16_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_16_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpMantRNE_49U_24U_else_carry_2_sva 
        = (IData)(((vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_3_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAdd_8U_23U_int_mant_3_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_585_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_12_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_29_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_453_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_7_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_24_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_378_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_4_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_21_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_631_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_14_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_31_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_562_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_11_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_28_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_430_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_6_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_23_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_533_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_10_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_27_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2834_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_15_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_32_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2631_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_3_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_20_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2798_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_13_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_30_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2745_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_9_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_26_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2675_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_5_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_22_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2865_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_16_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2722_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_8_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_25_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2608_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_2_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_19_lpi_1_dfm_st)));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2577_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_1_FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st)) 
                 | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__FpMul_8U_23U_lor_18_lpi_1_dfm_st)));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_646 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_1_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1023_nl));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_640 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_2_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1103_nl));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_634 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_3_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1185_nl));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_627 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_4_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1268_nl));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_615 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_6_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1430_nl));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_609 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_7_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1512_nl));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_603 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_8_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1592_nl));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_597 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_9_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1672_nl));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_590 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_10_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1752_nl));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_576 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_12_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1913_nl));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_569 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_13_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1996_nl));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_555 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_15_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2162_nl));
    vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_548 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_11) 
           | (IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_2242_nl));
    vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__or_1348_nl 
        = ((IData)(vlSelfRef.__PVT__X_mul_inst__DOT__X_mul_core_inst__DOT__mul_loop_mul_if_land_5_lpi_1_dfm_st_8) 
           | (IData)(vlSelfRef.X_mul_inst__DOT__X_mul_core_inst__DOT____VdfgRegularize_h80ff441e_0_362));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_404 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_1_FpCmp_8U_23U_false_slc_8_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_419 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_2_FpCmp_8U_23U_false_slc_8_1_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_434 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_3_FpCmp_8U_23U_false_slc_8_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_449 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_4_FpCmp_8U_23U_false_slc_8_1_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_476 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_8_FpCmp_8U_23U_false_slc_8_1_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_507 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_13_FpCmp_8U_23U_false_slc_8_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_522 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_14_FpCmp_8U_23U_false_slc_8_1_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_537 
        = (1U & (IData)(((2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)) 
                         & (~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_15_FpCmp_8U_23U_false_slc_8_svs_2)))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_552 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_16_FpCmp_8U_23U_false_slc_8_1_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_567 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_5_FpCmp_8U_23U_false_slc_8_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_578 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_6_FpCmp_8U_23U_false_slc_8_1_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_589 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_7_FpCmp_8U_23U_false_slc_8_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_600 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_9_FpCmp_8U_23U_false_slc_8_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_611 
        = ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_10_FpCmp_8U_23U_false_slc_8_1_svs_2)) 
           & (2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_622 
        = (1U & (IData)(((2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)) 
                         & (~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_11_FpCmp_8U_23U_false_slc_8_svs_2)))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__and_dcpl_633 
        = (1U & (IData)(((2U == (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)) 
                         & (~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__alu_loop_op_12_FpCmp_8U_23U_false_slc_8_1_svs_2)))));
    vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__or_2494_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__reg_cfg_alu_algo_1_sva_st_93_cse)) 
                 | (IData)(vlSelfRef.__PVT__X_alu_inst__DOT__X_alu_core_inst__DOT__FpAlu_8U_23U_equal_tmp_2)));
}
