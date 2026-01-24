// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_1__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out_prdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_10) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out0_vld))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_0) 
                 & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_22))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_1) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_7))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5360__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5313__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
              >> 0x00000017U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5362__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1)) 
              & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c 
        = ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5361__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5352__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5328__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5331__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5329__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5315__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp) 
               & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
           | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5358__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5363__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5365__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5314__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5356__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5330__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5316__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5364__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5366__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5357__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5332__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5359__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5333__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5354__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5355__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5387__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5387__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5387__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5387__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5388__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5388__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5388__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5388__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5389__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5389__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5389__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5389__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5394__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5394__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5394__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5394__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5394__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5394__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5404__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5404__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5404__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5404__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5415__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5415__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5415__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5415__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5415__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5415__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5422__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5422__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5422__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5422__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5422__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5422__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5438__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5438__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5438__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5438__vector = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5447__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5447__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5447__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5447__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5447__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5447__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5448__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5448__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5448__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5448__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5448__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5448__arg2 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5414__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5414__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5414__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5414__Vfuncout)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5389__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5389__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5389__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5389__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5440__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5440__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5440__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5440__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5440__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5440__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5440__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5440__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5442__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5442__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5442__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5442__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5442__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5442__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5442__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5442__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5444__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5444__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5444__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5444__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5444__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5444__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5444__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5444__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5446__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5446__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5446__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5446__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5446__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5446__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5446__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5446__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[2U] 
                           << 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[1U] 
                                     >> 0x00000018U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5449__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data7[2U] 
                           << 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data7[1U] 
                                     >> 0x00000018U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5450__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5388__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5388__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5388__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5388__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5390__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5391__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5392__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp 
        = ((0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x0000000aU)) == (0x0000003fU 
                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x0aU))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5386__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5386__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5386__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5386__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5403__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5403__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5403__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5403__Vfuncout))))));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5415__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5415__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5415__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5415__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5415__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5415__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5418__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5419__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5387__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5387__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5387__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5387__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5404__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5404__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5404__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5404__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5420__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5420__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5420__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5420__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                  << 2U))) | (((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x00600000U 
                                                          & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                        & ((~ 
                                                            (((~ (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x00006000U 
                                                                            & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                          & ((0U 
                                                                              != 
                                                                              (0x00001800U 
                                                                               & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                             | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 9U))))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                             | ((~ (IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x00000060U 
                                                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                            & ((0U 
                                                                                != 
                                                                                (0x00000018U 
                                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                               | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 1U))))))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))) 
                                                           & ((0U 
                                                               != 
                                                               (0x00180000U 
                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000011U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                       >> 0x00000016U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                              >> 0x00000014U))) 
                                                         | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                               >> 0x00000012U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000010U)))) 
                                                             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                  >> 0x0000000eU) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000cU))) 
                                                                    | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000aU) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                               >> 8U)))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                    >> 6U) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                           >> 4U))) 
                                                                      | ((1U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                              >> 1U))) 
                                                                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10))))))) 
                                                    | (IData)(
                                                              (((0U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5447__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5447__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5448__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5447__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5448__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5447__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5448__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5448__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5448__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5447__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5448__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5447__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5395__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5395__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5395__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5395__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5436__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5437__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5396__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5396__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5396__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5396__Vfuncout)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5438__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5438__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5438__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5438__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5422__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5422__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5422__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5422__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5422__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5422__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5394__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5394__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5394__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5394__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5394__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5394__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5416__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5416__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5416__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5416__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5416__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5416__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5417__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5417__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5417__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5417__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5417__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5417__Vfuncout))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5393__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
}

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out_prdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out3_vld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_9))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_2) 
                 & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_23))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_3) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_5))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5429__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5382__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
              >> 0x00000017U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5431__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1)) 
              & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c 
        = ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5430__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5421__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5397__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5400__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5398__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5384__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp) 
               & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
           | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5427__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5432__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5434__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5383__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5425__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5399__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5385__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5433__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5435__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5426__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5401__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5428__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5402__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5423__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5424__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5456__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5456__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5456__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5456__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5457__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5457__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5457__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5457__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5458__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5458__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5458__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5458__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5463__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5463__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5463__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5463__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5463__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5463__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5473__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5473__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5473__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5473__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5484__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5484__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5484__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5484__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5484__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5484__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5491__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5491__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5491__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5491__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5491__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5491__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5507__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5507__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5507__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5507__vector = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5516__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5516__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5516__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5516__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5516__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5516__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5517__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5517__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5517__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5517__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5517__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5517__arg2 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5483__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5483__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5483__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5483__Vfuncout)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5458__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5458__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5458__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5458__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5509__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5509__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5509__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5509__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5509__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5509__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5509__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5509__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5511__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5511__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5511__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5511__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5511__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5511__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5511__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5511__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5513__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5513__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5513__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5513__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5513__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5513__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5513__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5513__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5515__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5515__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5515__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5515__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5515__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5515__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5515__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5515__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[3U] 
                           << 0x0000000cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[2U] 
                                              >> 0x00000014U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__5518__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data7[3U] 
                           << 0x0000000cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data7[2U] 
                                              >> 0x00000014U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__5519__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5457__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5457__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5457__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__5457__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5459__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5460__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5461__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp 
        = ((0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x0000000aU)) == (0x0000003fU 
                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x0aU))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5455__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5455__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5455__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5455__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5472__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5472__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5472__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5472__Vfuncout))))));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5484__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5484__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5484__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5484__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5484__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__5484__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5487__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5488__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5456__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5456__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5456__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5456__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5473__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5473__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5473__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__5473__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5489__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5489__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5489__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5489__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                  << 2U))) | (((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x00600000U 
                                                          & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                        & ((~ 
                                                            (((~ (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x00006000U 
                                                                            & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                          & ((0U 
                                                                              != 
                                                                              (0x00001800U 
                                                                               & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                             | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 9U))))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                             | ((~ (IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x00000060U 
                                                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                            & ((0U 
                                                                                != 
                                                                                (0x00000018U 
                                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                               | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 1U))))))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))) 
                                                           & ((0U 
                                                               != 
                                                               (0x00180000U 
                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000011U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                       >> 0x00000016U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                              >> 0x00000014U))) 
                                                         | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                               >> 0x00000012U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000010U)))) 
                                                             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                  >> 0x0000000eU) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000cU))) 
                                                                    | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000aU) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                               >> 8U)))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                    >> 6U) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                           >> 4U))) 
                                                                      | ((1U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                              >> 1U))) 
                                                                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10))))))) 
                                                    | (IData)(
                                                              (((0U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5516__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5516__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5517__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5516__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5517__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5516__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5517__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5517__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5517__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5516__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__5517__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__5516__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5464__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5464__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5464__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5464__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5505__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5506__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5465__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5465__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5465__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5465__Vfuncout)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5507__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5507__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5507__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__5507__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5491__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5491__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5491__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5491__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5491__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5491__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5463__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5463__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5463__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5463__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5463__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__5463__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5485__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5485__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5485__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5485__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5485__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5485__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5486__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5486__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5486__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5486__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5486__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5486__Vfuncout))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__5462__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
}

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out_prdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out2_vld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_9))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_4) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in3_b_rdy))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_4) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in3_a_rdy))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5498__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5451__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
              >> 0x00000017U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5500__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1)) 
              & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c 
        = ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5499__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5490__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5466__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5469__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5467__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5453__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp) 
               & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
           | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5496__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5501__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5503__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5452__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5494__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5468__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5454__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5502__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5504__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5495__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5470__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5497__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5471__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5492__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__5493__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_add___ctor_var_reset(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->chn_a_rsc_z = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2380236594467781804ull);
    vlSelf->chn_a_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17991353141507009153ull);
    vlSelf->chn_a_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13710593673808292217ull);
    vlSelf->chn_b_rsc_z = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16850365506322810530ull);
    vlSelf->chn_b_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13162467270669676242ull);
    vlSelf->chn_b_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8307224015079505439ull);
    vlSelf->chn_o_rsc_z = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1477624943684843811ull);
    vlSelf->chn_o_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16276632572638137710ull);
    vlSelf->chn_o_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12314530991929382410ull);
    vlSelf->__PVT__chn_b_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4422829178647546904ull);
    vlSelf->__PVT__chn_o_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11134422164122515618ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12733415904345860119ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__core_wten = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17990521722813521676ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9510404244508436310ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 288760911833150734ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7677217252897385302ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15760476143063115722ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11444495132170531254ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14024169596854203875ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17328339640969696108ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13752698709135859053ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16790817256058822223ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 330807079975731788ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9987178055467848219ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7713850140736320244ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15686899868919285600ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1015362070178169500ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7356475980823918191ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17259217919688501740ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1882645075662995939ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13169476465819733772ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7167811979578648166ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6406726249514469409ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13368364361607950700ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9238073218523236287ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12113979230315378585ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2083731557826993338ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2928927593292244500ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17099252821459765533ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2003493028301746726ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14245179529512674254ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16346170982658820326ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11585174269275393201ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8064066774878077122ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4224543759971956267ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14835240959960416822ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2605941588323639501ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2168194854243712510ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5409487476750633606ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4265575566803840992ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15158184407384412402ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10285287670293881691ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13162508053059109070ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 613123807375780023ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14766765681442592473ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5318646080748487088ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12275115092916399684ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16948267969193868360ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6581797472417392449ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7224152945129754175ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12756267085448855203ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17548825331718382088ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18011063300844606049ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18064587086756339917ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2334103788990961226ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2603378260456333930ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18276113002622845317ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9343862764043425396ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16281480152050500734ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8886283864561938044ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13123215145002100684ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 860252001134247241ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4473762740533611810ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12804214500756952385ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2912684962302557927ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11525279084294371668ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7172291333059809609ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10745396181696069887ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10730688102813613608ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4555670700523778272ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14648511642730534629ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2869686720689186809ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1207631942115172708ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2173144260044106963ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__z_out = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14774361888536987996ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10159553594398895567ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13567591060300407712ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12046369438200206969ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10797163121822103836ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11962646619558866016ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16250813147996608934ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4576031297851158105ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11841990413539911003ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14828033587362464085ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2871250585451980352ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4102212541761743152ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 805384878199967956ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 492203026808179955ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6723102793244297359ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15814500156066868999ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11911244000982519542ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10717695833751520974ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7313060139539881603ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16314797805371327991ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12638652902433118427ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13901387510066479718ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12999126514638696334ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5225213477447163081ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11370884391255577218ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17683881200430530261ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2029689796419456115ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3161296373799687202ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 6747948734905772102ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8212976783845662224ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10581979461292997273ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3010939909778022261ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2934285197111540318ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8252853986782147650ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11896744446921592056ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3199102684943886422ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5948964299956309856ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1243357726733887443ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7151633175771889704ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10882513888884564270ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16090032531263347210ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4688918923608696763ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15092934137746775373ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16217174705753594457ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12706072096130339229ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2291736060441525322ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12887441249610728004ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4445383634292961716ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1973403709663154394ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1067179659620074929ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10127041037756278600ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2698844924784610105ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18121953272458402079ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10298932522565303768ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3368824286341206039ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13644997370347358733ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6406981648382503339ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 410144146630465759ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10720966026061242302ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9180421268112205907ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2448608859182051725ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10455201317064137743ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2832255692991003711ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5011904876550786061ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12033859775749329526ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10915865941332561453ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9222886174037358738ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13556727279401177574ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1978693999547129107ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6797640055375229355ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14336302501496078782ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13464712472026180258ull);
    vlSelf->HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13581421133393862589ull);
    vlSelf->HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11090282323046157108ull);
    vlSelf->HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13621746465932487602ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 950548210589651918ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1750195078063242509ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9009890152222027068ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1985668272058785619ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3025629301520292201ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8246868870024323785ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10794212393977782049ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16385362974798661798ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 451196769204852699ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13228082861621896197ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11313264689117624587ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6376132054677065012ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11054542373283273723ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14427463811339651967ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7567026139627350178ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15668624815983906871ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17607575445920979504ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12383412943564013627ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12652076908396878050ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4919615034356563165ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3683947450030035171ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12789689995905169748ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2409673584252292632ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13616814704913744599ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12289197541701072567ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5166575055493071296ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6123433724415660909ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4143565725253051379ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15551353855967734078ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10686233606314474569ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1297295085272990854ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__d = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11940009502996367308ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12757032670882296595ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12614124471969549994ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6456763005835171242ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2247725198601730837ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1613509078757375386ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13324002770683650841ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8192639688764872536ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1183993220319273787ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9255911051198882116ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13103971198755338340ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1147756552244751134ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12325512685404792471ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2926234323937798529ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17449246478025428909ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 521514410134282951ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15452574436350791595ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4063157917080388058ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13266758370831152547ull);
    vlSelf->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9900183298461820026ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14062961083595209782ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8297674750168376540ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__13__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11603041024290570006ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__13__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8975143412931109068ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__14__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9428916734834179559ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__14__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6354217273360373733ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__21__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12247868894192212087ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__21__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13816485699136943588ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__32__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12916457056821466063ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__32__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3805892769261796026ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__34__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8293702010396691035ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__34__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2093078228224023660ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__34__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3340450662033261220ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__35__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16558438964225442775ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__35__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8837267771874632724ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__35__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6650401772386149681ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__38__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1811383408554568351ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__38__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10964132461127486664ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6690253976089772704ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__58__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15718976176863668421ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__58__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18018116735586397649ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__58__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 971647608109086334ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__58__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6229021750920613477ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 23647657179879678ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16747557596665963422ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12587758665616354686ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6679096958576877802ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__60__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17830113305220417940ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__60__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17640482298443998547ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__60__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3349187991088967628ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__60__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4933903688073783797ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15613135247903489227ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__62__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2910420605098480938ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__62__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12835788485078668562ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__62__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3446127570528756152ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__62__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4068951359398301163ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2227294068566163139ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4721111387231689169ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11433872975298166463ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2865090196416817778ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__64__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9548078011210513716ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__64__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6652543536048290565ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__64__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17277001881065205054ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__64__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14728935483113480775ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__73__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6785903113168950245ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__73__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15136926833126520274ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__82__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7236988301481714071ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__82__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6682763165465821574ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__83__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10809340847529611999ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__83__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11154624188781674192ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__90__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11900995317350554848ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__90__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9882569029745324707ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__101__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7057684280596123362ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__101__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17215946474205126181ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__103__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10368518025150345349ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__103__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14430768447919250243ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__103__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2007281781414687355ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__104__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6139922756018383693ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__104__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10102993735401088270ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__104__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16059585469317543341ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__107__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16271007261825061632ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__107__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15093410097093278318ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5129629683713257323ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__127__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9996544802119605034ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__127__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16118749854996083436ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__127__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5133627956604836966ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__127__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2602461375775385058ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4426264104859958496ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5229983239291499121ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17316426432825979948ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1441267018601444066ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__129__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15526619827554526005ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__129__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4723591592760449434ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__129__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9664761668871464087ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__129__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11642341080085832372ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14144277169926057472ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__131__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9214516222074070304ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__131__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10951064049483799181ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__131__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16408404349734162363ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__131__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15856682753444758383ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15307042730565597320ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18133249294765219589ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10293487549995723878ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14162995033951100478ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__133__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16805431739219276622ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__133__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3937728720038070233ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__133__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5512224371077837498ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__133__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17637527361520980748ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__142__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15996819460814271125ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__142__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13197472859244001019ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__151__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3265664257103696207ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__151__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4565446632955307936ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__152__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15413690207979156108ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__152__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6548074327760443147ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__159__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5211055332699867336ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__159__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 656913567948678272ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__170__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13155599047237464224ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__170__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8590923070001893554ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__172__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15648028415617017391ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__172__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1093850376755080044ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__172__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10080193736771553614ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__173__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15018151789746389749ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__173__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17551830735917337110ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__173__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17982272730196542715ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__176__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17399802062143578223ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__176__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1413998015163990350ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4544879675665901243ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__196__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4684690006534019535ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__196__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15919557816283153559ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__196__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3359423299496948302ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__196__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16980480330136764568ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1089030395488896135ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10371555898370497940ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3464863967719688894ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9283807140048086039ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__198__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13569790119019909951ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__198__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10841237442429509349ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__198__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2362385624770370413ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__198__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10892108553162800954ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6381957428504912074ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__200__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1208131323845621359ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__200__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 253861743434782566ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__200__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11481454717142728362ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__200__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3123139645779400041ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10013959874851216306ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5144696499568450688ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3017535873235537738ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18232405377834562663ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__202__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18293775755083153794ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__202__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7300547435065689005ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__202__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1016519317641067524ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__202__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7561127500974137171ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__211__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14257785786715436675ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__211__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1673859795210548255ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__220__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9910497058041575302ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__220__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16204260489658458867ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__221__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1425356371509471702ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__221__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15339269562378068215ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__228__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11609278544042612299ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__228__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6679485199899399895ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__239__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13172610605458763679ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__239__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2587834416010238300ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__241__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2896201183391689088ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__241__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 28876772879928039ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__241__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6174823396597814725ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__242__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11018551518718455758ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__242__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8701044354749269037ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__242__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7854214836440722527ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__245__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 12870675874501493350ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__245__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10729371555532364469ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7432420576014501511ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__265__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9075343022026040463ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__265__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1500484928717643991ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__265__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13294217368926802296ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__265__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13874993981821736952ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10170234593876653886ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12203117413571755391ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11547890343284492379ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13031471984164004641ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__267__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12584783101562332580ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__267__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7177955140644799766ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__267__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8524537095938990412ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__267__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 721883618536064413ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17912510841074182686ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__269__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14139181209908634047ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__269__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6791233491950374996ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__269__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14910553267805733058ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__269__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11594484042097958919ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9723723408133792686ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3354764799023423961ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3408872997919935093ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15247127983875646847ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__271__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 965616618849478634ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__271__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11647051445710374667ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__271__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10960355707040360282ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__271__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 776431346782666493ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__280__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1879222518539712068ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__280__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14814994643573094071ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__289__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3784382797321692283ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__289__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17697215136402113965ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__290__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14838582409838601813ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__290__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11961564929265347414ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__297__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11812420091410687218ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__297__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10809454229208595416ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__308__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2598405482020215474ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__308__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2126177810876663882ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__310__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12211030830258060211ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__310__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14925242103497102017ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__310__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9902362314285726710ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__311__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3993726673380627318ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__311__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9547964085800918341ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__311__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16116795684181519842ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__314__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 3151552309923054498ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__314__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 497522563950116573ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 290787707206987995ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__334__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4263300075582351605ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__334__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2668161451094532514ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__334__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4844945355864493918ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__334__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4216140448404103965ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1143006646132754831ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4085206169406292610ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1181671121011353441ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10230921890379693800ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__336__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13291097836445154805ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__336__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16268579777789778133ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__336__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 989314295203193725ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__336__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16301138343713098847ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1775613795667446422ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__338__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3560317237660061329ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__338__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18312820354767412543ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__338__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16044484760856140881ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__338__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 967064120564289991ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13299366932536919372ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 154964526180727821ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6339875089466127806ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3153803054174563388ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__340__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12592899469803225838ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__340__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13125390664400941226ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__340__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18331518656714310968ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__340__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4787514475156883965ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__349__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 807409848406334020ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__349__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16904937299960839518ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__358__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3212091370882125238ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__358__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16717311327563493611ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__359__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13080594924701501232ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__359__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12627758075579307220ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__366__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2757675616872087711ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__366__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13946470578748300919ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__377__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5077637711873549490ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__377__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3485055290998185091ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__379__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4803050787535505151ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__379__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6290727087489152547ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__379__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13409014016949995687ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__380__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18119317126228930386ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__380__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3361680572090808697ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__380__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7231851655055139360ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__383__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15854708040916981354ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__383__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15806939963644632008ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__402__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8382811363622618224ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__403__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12923570174090932535ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__403__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5211688948789956784ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__403__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8188582298023652580ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__403__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 582331515275421494ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__404__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6308515333451071406ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__404__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5098718211447024070ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__404__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15743526913179655750ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__404__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13687093102227282436ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__405__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8305357706071627983ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__405__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10066327245329513529ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__405__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16708751036983477104ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__405__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2773259295554478924ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__406__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 619456964324252980ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__407__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5437464758545786081ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__407__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13097812713279184839ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__407__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4703233219194333816ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__407__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14130437663310060533ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__408__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12203297662224686717ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__408__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18397655907739015034ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__408__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12581025063771966924ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__408__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9854985371248501415ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__409__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7619760034796702857ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__409__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6002507818455897789ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__409__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9086090350310005473ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__409__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5165061880816076470ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__418__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9535367377328553691ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__418__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4089947550406245639ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__427__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5277972100694114569ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__427__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 160885508545583503ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__428__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16470340983595201841ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__428__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14055573121082156706ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__435__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15833637943135374810ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__435__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14105817014175481667ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__446__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2432167047191278155ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__446__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4735540233006530755ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__448__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13916614902668020717ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__448__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15445603265763504195ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__448__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2366501839604916773ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__449__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 615834595810147418ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__449__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13194349689091066104ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__449__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6082929664879760982ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__452__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11411417838882637048ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__452__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5461456567301389597ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__471__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12350452080115706081ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__472__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11343551151067405929ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__472__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11379346582537983805ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__472__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11855196729559155210ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__472__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12138437625106682571ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__473__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 347977037324422501ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__473__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8278744199520136341ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__473__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6989667046450269081ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__473__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14353329479101506484ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__474__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7300045378947177824ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__474__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14030373252366682693ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__474__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5907505426234944199ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__474__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1680630994838689602ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__475__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12764697725703046896ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__476__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9257190739368039262ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__476__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8726495287567197992ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__476__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9541881117385519342ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__476__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13923533664577404139ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__477__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3675267031313000975ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__477__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13513136932742619656ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__477__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15986519160144887867ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__477__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14955256788557301250ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__478__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9600458618366787665ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__478__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 160999417614308798ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__478__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12458880185613438458ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__478__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12182355198049347889ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__487__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8375230721234825597ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__487__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10512598447171197768ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__496__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13348156055282948297ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__496__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17456140924822471526ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__497__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15449169110223778509ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__497__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6248403552793116490ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__504__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11024231028902802271ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__504__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14252648953363981134ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__515__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17217440801763507883ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__515__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7885220294466130194ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__517__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6771880554124247468ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__517__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3088854531837403364ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__517__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13549509884701412178ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__518__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2259433444424798717ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__518__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10326913407261628751ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__518__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3003356954147106199ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__521__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16144915043618940663ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__521__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6683749128172879364ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__540__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3922956838179423911ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__541__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6732060416784981925ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__541__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7321094357697320258ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__541__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17064526222988168743ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__541__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7140380125933481708ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__542__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10671648738563921199ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__542__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6559377683905236764ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__542__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5110141771304235210ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__542__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8676024957889905034ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__543__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3490126677825249137ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__543__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14851063180645847834ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__543__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4737669150199579480ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__543__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3901988687366326301ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__544__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7528845031188708469ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__545__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15799252128556657607ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__545__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3021713315956957420ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__545__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10475467760486510091ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__545__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1600988807365466357ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__546__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6660062559834843525ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__546__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1408884417216549448ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__546__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12820448507555096141ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__546__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2122176093839367371ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__547__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13607728728562764509ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__547__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13111222827412396337ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__547__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6218409464825685351ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__547__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 495247092438499841ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__556__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14364005180158527379ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__556__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12532510386471114412ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__565__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9785755340278786541ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__565__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5365985114694424270ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__566__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2616813329566178499ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__566__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12808250587269493970ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__573__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14361446609467928881ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__573__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13213783635955576124ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__584__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11176133613051736463ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__584__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15698375545270254403ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__586__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15651882220870811330ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__586__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10849014788724941814ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__586__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14204708288099574941ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__587__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6457538416321049197ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__587__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8385268595508758243ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__587__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2943716144483368655ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__590__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1707199422800291579ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__590__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9168639224603064974ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__609__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 766409112935428288ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__610__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9720568431246853761ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__610__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1491500669880020080ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__610__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2291825437707053573ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__610__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15193243648259600661ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__611__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6216288768766395989ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__611__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 439018096466947184ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__611__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8052388158448500268ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__611__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15201037433774166364ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__612__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11799591384924959755ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__612__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 564948476153118278ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__612__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16394442153164784519ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__612__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12132734819758615077ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__613__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1174241702051724223ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__614__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15282784476793908285ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__614__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13595772006040463041ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__614__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4767534717939756744ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__614__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6693432858382861772ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__615__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12555653550539795855ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__615__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4844008590892558733ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__615__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6092451641126970026ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__615__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11672996843305505362ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__616__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9728117318442163276ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__616__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13469141408860519356ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__616__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13929920431402305668ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__616__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17316499971286761027ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__625__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5166489079017101058ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__625__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10001233237513754251ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__634__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16337293526543759650ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__634__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10244679366100932155ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__635__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2991478957483836028ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__635__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3488154558959674303ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__642__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15914267855440243978ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__642__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6546683882569277927ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__653__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12412545019316850533ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__653__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9750663971683777907ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__655__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13944447089933558992ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__655__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8898914005883838208ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__655__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11284525300201564284ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__656__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18251088617920374103ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__656__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16608862818429500449ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__656__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11496359491691773294ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__659__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2683413486791440904ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__659__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3952124436558062292ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__678__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10943273345883525067ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__679__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 895349441196003273ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__679__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15807240970686439491ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__679__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7044953615122884332ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__679__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17593456708785102835ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__680__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11075160474206597964ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__680__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9037239965414738407ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__680__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5810142576293718245ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__680__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12014950847554787340ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__681__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17794205016110474883ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__681__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13644525442761595287ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__681__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2679165753394383403ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__681__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4413842440317892217ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__682__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2785874660227338630ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__683__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15555077901869103134ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__683__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13816739966819236804ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__683__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13672522611151694560ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__683__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7546641124204080488ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__684__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1528695933988728079ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__684__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8004260665019586960ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__684__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6656555231939225755ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__684__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13313600607576695666ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__685__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6470647707871421948ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__685__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1242771053363497147ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__685__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14871017638141756983ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__685__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4625388721980238836ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__694__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5337801041135025800ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__694__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17760309441766633896ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__703__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17313220429856650889ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__703__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1927303927151462185ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__704__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10531096558275466643ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__704__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11859852287818998085ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__711__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15734631203735887445ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__711__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8636423943541822959ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__722__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2459492151185625715ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__722__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3906666564043832929ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__724__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3193211199564549329ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__724__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16776326998460760512ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__724__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14737983134494582494ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__725__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 80803890859525124ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__725__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8284122645478266324ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__725__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11369584004056277241ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__728__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7366182308259457283ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__728__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7107560503452122837ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__747__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4099412659605302092ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__748__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 564370323850372314ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__748__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11832791995542232661ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__748__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1256808910009570621ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__748__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5297575173642136217ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__749__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17289914998963123127ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__749__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17407293188763107796ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__749__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10474074331639453184ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__749__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12218314155500117792ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__750__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13500063451443467452ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__750__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17194557704536471167ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__750__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1743594784043447659ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__750__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9341217286685801385ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__751__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17813742003296317769ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__752__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1684274899328780268ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__752__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5098376642138948358ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__752__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 416980117223964458ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__752__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9611438397387792919ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__753__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 472709996872117832ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__753__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17134666539848935403ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__753__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17114130942620680329ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__753__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2794683091744871277ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__754__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5265064503087033335ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__754__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 603484304642560087ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__754__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17116374008175931902ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__754__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17344917364506602433ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__763__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9901514616747593362ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__763__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17663817279495892828ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__772__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17824630344620587761ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__772__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6952708069082434478ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__773__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17157167431646301085ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__773__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4888944718824184482ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__780__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10212526690365196884ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__780__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13969984080054911079ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__791__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4498153156345894173ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__791__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7393598280581862093ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__793__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5372501037310442440ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__793__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8636727164359962808ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__793__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5553285615724767911ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__794__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4301808527884206311ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__794__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2476001327487426365ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__794__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15647248994750691182ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__797__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13609701504005538952ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__797__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2497783893060802907ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__816__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3740317267520750394ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__817__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5251533911417580532ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__817__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17564986979675331832ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__817__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15762773226423808139ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__817__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7926610311024191957ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__818__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17790165911224668072ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__818__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9527229868359739676ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__818__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13182790284532254290ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__818__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3882417521133888184ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__819__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11559631539891139180ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__819__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6017605429480192483ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__819__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10391981986279117759ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__819__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15618180504789172299ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__820__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4163656710200071244ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__821__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10595481742872782739ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__821__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4547146416682702449ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__821__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3085753841514142005ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__821__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6037603581963135368ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__822__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11951535305546229944ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__822__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10787495047097317781ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__822__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9031971457098971647ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__822__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11477207909849778477ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__823__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15414516051429642895ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__823__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17874466841314953354ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__823__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5658909354799687717ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__823__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 920712692447054323ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__832__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7208200202338254603ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__832__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14391450172186039814ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__841__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11881083073809777161ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__841__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14030448296118300523ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__842__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3031152645112489667ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__842__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11953530511336278127ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__849__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14860120341150991111ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__849__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5310620251088479739ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__860__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16663115160535282949ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__860__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7304855811364986730ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__862__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2715436643147133618ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__862__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10180098634144977296ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__862__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16971563781686267880ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__863__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6316663474592258587ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__863__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 228724384757013428ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__863__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14099126249568834892ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__866__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2477332978504839539ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__866__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9241398815422062898ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__885__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 406390630873225042ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__886__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3277813287219741379ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__886__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16400353658124411424ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__886__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13598786180871119421ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__886__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7687833911784541922ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__887__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5781869543014781177ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__887__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13650835893521713410ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__887__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14808074121749234863ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__887__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3656827455317933189ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__888__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12629421652525255175ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__888__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8750700554760048005ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__888__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6756282655481554236ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__888__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6369449224974053817ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__889__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13381060156630797437ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__890__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12952263907782443738ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__890__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16487520548388862467ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__890__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3980373071950243118ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__890__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12604314919109146978ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__891__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3256791672129818314ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__891__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4761197879623058042ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__891__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13376125885866243366ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__891__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17010006926235765042ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__892__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12456080458831572009ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__892__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14939427041362595621ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__892__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14859775989086751581ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__892__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17398555303662701700ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__901__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1507519145401673646ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__901__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11948951270880274560ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__910__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11114867699107871633ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__910__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4985248837442769256ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__911__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12493013702265974314ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__911__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12455357455756395919ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__918__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17901746490874963755ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__918__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13941202861498938139ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__929__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10382370933553218090ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__929__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2954839396270207691ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__931__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16310032944052285321ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__931__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1293606526741627079ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__931__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9976660424818202879ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__932__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1548598378378137613ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__932__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5996887056851117051ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__932__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2380494408043781318ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__935__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2021473876968567368ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__935__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7940024359817125748ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__954__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14648882464495546505ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__955__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8619544431051985208ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__955__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2034990290641077326ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__955__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12429023094647151928ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__955__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13106010588804185398ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__956__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16542854987341339704ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__956__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4069659546000415417ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__956__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15793872635740095047ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__956__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14082556467397277209ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__957__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17284494463969572305ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__957__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12076082133075370646ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__957__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3730319006395383808ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__957__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10740194942428664040ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__958__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2383213279756184155ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__959__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 423356667101037947ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__959__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16125424245262124398ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__959__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8279683774772907901ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__959__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1334321596774663871ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__960__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14827073357086608894ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__960__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18107246598903396114ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__960__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5208819720562809346ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__960__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7769989354219379233ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__961__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16428008820957320056ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__961__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1460325481183966793ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__961__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13371874352674639183ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__961__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16511834589640086074ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__970__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15537733751051071629ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__970__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16526712105123798539ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__979__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12849830490858356533ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__979__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2820520401322704308ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__980__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12974113737133695219ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__980__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8184164083770591801ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__987__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 564853503312133905ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__987__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10555522991517345283ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__998__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8798959091377189512ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__998__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17874812763729792110ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1000__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5668749651197689260ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1000__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13213296163378736306ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1000__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2728753502044807370ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1001__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7624139192544700957ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1001__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2758534694564483692ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1001__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15445986542603740166ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1004__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4428280325531596988ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1004__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2480394147788223249ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1023__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4324399271861970980ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1024__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2262733796713634081ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1024__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12780173824052786084ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1024__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10172489667279669401ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1024__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12747189305971418019ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1025__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5173777209107990313ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1025__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8947941319433128327ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1025__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8816214080648629662ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1025__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14302964025396194195ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1026__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15070378343187034446ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1026__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16840509038988508956ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1026__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17394894547099544778ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1026__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17695848583294738224ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1027__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17095958111120758492ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1028__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13710364705080127678ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1028__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2548504780760406503ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1028__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9172387936797938617ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1028__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7789573508718090339ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1029__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9641659362196397694ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1029__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6723326911638294616ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1029__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 610979942267861487ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1029__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7306885255200268197ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1030__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3020951775971948533ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1030__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7204860067738256352ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1030__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6880658797202208762ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1030__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10271574240430732574ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1039__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12190767685597314013ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1039__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10220473637967175116ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1048__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8687840667329046480ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1048__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17512688008909540843ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1049__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2317225892066228079ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1049__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3129604823102027911ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1056__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15784984709679456467ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1056__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14457898590480430010ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1067__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17789767224156891698ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1067__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5107341984728235727ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1069__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1490970474353967211ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1069__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17742712631133237227ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1069__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5387348823529144882ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1070__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1606187233382825421ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1070__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11327948086226485264ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1070__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10956866763927457796ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1073__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11858645572476585332ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1073__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6267953790250429834ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1092__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11936027763358080041ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1093__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6553658179140186179ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1093__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12994365160799507679ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1093__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5316618161595983751ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1093__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15564827733163845234ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1094__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3052221912335402171ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1094__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17188432467987162532ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1094__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10132949403813855422ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1094__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2140114746730714095ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1095__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16931633145026756002ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1095__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6217941179812446470ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1095__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13070477694822196736ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1095__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 383093815730582129ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1096__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9290719984050761085ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1097__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7114658462740342498ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1097__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7648534703872835723ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1097__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15061445357803041322ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1097__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12356910386813786458ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1098__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15408058456406637512ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1098__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12089341246002187649ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1098__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12748267422636785426ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1098__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 697720950869184405ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1099__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12706842611491924723ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1099__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17629237865816839026ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1099__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4216127776935488448ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1099__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3917027790852274373ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1108__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11909668946165275797ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1108__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16138044916258686920ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1117__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14577701845425337404ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1117__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7464818124767452480ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1118__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11399444308398942297ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1118__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5771626265803355250ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1125__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12343449692783795514ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1125__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2017812388053679259ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1136__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8209261950158928946ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1136__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7644882781427897666ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1138__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2107268814088346127ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1138__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15059404318553080462ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1138__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10379370083709460990ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1139__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8166633678148731291ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1139__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18108488867379941775ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1139__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12057151456417052234ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1142__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 9028152059985906188ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1142__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4247552471993978078ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1161__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15234601234255795597ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1162__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11610620314995494033ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1162__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12978831255286735071ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1162__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17222101700993027968ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1162__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9505990770733520858ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1163__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11435523009609716766ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1163__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6932510149780740355ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1163__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6219023414452955142ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1163__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3503186917811092151ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1164__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16699206472341843118ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1164__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17429461464449002264ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1164__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11424830341183031408ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1164__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2612735613193654550ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1165__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16852076799942788984ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1166__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15942474136025154238ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1166__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1698190378514339850ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1166__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15161090567371588016ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1166__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3901785145817398913ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1167__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8508926175088524594ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1167__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16752756745475666652ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1167__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17613468063905385393ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1167__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12193286142089028996ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1168__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3002359429530130723ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1168__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3917385681115641587ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1168__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11093226635046655298ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1168__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15557616867877695021ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1177__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3708365419323095734ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1177__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14141917774955514209ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1186__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4670527366626294795ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1186__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3759339692452981646ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1187__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8713995410317407645ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1187__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11980740845545586703ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1194__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10853761626892978443ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1194__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11977429650277287134ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1205__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4672937582398666266ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1205__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5723572813647133611ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1207__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3582160041031745073ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1207__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13564747699809978471ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1207__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5136600476502436041ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1208__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5172488584094846957ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1208__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10118525419157003069ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1208__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15694990789720559733ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1211__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 8573096912381216336ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1211__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16521739114580215985ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1230__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17781702210834810787ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1231__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14011012741776383850ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1231__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10113921658560841834ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1231__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3384797393957490814ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1231__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5838868160909614901ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1232__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2357815055544062088ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1232__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14378825935855106778ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1232__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14159069697045442420ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1232__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2483337304809025610ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1233__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13612318542910911069ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1233__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7880294732209302323ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1233__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17727048963699078927ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1233__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 847412885655688890ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1234__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1516935021217972784ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1235__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 682171902477028986ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1235__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11219379221782097838ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1235__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 91964942741644673ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1235__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10397458750101874209ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1236__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18166034630788060182ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1236__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5884238355600605158ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1236__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10284840496112208635ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1236__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12585369883426260544ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1237__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2080129554790113960ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1237__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6744614989609803788ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1237__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1277741684958354552ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1237__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6811665995251212330ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1246__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6556586861270566554ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1246__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8461615383009119066ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1255__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17552927503284719229ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1255__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12198381911760978196ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1256__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7175261280128617544ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1256__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5399136468662398057ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1263__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11551298414049227105ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1263__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16199750878220489019ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1274__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1704224087473238819ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1274__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14853671760134008329ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1276__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8713965712668890339ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1276__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15033067815768893515ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1276__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5116185368746406962ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1277__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18258882264838973914ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1277__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16609049382607029606ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1277__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10254000480950695477ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1280__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6797960362249163313ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1280__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9211590209208892277ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1299__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14293713160255668748ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1300__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4929495739389656141ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1300__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7642364488578213146ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1300__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8124522260861902459ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1300__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13879641574155776326ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1301__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10621671986929039465ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1301__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2759653043241812596ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1301__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9278475242723784553ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1301__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7382168814818488821ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16510958576410804152ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9335395924041449152ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16307783509734898424ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17099700672187732624ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1303__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4951826400654957462ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1304__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18384018745147668099ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1304__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14550533818934518521ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1304__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9866438027587144410ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1304__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2537264198926838621ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1305__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15261596740153432926ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1305__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 607943581048674116ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1305__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18136298730197890150ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1305__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9174926945108848947ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 101342321705068044ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6509988273322397029ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5730016726073353907ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16999440505411150517ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1315__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5557174337962346122ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1315__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6581150982965271600ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1324__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5662944851735561258ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1324__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3080354017178676806ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1325__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14755527971908568052ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1325__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7435157298998943816ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1332__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8465887235804414300ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1332__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10366459675863599810ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1343__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2475026961725054369ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1343__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 311483262660503726ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1345__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7301780591776057109ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1345__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13126776484220076433ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1345__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6158006954369913999ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1346__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9830596257188073223ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1346__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8399731809628646940ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1346__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17675403864518682141ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1349__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15224773219214541010ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1349__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2849703338510733559ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1368__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5200708893268800943ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1369__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8750663444454589010ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1369__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12075593320720936122ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1369__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13077731423072697036ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1369__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14025894086885099596ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1370__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9171234521478535697ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1370__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2218829530445222342ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1370__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9092072102948268685ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1370__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8903025569118920304ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1371__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13812861132183046324ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1371__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14131010475016895091ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1371__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3501361362350637354ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1371__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3341868181092532079ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1372__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11067273668127224780ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1373__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6275285890358890088ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1373__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10110141147164181083ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1373__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14779749624481318067ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1373__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10030629457450552087ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1374__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9893794347423535785ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1374__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12621458434271061158ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1374__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5023831645852138708ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1374__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6550079757107681564ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1375__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12539343424309735592ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1375__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3040546470063608961ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1375__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18360214072808230014ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1375__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2582909496327428209ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1384__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3005656484949408984ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1384__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 644257978570031316ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1393__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13850991155675080932ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1393__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18186677162395499751ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1394__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17983242266394644742ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1394__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3537306113351502524ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1401__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3711104637617477747ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1401__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15609292343720754304ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1412__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5376844619137764613ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1412__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14277783465759773738ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1414__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17775195254317484005ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1414__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4956992923602900037ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1414__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15249246141501866411ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1415__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4652258997467505593ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1415__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8428941010716258454ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1415__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 436178795311325729ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1418__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5842234491473397055ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1418__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14054202179627822697ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1437__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16349063895427302688ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1438__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 249510847956368194ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1438__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7818685914486767199ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1438__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18415584769680252987ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1438__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1182194779666461255ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1439__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3868945244983054664ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1439__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7136926950748049780ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1439__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13901885468800292865ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1439__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14097157289837783815ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1440__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10821049486557544545ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1440__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3000734899847127476ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1440__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13387570403417684283ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1440__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7694935323579025198ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1441__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13300366484902622130ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1442__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10730442750839351215ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1442__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9348802651634973915ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1442__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10206509965077504845ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1442__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9559244908354016613ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1443__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6427141821626755998ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1443__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6817367754768309999ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1443__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5984716119668067781ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1443__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1097015080144770366ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1444__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8753612687037885641ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1444__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6197054652422388295ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1444__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4285955187750651697ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1444__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12916417866432250824ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1453__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2697127013694417583ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1453__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5025787696178655685ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1462__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16117287613106816561ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1462__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 892609112299757076ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1463__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1181815060633514596ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1463__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17628541080273040392ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1470__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10619621655489528829ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1470__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1469887490218665076ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1481__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7578711330361318761ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1481__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14248975048487197410ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1483__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9967518554903987347ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1483__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10127102344540097211ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1483__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9169702477921090983ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1484__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17457347259753974585ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1484__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6706422000406222755ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1484__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12506280308682189058ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1487__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14849811291262646185ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1487__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5371216304951572755ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1506__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3119882360314292271ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1507__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3926673640244698281ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1507__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16438392585305939165ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1507__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11559430826625846353ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1507__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9704232691164613983ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1508__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17993866713275903429ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1508__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8879219675120333078ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1508__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9483012319630095337ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1508__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16913463510589976480ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1509__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3249382132888319698ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1509__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12204919318276480953ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1509__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14646349426542920957ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1509__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12788116220817797596ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1510__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13588003082190761566ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1511__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9697353481208095134ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1511__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13352079489745569102ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1511__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14649271112144158600ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1511__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15161333921077074535ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1512__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10993819375653973200ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1512__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7604944291618382047ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1512__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15863634332606203621ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1512__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4554327100746292926ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1513__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14192280428595094242ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1513__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8996297958437539958ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1513__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10387708083846774203ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1513__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5458120445155380543ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1522__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12421628678487956545ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1522__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8256755551301681113ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1531__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 121844446497452365ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1531__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16787072862272879060ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1532__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16121482414308267382ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1532__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7130013259833833617ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1539__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4750876247898949399ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1539__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9095926725967451219ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1550__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 363938700315431505ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1550__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6227118219788234731ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1552__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14690343734374363621ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1552__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11375579612698071186ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1552__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3659047285476742481ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1553__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11606144799304860636ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1553__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6725666872621843981ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1553__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7610225902029020256ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1556__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 3004446325032168931ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1556__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12183406367192985472ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1575__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13732382891392667661ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1576__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12405353979216626436ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1576__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3632761929585701667ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1576__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15865422123852563455ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1576__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2528357740784299373ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1577__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 626973969009928714ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1577__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11704231414203955657ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1577__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9427394199907352100ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1577__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16667883196297638376ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1578__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12627188210941371477ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1578__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14068657148011787073ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1578__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4048849107248313776ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1578__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4872088295315492138ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1579__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2937546876712444352ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1580__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1271725747901393318ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1580__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14170575104656023325ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1580__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10226452178855150564ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1580__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5989322629051083283ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1581__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1242772606752531793ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1581__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17939247106027905613ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1581__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14942365047123009603ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1581__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8140715174827253896ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1582__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7539089983846776821ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1582__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11484898228742673873ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1582__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7145560271088034992ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1582__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16504278150824894931ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1591__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5937870397506501687ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1591__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11453874697144629578ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1600__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 862122845094074282ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1600__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18304593079428930315ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1601__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18210394664097815504ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1601__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6140289072799946482ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1608__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8474435651070864222ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1608__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11449612423182899195ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1619__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8841872894112592789ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1619__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 758389446329615396ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1621__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14602503902880874893ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1621__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10223164915793364056ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1621__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11108349030585470886ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1622__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9663528010200670046ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1622__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 368100181407595762ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1622__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1497610472427998439ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1625__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6757031157022956019ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1625__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9951021773280115870ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1644__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12585312949405783691ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1645__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4880191303096129881ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1645__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15155663192772691418ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1645__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5003694455313467842ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1645__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18075533950894614926ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1646__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17803844626616555211ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1646__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14620864054450505375ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1646__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5029627915611991314ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1646__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10398865466777623860ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1647__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12672992787117561518ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1647__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2861135994978844229ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1647__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3695782723975195009ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1647__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12614816969464506194ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1648__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2668105100078311686ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1649__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12780304905330744256ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1649__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12266546716950022708ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1649__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15281983811202198783ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1649__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6744705683074816329ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1650__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9049972211072402569ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1650__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6502449946011321336ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1650__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8137978768658812960ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1650__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3730166727906964985ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1651__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8624020903076892689ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1651__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15575134922155953892ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1651__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15228781247994286957ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1651__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4106147375725453967ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1660__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 619875538605576210ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1660__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3215309432860844444ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1669__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17296864396677397066ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1669__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11909123768324371494ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1670__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 144843930756183429ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1670__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17406601060060310923ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1677__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8899504813076109478ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1677__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1639842648714940553ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1688__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12991553293938243707ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1688__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4233761628679231530ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1690__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17914100883588383021ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1690__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11529361489432049604ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1690__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5605719930177338032ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1691__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11958122802856782305ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1691__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11080426205175986183ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1691__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7325172066835844878ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1694__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1945715604717041806ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1694__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9879735758706053114ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1713__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9429330380268587052ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1714__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2938218901262915795ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1714__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13873413725587768910ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1714__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3863471024023403212ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1714__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10799498033227044311ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1715__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14403561995808352225ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1715__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13646487175721596911ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1715__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6872200949948886152ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1715__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9760904261794794005ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1716__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3578156551114108348ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1716__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10592569286085014212ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1716__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17015844133288409549ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1716__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4051950376131254241ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1717__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13374363122186687717ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1718__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2587821385630475163ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1718__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17364423900028850888ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1718__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1748073752595215551ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1718__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1971559247039329245ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1719__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11912283041398267034ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1719__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8927393460635160171ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1719__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16241002016292217954ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1719__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11732206006629915114ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1720__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 566074054296836274ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1720__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2815764297544709060ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1720__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10220405496032526861ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1720__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3936623697685622024ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1729__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8212508652344458528ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1729__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11080474061030401134ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1738__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2368359113928021739ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1738__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12121936504449181839ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1739__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13163596947663684947ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1739__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 785481019279887534ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1746__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6248868674470603953ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1746__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5060389635100451736ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1757__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4388479366502811053ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1757__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10243069600183611054ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1759__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11083633757162511910ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1759__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14465594089127901918ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1759__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7322606759590431051ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1760__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17440054571600240941ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1760__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2884442754932832944ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1760__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16037281426820818015ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1763__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 9039315321859866927ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1763__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2635890763631655878ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1782__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14902875935089868694ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1783__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8608676760846134675ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1783__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7846050064328635410ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1783__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5953175154180282351ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1783__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 424075533078953076ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1784__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11848303804456142916ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1784__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15750465081524471289ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1784__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1084819168461332798ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1784__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15337505007843161687ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1785__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2848264240878344023ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1785__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12079678058079999260ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1785__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3777637814721251232ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1785__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1478305835255216935ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1786__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4160634378434069918ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1787__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5591129269827467956ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1787__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3164064565223370239ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1787__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12678264270181368960ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1787__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1620102922617294412ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1788__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4651403005575227960ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1788__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15008145323292732862ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1788__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1661056497434800546ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1788__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1487112523010039636ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1789__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5531017248406208563ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1789__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17499318593220313116ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1789__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2378972731445899423ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1789__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7131764016047615835ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1798__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2227690855729909985ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1798__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9088827624207104391ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1807__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13514889527512612852ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1807__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10228176200783557880ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1808__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8234916180500717234ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1808__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13139486009591149484ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1815__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6435742597619254951ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1815__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8189485760961212524ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1826__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4196068025771572831ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1826__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7404359259616479383ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1828__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3361142648852728471ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1828__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10074965786586027968ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1828__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2937968621750119301ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1829__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 807459756547085301ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1829__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 569889925145298333ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1829__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17815151607966868301ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1832__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5201182676396823868ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1832__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13847961517179608195ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1851__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7361207901507606700ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1852__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12181241046474460725ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1852__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12549731210670548178ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1852__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14543148875683685587ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1852__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1475753079475876798ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1853__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6286486168009192467ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1853__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13153846492771191416ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1853__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 360669581043151042ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1853__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6802014812748920357ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1854__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12903973036547104374ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1854__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5472744010899453727ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1854__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15230348421173821128ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1854__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10167405278285835889ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1855__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18242822989179045412ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1856__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8842679071841118479ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1856__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15249425412178538462ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1856__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12384289117446243701ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1856__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14325803129272946779ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1857__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8984393967698062917ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1857__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3152399759578193043ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1857__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15848783486384421081ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1857__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11105688426090603013ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1858__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2683102391425413295ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1858__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12778797103045193851ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1858__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5562851554525961426ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1858__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3194798383584184577ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1867__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10883429738555134328ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1867__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15092131516261511642ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1876__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5898097660087886846ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1876__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16353834018396654035ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1877__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7290749692287115339ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1877__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1569355204967858811ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1884__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10928268756793205868ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1884__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10241740427679810314ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1895__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9517555888138835710ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1895__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13012309266550059683ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1897__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1559945944254658547ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1897__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14437905886707405100ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1897__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 118616566558715042ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1898__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15904089786166984925ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1898__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13566701493666471575ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1898__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12702693065256668104ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1901__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11611801762821553233ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1901__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13687090310191514402ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1920__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2785470437046082459ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1921__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10860054356529021629ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1921__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16874149831426608446ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1921__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 837015401740071720ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1921__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15139167338482891319ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1922__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12482938081496324736ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1922__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1550987424532060719ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1922__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9315736758206883415ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1922__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3252044156749402275ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1923__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13754797302186423197ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1923__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1716254924989936674ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1923__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1524138983304730387ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1923__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10350052690393027415ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1924__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7670594804109286690ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1925__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8560503579388969299ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1925__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4100121712109429021ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1925__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7991975789781975555ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1925__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12567133071275229531ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1926__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11531350114793309668ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1926__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17190489893368175941ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1926__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12584567032156146940ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1926__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9900628776755232410ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1927__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18226185444736418310ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1927__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15193046375768167157ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1927__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16300590832124533341ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1927__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14260714198192062306ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1936__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1166708698073281005ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__1936__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 288830661361997559ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1945__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15100490011583772536ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__1945__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15123704408428628350ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1946__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15024144138944953502ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__1946__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16385524043766124101ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1953__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7563243887338192252ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__1953__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13391712851276133183ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1964__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14596020130989130516ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__1964__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8476522949907983102ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1966__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7933792915291688201ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1966__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7568518707168405565ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1966__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17895783470185182884ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1967__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1073049339414964212ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1967__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17787096017465180624ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__1967__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 303218148704943349ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1970__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7668488372493241360ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__1970__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9137459255384793483ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1989__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12939772446281501069ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1990__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9992976928165202240ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1990__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10516488226918775872ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1990__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2681662464845190036ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1990__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7430088186553331972ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1991__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11160829096754924285ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1991__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3019140958462988970ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1991__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8304577947254606252ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1991__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14008179669373414204ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1992__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15388217549756944767ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1992__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6773501945222132938ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1992__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3601938913862458415ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1992__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3216361608633276721ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1993__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2720394614874648148ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1994__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10200374521943872857ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1994__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 814094442094096105ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1994__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 310948712785371193ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1994__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10984697303961094960ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1995__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6746716622926909703ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1995__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5035534019488233551ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1995__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5462273947300511301ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1995__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6831432611925608729ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1996__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5968421862449043531ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1996__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9970548181892527567ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1996__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13527862552764498003ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1996__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9185997861277137579ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2005__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7294163231015764838ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2005__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7003832666482574934ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2014__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7927672233515988141ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2014__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2324047877521908972ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2015__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17413143728240536105ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2015__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15086311216223844135ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2022__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6570154447345353511ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2022__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13737568485700185944ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2033__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7413833637820873154ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2033__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11608176969226140066ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2035__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18184739145068674668ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2035__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16670976469547426760ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2035__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14625455918717456694ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2036__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14628035040430693870ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2036__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18029766157674392673ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2036__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10826261299073879117ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2039__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16005762744796396396ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2039__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13028715826246050560ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2058__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9667754318458460746ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2059__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2945339165627674609ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2059__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1887349915505601093ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2059__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8777655824950640378ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2059__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2106290940495152659ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2060__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14199790092024163777ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2060__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4435365032374301058ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2060__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18071070064601470286ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2060__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8746316746567602617ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2061__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13829391553345020967ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2061__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16080239929998471225ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2061__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1481521937839966305ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2061__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12691145087114752743ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2062__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 970406450893939678ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2063__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14705420835421722889ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2063__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16347710710401392129ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2063__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3344616994486901471ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2063__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6420712483937380806ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2064__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3407839136639020934ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2064__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2558687169946237599ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2064__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4481420272474683435ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2064__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9212913448402286636ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2065__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7742347709979996635ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2065__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17639290055983780400ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2065__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18022752024691823836ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2065__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13449754898300924829ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2074__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11990553203902428499ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2074__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9376208097892303385ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2083__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10668265417158278500ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2083__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12336752712514224984ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2084__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3941828724910543556ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2084__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10822709375947490865ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2091__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 757884555756939937ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2091__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12968749937644418619ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2102__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5817609236894495801ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2102__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7929148780311944437ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2104__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16667021552153180870ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2104__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16982052547746218417ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2104__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1681579976177532655ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2105__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16051803774323076554ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2105__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15503793696060049534ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2105__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2749784115052955376ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2108__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 18192312759603781854ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2108__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13613578812534242895ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2127__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7750813958391945437ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2128__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15634272370357530981ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2128__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8669495851704014537ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2128__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16464040048441465348ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2128__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14979840993404865526ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2129__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6459012987710684133ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2129__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12881635187745027583ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2129__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15138046077718690903ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2129__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17172540437014466576ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2130__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17599608934040729715ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2130__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14721859161969334969ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2130__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17883912404237877898ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2130__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7395915220208749020ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2131__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5945118124694510898ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2132__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6407133791525326304ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2132__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17732126428858782015ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2132__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16300078986841827703ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2132__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15390961865204522786ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2133__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9897690342161955922ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2133__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10896513398054308691ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2133__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14298029456879465813ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2133__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3469464113398415782ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2134__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17720930098693995479ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2134__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2355999371385443409ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2134__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1992774574971878572ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2134__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15206710737610296205ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2143__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9164846713286113006ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2143__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4895137624371665024ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2152__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15599877024847309566ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2152__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 486573832820317864ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2153__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5281522815014493389ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2153__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5788626965227133425ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2160__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13888546814302029489ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2160__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5863403289787833258ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2171__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8939920906646617125ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2171__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16279786276076487674ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2173__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10167059401761743710ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2173__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7605271956161901224ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2173__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 934574133676001045ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2174__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5118901323926205822ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2174__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6637145012226615650ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2174__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5590790559165146016ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2177__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14954287322671436056ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2177__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14400303283312837781ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2196__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16577382416016208185ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2197__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14965643996154458135ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2197__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17808639975984194021ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2197__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4984223004171923938ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2197__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6642249118982372314ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2198__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15024915001310339916ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2198__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 910829663961836536ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2198__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14867562619552184492ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2198__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12070853842273780545ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2199__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1670989359352544006ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2199__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4645265570539442125ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2199__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1571247755593089157ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2199__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16615765918207061922ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2200__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16359330534717012203ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2201__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14448955962467904974ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2201__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6129386192378660906ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2201__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17682215997812921533ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2201__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2730744697203586158ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2202__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15342149041935587873ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2202__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3913102907674184492ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2202__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2879402813620845530ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2202__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10295090776695624256ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2203__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9822612791741563629ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2203__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12008167636267093425ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2203__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14595307285333110315ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2203__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11114424165335607997ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2212__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4620929183337354341ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2212__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12892727264357743791ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2221__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10427163644364768705ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2221__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2674820570038679335ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2222__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9045703559827835113ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2222__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5440682446762670202ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2229__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6200130455398235485ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2229__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6196971080383309892ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2240__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10067814694331975995ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2240__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2266724116181958337ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2242__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13748058416354505788ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2242__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7450296759778062990ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2242__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5140401676555980554ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2243__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16184504896089560872ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2243__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4262727791856327188ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2243__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15477687927508690133ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2246__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 8219818683954438503ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2246__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11758613576985086630ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2265__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15361818428158746370ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2266__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11657413019590120732ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2266__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3002171417850596477ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2266__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3744108199312882242ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2266__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13089411956020195186ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2267__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12667502972352471192ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2267__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6994866820630164224ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2267__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4729687965516503550ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2267__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 651084001916223403ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2268__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6592327490339686025ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2268__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12930231205234764761ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2268__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 264045307196018911ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2268__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10564900772657782566ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2269__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2431884286927473401ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2270__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4233430361401955034ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2270__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12193138143605182174ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2270__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16806945405637730478ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2270__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3631345554327968019ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2271__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17452878227239156307ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2271__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8487679897256407483ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2271__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14278931833703481296ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2271__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7849601495384299284ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2272__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3569794222452489366ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2272__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8727791192675302951ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2272__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3494920242553814635ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2272__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8262364945442284896ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2281__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4136755347189083449ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2281__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5597548285884840012ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2290__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17506115782665774305ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2290__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3394444897285166962ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2291__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12001743384451612337ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2291__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18422378648354619096ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2298__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15124669405663280781ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2298__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15352966672927742284ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2309__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12676897603656713019ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2309__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1231749879918064213ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2311__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12139958889455142130ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2311__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6689510606620768870ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2311__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6571223811341740507ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2312__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2398945128962397145ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2312__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7533531710123338313ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2312__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16529154585009458084ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2315__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2965629166629158219ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2315__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2775654815976807031ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2334__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13329410783106473810ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2335__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14021123408385315749ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2335__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11256891762440144710ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2335__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10872871992006280489ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2335__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16584674008586021791ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2336__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4322020870091127199ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2336__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14953338278586217571ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2336__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13258260560832702974ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2336__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9050673438416692261ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2337__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5657943112086643914ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2337__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17924044913608359916ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2337__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2225086312072037180ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2337__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1224559633988257318ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2338__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7972552332191039372ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2339__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6816480991067185716ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2339__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4275520322692978278ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2339__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3290486388302472351ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2339__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11596398704611708268ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2340__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10544772356702533873ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2340__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14691969262533733603ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2340__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1667950918911482143ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2340__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15174870409151291984ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2341__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11386193869010636128ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2341__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9626683004421647553ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2341__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16277495226110065481ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2341__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16381977957341640149ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2350__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5810644592127383099ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2350__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14089951536687636158ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2359__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12997328032876263298ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2359__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12344977782473484366ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2360__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8082189527089816971ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2360__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7236977457104030679ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2367__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14454504920442081013ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2367__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11593238412415225532ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2378__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2721245559076454621ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2378__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4240152640979624536ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2380__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14639414421614182778ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2380__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15286649165612524881ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2380__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18317837403816442603ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2381__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16320227735118639294ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2381__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5514656955976291161ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2381__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17063712518378047935ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2384__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11519032461090305015ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2384__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15219377888267444449ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2403__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8448710105666360587ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2404__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2668484502257583875ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2404__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2980088278449367732ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2404__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3770966649808118042ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2404__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4530688402706369662ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2405__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5985509602639411886ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2405__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4411317023622974859ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2405__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10176062414341607635ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2405__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5108321384972279418ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2406__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10390122494640368183ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2406__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16497280080099228964ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2406__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17353900130332277137ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2406__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4067561532471312675ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2407__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 830293607192633546ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2408__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2995861057637339489ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2408__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1605208944878525816ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2408__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7203501363622782999ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2408__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2846331921702726127ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2409__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1243972027683110330ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2409__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8143817638966909198ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2409__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 311606840702671359ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2409__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7812988386037073828ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2410__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11514392036298360657ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2410__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3937081811438288630ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2410__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3883831903857933701ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2410__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7969137064036080782ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2419__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7777634455135359945ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2419__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17051277536493714479ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2428__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14595788020400884873ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2428__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3440032948100336938ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2429__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2737435652999813154ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2429__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12975033211760485780ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2436__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6348608980276640420ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2436__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5513947307056805925ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2447__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6177132291659666471ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2447__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15229300555717602131ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2449__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12500793679625128840ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2449__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10290428580027119179ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2449__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14154232873424959158ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2450__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12812128519819189828ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2450__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14324128768768613057ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2450__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11335097119869972468ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2453__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13925072947263756975ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2453__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 18060163632726252538ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2472__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1769220965362825375ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2473__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3524024986152877723ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2473__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8549496792076999191ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2473__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4055456893538329136ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2473__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3554206429209424537ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2474__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4470296723029014109ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2474__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4330187842976648882ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2474__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12902447498461169745ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2474__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5576744296873348264ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2475__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4188504522187011529ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2475__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 642113979321000753ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2475__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7534191681473039186ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2475__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17235515265147784324ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2476__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8496860141994274510ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2477__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14030047835827016669ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2477__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4488681018415152430ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2477__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3656029383314877627ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2477__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8204005907035840395ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2478__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8932713302572022930ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2478__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17409842239962760548ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2478__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3503328581636516619ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2478__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11819065695559100310ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2479__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1153096463298635832ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2479__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11145610322201342399ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2479__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16025887559153966062ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2479__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17451036361430167359ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2488__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6658320219950552999ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2488__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1423002122033492116ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2497__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8323181909158232639ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2497__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7260711789001342224ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2498__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9355804375988352427ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2498__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14541590630223823238ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2505__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9712098988321090116ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2505__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15164360702506492460ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2516__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7041824674341133014ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2516__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13783751659213484575ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2518__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16313857890042753539ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2518__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 219582158764001372ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2518__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13894625251751445582ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2519__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7917251715685243149ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2519__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10502636652650997578ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2519__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17889445864531432122ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2522__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15843466104226438881ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2522__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10411520284081648053ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18087292619789438241ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2542__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8396849708263832125ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2542__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11743000746221514217ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2542__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10750294511926781932ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2542__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16863944114351584650ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4785548606719526902ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3639233575668943940ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7457614967028846926ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4474857191079521753ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2544__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17704247451890914892ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2544__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14888065118671629842ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2544__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17778819599345577295ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2544__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15084547270875417853ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10995213132243978086ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2546__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11116753664271195431ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2546__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8151721127592346690ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2546__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4748966302297275035ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2546__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13092513627308236556ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15612517206818146167ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17868321858876245ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2052345066069410779ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18211690058041634775ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2548__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1163958598761603044ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2548__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18362793982891351479ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2548__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17928863179991977054ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2548__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15771017165262895907ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2557__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3182894440781412028ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2557__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17771831300523731874ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2566__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18036707695324039914ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2566__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7804596145621575044ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2567__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12046027003230972130ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2567__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16674913590169373758ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2574__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18049989245971181261ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2574__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9310322210806592ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2585__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2851674556289240057ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2585__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4660914061746445069ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2587__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7555635044503775137ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2587__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4677960435092809532ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2587__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7138802247769151309ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2588__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7497598008449457645ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2588__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16552103517203801747ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2588__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12071939207260882954ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2591__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 9944726879260926770ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2591__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3317928657078465814ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7319259891292269375ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2611__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2825280124602125863ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2611__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14069752661788916324ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2611__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12248125836948770094ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2611__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15016584827087256824ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14747102299914713885ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5896707672168025219ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1779986333548588631ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10470846420913964383ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2613__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12597605661936597840ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2613__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3796937676272138810ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2613__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8467268006883213948ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2613__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7457551066955798325ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12394914882189671348ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2615__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8916578865258751413ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2615__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6611292897555541630ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2615__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1766154782357574079ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2615__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18445482253260881081ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13950443208618883123ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14516832677290973989ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9015329663225479347ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10224843641070288754ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2617__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17039979164108538142ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2617__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13636907800885259929ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2617__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1753088073374746280ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2617__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3466140959628885039ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2626__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7880684357075496616ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2626__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2618454240183292939ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2635__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10046349787070002861ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2635__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11814134435338436441ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2636__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4081985928995064148ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2636__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15131574160508162272ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2643__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15718976547503868588ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2643__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5559967868034576874ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2654__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16222737291771817170ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2654__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5315228216969917643ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2656__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6538238893915956202ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2656__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11210740619818799914ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2656__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 745904160931343414ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2657__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4030667988296680112ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2657__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17502798244149115651ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2657__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5900188462962766991ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2660__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7915066115848157213ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2660__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2885660275680827524ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9754178887345853037ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2680__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12771903631021423971ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2680__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15057165061204139289ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2680__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7515793180192377541ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2680__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 589196218468915127ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15494338239369545995ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1592251035660700087ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18088412534306934842ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10583029691592816567ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2682__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4493551113016853049ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2682__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2502078172430364157ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2682__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 732067806313892273ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2682__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13628928721373754925ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4994582498559103492ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2684__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5948395426578274110ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2684__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15151929617408722185ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2684__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3606484019288800933ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2684__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1341906954360515636ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8395952080662696829ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2504243274240946474ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9954757200380644901ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14729523419087083004ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2686__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5421310255182872962ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2686__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16643272564461207435ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2686__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1840219593057868852ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2686__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7147402126457955757ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2695__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15252262093499937453ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2695__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7268942911531178041ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2704__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9438735172281296468ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2704__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12588892446109633185ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2705__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11360256430668033147ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2705__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14101109357607831727ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2712__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9222048332298150147ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2712__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8394154428429048557ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2723__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3942305404066579626ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2723__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15497633413264117063ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2725__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17619974587800315088ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2725__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14835890770803374175ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2725__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9110384013562892850ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2726__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10154575135414144972ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2726__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3775356711786628926ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2726__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8497335816098635937ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2729__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11257094179620131562ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2729__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8516008202483060602ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9110366488532369581ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2749__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3453992249633887569ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2749__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 670356761954116551ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2749__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13845730739312833467ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2749__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11102054674165389901ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4565136548205577359ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17314713837133142290ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13983941889866936741ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 455572693732562877ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2751__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14432058437714439114ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2751__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1491955258354852447ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2751__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2962516157696246750ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2751__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6657265396001811055ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13632376800942870001ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2753__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1001351669816766864ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2753__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3842190055694217483ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2753__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7979337718636738654ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2753__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14402219590640963668ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 643129041101059510ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 903635224713425631ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1705046799729529647ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13587647994710954661ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2755__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3026068343259306665ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2755__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11403695485291541409ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2755__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13413171261123636615ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2755__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16543834936424021615ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2764__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5081257425893416902ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2764__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3878041248474519794ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2773__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 168551165097904445ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2773__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3407101433864667192ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2774__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6397548987727272036ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2774__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6990429223119262621ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2781__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12236831184463322645ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2781__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5687439903425606181ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2792__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11673113589306145288ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2792__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9148943493763914610ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2794__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1156138247836567402ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2794__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16839250593903682368ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2794__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 563809780762204672ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2795__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12218084410017940648ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2795__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 101049193084985511ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2795__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11864170588304632167ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2798__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16184294370654688089ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2798__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8227302733751055321ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16132186269891504010ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2818__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14609601349433422635ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2818__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16847302232397580247ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2818__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15336058974934844569ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2818__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4266789839415429475ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1073656935099500753ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6548187484752917023ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12563280016593103661ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11361904787690787033ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2820__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11600958513071989152ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2820__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1100424474540573957ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2820__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18355451946760361442ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2820__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16440350566015241732ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14382924379974578524ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2822__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 477625124352155491ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2822__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12724279073196851098ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2822__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10744926410503002441ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2822__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6302531570558999753ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11283380780816028924ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3644813749996302557ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2479367891770312519ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16023573465318123384ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2824__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11776823378569438273ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2824__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12765754224206354340ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2824__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10835432775958207392ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2824__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15537700433306171814ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2833__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10766797290210793116ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2833__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18027066195727716150ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2842__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12433347756798334779ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2842__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17633681165317437161ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2843__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1297133758901800797ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2843__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3283269689655178240ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2850__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11164670067188154125ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2850__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18238458360008699815ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2861__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1457209745444247443ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2861__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11716827859755082198ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2863__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7368723761183537334ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2863__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3261228323997319172ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2863__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5937452987693751041ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2864__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15036601492764997653ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2864__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17627182205037491036ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2864__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15979970763397021125ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2867__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5122167675349494846ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2867__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10103376405274521271ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2886__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17027635891058055483ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2887__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15856568430144795515ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2887__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9393863732334363452ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2887__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3350923618080874804ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2887__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17415981237780762384ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2888__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5750808014904733513ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2888__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13434820263043293346ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2888__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4665685920381130472ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2888__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2657274665051459798ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2889__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2659333840779283425ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2889__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3884712654675650399ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2889__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8193864469887450131ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2889__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12501890684227895888ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2890__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8244859378673928633ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2891__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6659397365339979683ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2891__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3780738292695380053ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2891__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9513462329225286026ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2891__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16419798433701162567ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2892__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7394580438696393419ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2892__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3726651426017608450ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2892__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14606967940373238787ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2892__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 257249400270733346ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2893__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11199859242067023486ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2893__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12592958664352065613ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2893__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11942131240027570475ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2893__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8409765051470461262ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2902__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5376279392237413743ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2902__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 969101366878783618ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2911__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18249674836563635394ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2911__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17268903223053612694ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2912__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13953056162666018681ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2912__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3542572209920838238ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2919__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16784909865161077772ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2919__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4903397251750385139ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2930__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5212151203469575455ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2930__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12796547437298519502ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2932__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5606711058567881539ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2932__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10021340332728298419ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2932__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13493567672523126593ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2933__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1994390935200223314ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2933__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15514193873997551698ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2933__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18016159724270972495ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2936__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2324076457190442942ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2936__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15575087483264633824ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2955__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14891066384024464097ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2956__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11824892110755912716ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2956__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10207378032962962002ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2956__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14104849189310916812ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2956__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5147826591060570092ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2957__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4146065501341847327ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2957__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8847247372350010210ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2957__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3630794926964487415ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2957__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17367668282873065774ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2958__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6519041770217935856ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2958__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10081762534698508692ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2958__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8629097700499163729ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2958__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9135694764665712768ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2959__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5678199257577505907ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2960__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2135194043155498548ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2960__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11492221436630693201ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2960__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4102601222525178313ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2960__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16732495637405227204ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2961__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18085165759691222089ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2961__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16507404767639260345ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2961__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17570399531249125027ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2961__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13451856578483765519ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2962__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4176584657923346478ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2962__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13825842588391493364ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2962__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14023863143775075535ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2962__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14225699522123674606ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2971__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1689929926492076406ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2971__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11703956503910464591ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2980__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6803579613050374537ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2980__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6614193853936382100ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2981__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15459672514508698594ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2981__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2504858862066430513ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2988__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13581762883245750482ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2988__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16430604892192847173ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2999__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17034560619661157759ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2999__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15813737671809275552ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3001__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 855895731042779312ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3001__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10153802244114629947ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3001__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15560265029635090731ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3002__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 887808278222186472ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3002__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14063276338914891619ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3002__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 232891385381822800ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3005__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2129465710800492390ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3005__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10338282839920591272ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3024__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4024730331933434365ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3025__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3061009272983164409ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3025__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14691632759740387363ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3025__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13634221804272949586ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3025__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15251587597708742860ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3026__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3593405196219571829ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3026__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3786075702096854068ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3026__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15445950795512098204ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3026__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6858140923383571871ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3027__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8195327102109834757ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3027__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17566141193489021803ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3027__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5243512635588085985ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3027__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2998461854174753605ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3028__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9078074855964187114ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3029__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16870830227603686832ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3029__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18229631366587363894ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3029__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10245211429051638071ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3029__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2203215706807673936ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3030__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17810621536894713436ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3030__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8069214001916561757ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3030__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3843120504096691271ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3030__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7234643177615949810ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3031__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 243253997683918595ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3031__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15070329955953145485ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3031__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1390040580605637274ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3031__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17290996766254996221ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3040__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11131777749859217458ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3040__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5762617347547129878ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3049__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16120798524308150614ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3049__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9303132806429650844ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3050__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 805677448421871315ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3050__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12197081040883886495ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3057__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3833458926972924874ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3057__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6677935933281332284ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3068__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11373466958900103180ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3068__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18106241919193089312ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3070__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2738855471501568102ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3070__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13053184667608706818ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3070__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13620098329528997785ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3071__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17402987907903571503ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3071__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18243689212846496652ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3071__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10579080842759819618ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3074__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13249242813002073695ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3074__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17240539744431932756ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3093__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5257657796877217972ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3094__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8408292553255782982ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3094__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1914058477591462577ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3094__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2102968799364957146ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3094__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16473735346484618478ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3095__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11905124811843717908ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3095__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16697657299728479953ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3095__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5089552751056995660ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3095__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3687720465448622938ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3096__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11724431250090754750ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3096__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1666611748446774597ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3096__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1452766934045123733ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3096__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14247244735777576385ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3097__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1169221038359706770ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3098__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8976940080410990142ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3098__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9197948647072452014ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3098__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12827335971831837998ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3098__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12107640306789300636ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3099__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16763559324700509003ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3099__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15509999237430807055ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3099__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10174841254759878629ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3099__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8242269517072566265ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3100__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13555946785625676925ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3100__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16947420233396588560ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3100__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17003550624300720451ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3100__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 102754036880231570ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3109__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8513571562814058196ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3109__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14833355900429978377ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3118__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15487631776794452647ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3118__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2287953005046521971ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3119__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4900587706154547888ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3119__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10770855951737871717ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3126__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7123675757796375252ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3126__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11556738685015132209ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3137__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4747390212853455196ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3137__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2260949634976864391ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3139__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10068662244467085463ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3139__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9214035465757924787ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3139__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12370749994068072731ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3140__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13030972832638248615ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3140__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9190701816446032193ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3140__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8850810088198849840ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3143__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17061922840148660163ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3143__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6118614494350278249ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3162__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17662905036954018686ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3163__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7005636369254696955ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3163__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13417524314184641518ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3163__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11551576371353914391ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3163__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16222869253610374709ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3164__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9448904674533563036ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3164__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4886511061136378148ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3164__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16539385318050722078ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3164__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5538993483620521114ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3165__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1671360253914657109ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3165__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17095524587455651104ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3165__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10642092774711934958ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3165__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1182926446354221063ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3166__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13128086721186394547ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3167__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8981360161780631272ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3167__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15141241599419807505ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3167__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13177655848245408871ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3167__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7759454725556967761ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3168__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10543375611132772862ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3168__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1400101652384535617ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3168__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2808434452744084263ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3168__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8781710235002799608ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3169__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7625355102054956882ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3169__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7563141416019448797ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3169__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8696982585597102497ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3169__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14231129907753561657ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3178__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10620769408411537598ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3178__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10433097866096187852ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3187__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16484128800691083879ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3187__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18021092684838847832ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3188__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5866460741063931736ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3188__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14862494420851610554ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3195__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17099835620646160402ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3195__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13705468900130816640ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3206__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4714419685280269554ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3206__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1082326521028297785ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3208__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1756035246683908439ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3208__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9706089538076405733ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3208__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5583858828776275610ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3209__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10947311606157401681ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3209__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14916301303449245175ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3209__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3913969289062610100ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3212__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 10459102271918620266ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3212__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5989366566688436559ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3231__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8798409631728733226ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3232__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7479519464648051522ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3232__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6475094350155172327ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3232__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8631922041257506041ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3232__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13032934809865445560ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3233__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14191809834490997102ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3233__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14917435947928686069ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3233__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16570887283418028771ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3233__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2703543052934263333ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3234__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10546829467132349874ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3234__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11440442152818337426ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3234__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15166028542235891121ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3234__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14735254849546705828ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3235__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17201879147988658318ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3236__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17160335807078754375ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3236__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12663618947073137085ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3236__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 301937783144241577ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3236__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8833861814516395628ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3237__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3739268450137193498ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3237__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9201355541909116221ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3237__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5617978581983862857ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3237__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18254803227733110894ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3238__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11427034952714467175ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3238__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16981163170322565717ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3238__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17070979685426962495ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3238__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17908408452528457749ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3247__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5676091891116840392ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3247__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2506904598262898180ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3256__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15590986359111190907ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3256__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 106970831916899236ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3257__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7428315150259391587ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3257__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8710626545369512349ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3264__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3851164638213629820ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3264__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18035527045314602025ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3275__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10240170619360350805ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3275__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7032022754746613933ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3277__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6441486909934763353ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3277__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9180822446906550681ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3277__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8448056221434151024ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3278__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7420346231088519890ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3278__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5157394498546816567ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3278__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2038479405434135569ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3281__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15602890258695249559ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3281__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4985648929702230604ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3300__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8940163166117799491ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3301__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14247920520138245713ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3301__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2096948966698083775ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3301__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9774549084424480437ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3301__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16997193387960616576ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3302__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6996476523094163149ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3302__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2162443829484275625ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3302__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9217080380114157467ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3302__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 160225229298243562ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3303__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3021604125404014386ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3303__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10163053401811137737ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3303__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6157329276335657929ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3303__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16523859797994124238ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3304__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 557041163351446146ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3305__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17475039406104123815ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3305__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1634268306206818167ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3305__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6936982622978248709ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3305__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10139900623358572859ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3306__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1315114234323840929ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3306__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16424841741264629606ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3306__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2498324070326359260ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3306__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12565492704264181015ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3307__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12006568705754204510ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3307__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12943136534002255666ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3307__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5620151954613071223ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3307__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6976494674350489708ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3316__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13973278774383535504ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3316__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12685924571741354661ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3325__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1770859585230761913ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3325__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5872480586776172883ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3326__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11409959112434061688ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3326__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4627454789945900702ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3333__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 394593275705843041ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3333__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11876086058277537744ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3344__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14541293896914181463ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3344__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17377354697592482371ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3346__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16832694817063164181ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3346__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16679274813560021650ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3346__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14485399304764318222ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3347__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7545343665460136280ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3347__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13498273865688810520ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3347__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15098319649395679373ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3350__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 10841887338985853057ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3350__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16107458167487339311ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3369__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13706166900864813037ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3370__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6144936067917634777ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3370__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16675579058924689721ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3370__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15939261246259430453ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3370__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14387218461883946961ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3371__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9164947586073325744ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3371__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3614975438444813342ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3371__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 851226521999103000ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3371__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3623306760756384748ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3372__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4920859688846036528ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3372__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13057863252220301044ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3372__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8454785091290874598ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3372__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5381619130251101194ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3373__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13335174309883673328ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3374__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3656054894855865077ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3374__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 226069455866951893ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3374__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13042961009252220167ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3374__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14372904549524411007ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3375__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18436184651980174463ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3375__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12659085530447543248ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3375__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 743705579722558015ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3375__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16347190665862308794ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3376__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5049224538464613904ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3376__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7334102121022522251ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3376__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11867395842487882964ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3376__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14773578535933345186ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3385__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7986061505924405875ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3385__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8036198226612431124ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3394__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2397954015381469914ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3394__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13398871594771787441ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3395__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14206850947443332080ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3395__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10073327873337605610ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3402__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3566270530935040630ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3402__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 257036917973984671ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3413__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9613866292266507738ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3413__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7312237005037591970ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3415__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1442157865209927605ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3415__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13922065768998086188ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3415__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15627386654182986279ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3416__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14783090329918920278ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3416__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15545137952790087873ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3416__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5187072069755446254ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3419__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2974460812386286533ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3419__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13873280733067319629ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3438__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4760027670867297979ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3439__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11939148557331906512ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3439__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7486568930698596173ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3439__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5769580750703077762ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3439__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17221208220782628325ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3440__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15798531577220325114ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3440__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5621942220221255279ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3440__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6901001118983393257ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3440__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4560330580597806651ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3441__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13919060816751629419ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3441__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12156929445145752480ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3441__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1913354893110265710ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3441__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2861256271136245490ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3442__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16761182577483810144ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3443__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4417290373823007733ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3443__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11761971082614321519ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3443__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3883147455794783296ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3443__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2758068420203099777ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3444__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13890652519961631176ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3444__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4647032656010089990ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3444__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12862924657824140180ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3444__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2270584938154208288ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3445__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9226261176956134005ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3445__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12628781847127333958ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3445__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10842804026448478690ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3445__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 728747778534486225ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3454__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12519225262515047186ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3454__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6123266514198257246ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3463__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10372423456508346613ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3463__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12809174125904290ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3464__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5799974224136308146ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3464__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10848687675523903485ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3471__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14400127104793905947ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3471__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1160777904881942153ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3482__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18230182481676064266ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3482__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13380697068366706252ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3484__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 600797527987776032ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3484__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18354550314173692010ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3484__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1317685853574428208ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3485__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15811808510326350369ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3485__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1124252355547075595ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3485__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5123975591710194476ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3488__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 10193869755706302137ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3488__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9643393016475883703ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3507__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3160065290478166732ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3508__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13613221254720510616ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3508__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10117119196759188124ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3508__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13092090793421706979ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3508__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13431135478999966035ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3509__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17145088298221756577ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3509__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1982654809371764449ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3509__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2131698317033832223ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3509__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14430377404333216553ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3510__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8141993268234292323ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3510__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16814837913597235814ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3510__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3125705233366274193ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3510__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17643237761765820667ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3511__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7884408981447623189ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3512__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17669606544421944420ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3512__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5330125254022036757ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3512__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2584012647949758860ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3512__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 218941959634405531ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3513__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10904808534822877000ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3513__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11632154521298018790ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3513__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12335991617287981466ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3513__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13976879207201353622ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3514__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2008884618491033411ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3514__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15979694955226800804ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3514__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9899098562459022995ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3514__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4608553427199829504ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3523__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16016219547076381726ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3523__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 197274372134042438ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3532__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5998444940002830399ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3532__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17329500446578891700ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3533__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11321454833190778807ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3533__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2955201256568853718ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3540__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10517045324994590799ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3540__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2722798528519488968ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3551__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14951182324612817167ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3551__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16243985903738595569ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3553__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4139230635911711219ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3553__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 341549398975483135ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3553__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3231052591060206538ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3554__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17855847272657239953ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3554__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14928387755916997056ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3554__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 664946396994088776ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3557__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16091702510550349298ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3557__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13590743511152333173ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3576__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13443605971760004971ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3577__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11804741606438258559ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3577__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15827716549621803583ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3577__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4290296563434836791ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3577__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15838752712430265266ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3578__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6936690023261730748ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3578__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7052965770364361145ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3578__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12132618895725633479ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3578__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12518893925022690688ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3579__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11765477916651973150ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3579__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9411204003772624918ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3579__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13771896971422840364ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3579__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10027949698502531149ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3580__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7714540296775798255ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3581__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11139770833416968313ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3581__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11325361156977541995ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3581__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5208738145616679995ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3581__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5755977996636479759ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3582__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1524815083389277044ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3582__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3952392591493998768ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3582__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6437662472058037540ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3582__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3302384619969560971ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3583__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4371817778539350124ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3583__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1609568677094500339ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3583__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4884410537012276676ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3583__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16485585071870164539ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3592__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7950011751835515055ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3592__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2721049987182405565ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3601__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3322410971883954951ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3601__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1072657267289659444ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3602__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2809265713538911242ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3602__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17368244500978895962ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3609__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16391203880918342463ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3609__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5060130829644802960ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3620__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9063969835291361108ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3620__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15924320825502973629ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3622__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1129045023229617862ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3622__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 933111398404096414ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3622__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1058000271255242956ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3623__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4781715770867618822ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3623__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4693277458381366584ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3623__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3598452649365601462ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3626__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 9629885956185813021ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3626__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1440902346305479915ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3645__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15113108205915329966ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3646__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7718144968463985542ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3646__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 294963359849169548ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3646__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10860160902350069668ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3646__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17415129769854344590ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3647__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6123295706956718064ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3647__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13727009607408753758ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3647__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7399521008102973867ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3647__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3817357555621436745ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3648__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15361822709588416531ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3648__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1248611869157581264ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3648__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4094074984442195187ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3648__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11440614574044512271ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3649__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11890300315381754765ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3650__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3448850200343223978ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3650__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18064536273466642349ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3650__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1638910565706087010ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3650__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11089914653271743851ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3651__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4599299631580755277ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3651__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17084993039805611156ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3651__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11440755475666048146ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3651__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9637119383906432867ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3652__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14933399708268453614ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3652__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13328572731997675065ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3652__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7926171531174096308ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3652__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18032015907893825460ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3661__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17060772868100100667ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3661__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13840028956113249552ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3670__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1197245094369664298ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3670__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3447949600658941139ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3671__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15291475813811839062ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3671__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3024962306383478788ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3678__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8612700493000952804ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3678__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13022046191629506962ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3689__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5212734585085399420ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3689__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10703096879020562703ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3691__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7770703224291923973ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3691__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4656373382959853992ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3691__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12365508306930054413ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3692__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13645735267617288502ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3692__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14889809899985437011ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3692__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7349135254165106731ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3695__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1505295218703525162ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3695__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3318468471654455399ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3714__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13615713827231049252ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3715__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15201661298297678291ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3715__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18221232212105236217ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3715__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3189156144930929090ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3715__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4300690905439017741ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3716__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17810675578270813648ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3716__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5881130620890051357ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3716__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10579150203444016718ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3716__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18071510640987205838ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3717__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16173447082584737309ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3717__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15450057099627967624ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3717__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3608122416179491483ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3717__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17691172434564643472ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3718__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3718123932807996192ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3719__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15096564523027791343ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3719__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12685150745239594847ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3719__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15615981375922050133ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3719__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18026064348626061955ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3720__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4352180266557020756ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3720__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17705094225297750030ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3720__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2661143917780951142ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3720__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8079370105519130416ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3721__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6013948566468157205ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3721__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5429439284835806068ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3721__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13602285744520129136ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3721__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10523364816962310696ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3730__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3814231646112136850ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3730__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14777381256565809615ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3739__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8224450517759769845ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3739__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5753132250741923228ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3740__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6173857443964623331ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3740__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13479017419313923865ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3747__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6164154906992161045ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3747__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1583081983852552301ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3758__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3243243890283848638ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3758__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9166250341613982744ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3760__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6226164943529970248ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3760__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14684700332219585154ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3760__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15812402705816716049ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3761__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 901618379629391642ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3761__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16216373832951696724ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3761__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6900127462501097292ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3764__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16335939212449368246ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3764__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12964988722501858989ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3783__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17439422531996923620ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3784__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1505164003742487837ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3784__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17015899854387781585ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3784__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4345561420701293113ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3784__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 75416874594665872ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3785__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14141351345524141082ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3785__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6029487860890364947ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3785__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4825417735265991110ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3785__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12557544030474262347ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3786__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5231177960008520862ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3786__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13877330702541336664ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3786__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6997405255894744965ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3786__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17073180543352301444ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3787__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16437704827276840893ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3788__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4987280574242340423ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3788__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14394400578416936523ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3788__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3816622171516062748ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3788__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5494440923668955154ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3789__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6354989111969121198ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3789__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10108791383818527580ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3789__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17005534606940983602ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3789__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 945185011467612813ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3790__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17627815820534858093ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3790__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10623156051191755004ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3790__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7626785589615103790ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3790__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2555755179299326164ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3799__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 57603190867226778ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3799__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11415803630896187882ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3808__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13299759813770071148ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3808__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5665987163597321698ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3809__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9486575840970159510ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3809__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9722642067625640110ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3816__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16657514539554287111ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3816__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13074153228884964030ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3827__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6855453055456452165ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3827__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14094427210473683106ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3829__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3934844170583411930ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3829__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8363646223182412895ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3829__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 458247276778037142ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3830__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12299290285734736847ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3830__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13715670815414848372ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3830__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8626628306953974611ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3833__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11992414931476974617ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3833__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11011833646684328671ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3852__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 872510406836734443ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3853__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17475649900417917729ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3853__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9659395962886112863ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3853__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16107533599883461904ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3853__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1354093941823911417ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3854__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14022890032701335455ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3854__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12243514010456436018ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3854__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9767432516621931267ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3854__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13207472849737138483ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3855__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13344992268479968387ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3855__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3806924180272465256ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3855__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 945548317983873887ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3855__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4211251503327733697ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3856__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 213735001048986716ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3857__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17876161688118146625ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3857__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5687647598001182943ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3857__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3643311003658023258ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3857__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14394693212150122103ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3858__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15816344403106302391ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3858__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14054491358714626380ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3858__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15975356952510569070ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3858__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3645878647635207863ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3859__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14089299918860672222ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3859__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6432903805591424276ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3859__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4904349707868284528ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3859__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8745182811672464229ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3868__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8042237108195818829ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3868__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14583604341122639700ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3877__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1796294079366319281ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3877__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11171634758921309046ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3878__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9077976904332547835ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3878__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5464482027040743764ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3885__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17590168131169035870ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3885__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2903670645176485686ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3896__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6673276440362373781ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3896__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1125892636375601710ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3898__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9322250935193262150ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3898__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3990400201261594585ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3898__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8286091320848310128ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3899__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18335581300729451652ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3899__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7152858676342674575ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3899__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15891801746298468915ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3902__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 267852125875433297ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3902__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17435793943009278501ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3921__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3965537155369179930ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3922__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10199295223416505274ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3922__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8984583546154101742ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3922__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8426058913271560708ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3922__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 537678064717518485ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3923__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17336254629195966520ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3923__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17095860386175247416ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3923__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10558773134057169675ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3923__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3491851130229505512ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3924__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3658264671972474579ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3924__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8706706120817608167ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3924__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16643926644232654378ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3924__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15982874516196885418ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3925__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16927227054285895935ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3926__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9023422164942435696ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3926__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9585271725751632868ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3926__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10949500610906962600ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3926__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8368850416977808324ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3927__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4266901282789110731ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3927__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1739272264059735989ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3927__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9498900932322395333ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3927__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12703782173773204353ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3928__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15859434381800299696ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3928__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 224766029500141785ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3928__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8885796096906719849ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3928__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14199522986955383991ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3937__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7615872786598716278ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__3937__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3399720622107670077ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3946__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10098779039404594307ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__3946__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13750705819396468200ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3947__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2400594512379063981ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__3947__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11151934665027681758ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3954__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8855604212040211858ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__3954__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8787780369379798562ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3965__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4992086523803850963ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__3965__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2470786687844548914ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3967__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 346146162026703865ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3967__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8959244953307557725ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3967__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10954385888610664423ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3968__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5404762343907188245ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3968__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10409790430215523291ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__3968__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5487795804531728389ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3971__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17260857427776832793ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__3971__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2469232680757897735ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__3990__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17834524265923535219ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3991__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16566596443395634682ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3991__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8125583284287742045ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3991__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10527767889977152557ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__3991__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17696981229795061772ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3992__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2184117665050260134ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3992__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1510553576536004728ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3992__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3748662363097674925ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__3992__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10454515457942559988ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3993__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8721884098665002628ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3993__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13770386700020386734ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3993__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16494092343837432904ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__3993__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1678152244743938009ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__3994__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7419669986698061195ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3995__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14728310224622945220ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3995__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 308496625187426716ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3995__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1257061893502004390ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__3995__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2862050936222607502ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3996__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 388361802008745382ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3996__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 129035569201698612ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3996__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 160967508198669354ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__3996__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13009675418827032615ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3997__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3414793426075266271ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3997__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12247263870430213269ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3997__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9127401002527671532ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__3997__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 714422463126686531ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4006__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6546260150962388557ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4006__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8780841071814679764ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4015__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12116703365289906533ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4015__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 462457467852974834ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4016__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13335956321574456823ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4016__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2934417035940668877ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4023__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10660916060833299317ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4023__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2067695952400123114ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4034__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11476695384854546915ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4034__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9947409398728736422ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4036__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3734086090328693569ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4036__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13860549463492057067ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4036__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15511926956214513631ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4037__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4988570093286470456ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4037__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6994920835154120733ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4037__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9584086022401385324ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4040__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4135737097365403846ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4040__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4315913286632811763ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4059__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6507421187732727865ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4060__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10274456039069761497ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4060__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4459189605803489217ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4060__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14524117067893589586ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4060__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12907907719683215474ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4061__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15585824850601895742ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4061__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6106353893314915837ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4061__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13528557094311149102ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4061__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4703326732261354427ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4062__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9322537843180240854ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4062__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10980924650633327910ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4062__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10933706190327455146ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4062__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4393375936849391030ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4063__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15061753022656308921ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4064__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12180492651993684685ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4064__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7028585447723748542ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4064__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8484872113323585008ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4064__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14679543629191930131ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4065__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4776292062545450420ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4065__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7283725040519603008ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4065__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6640385623394113246ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4065__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4070943424867652383ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4066__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15129663750864135589ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4066__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17889162759874862100ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4066__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1592238375217978564ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4066__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17143901299814659641ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4075__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4945523013288792562ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4075__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14066434416353779520ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4084__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1459377266853048407ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4084__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6135335776610629186ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4085__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6268052821096388686ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4085__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 807766071749181147ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4092__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8089506716109813027ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4092__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3351408390731145684ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4103__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18425434726725877137ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4103__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14641690617289140177ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4105__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12696082243779133229ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4105__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2205108355896434863ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4105__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18240747513307630457ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4106__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17594740074907493078ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4106__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 510046387825796980ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4106__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6555077395907736825ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4109__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 8941861164351836517ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4109__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3952226461228177918ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2122294175505133222ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4129__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12847295139509695456ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4129__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7069221175429537744ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4129__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14413675648122864952ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4129__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2162338581264962229ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15642219902260766402ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4057453352177702710ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9288395001715003329ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1155001691230850817ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4131__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8460058399855084555ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4131__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6193029945339256260ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4131__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12838996830312450916ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4131__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2007694721412659739ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10630213166263529285ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4133__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16538936120888016963ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4133__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2146274290890308827ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4133__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4077353046847745181ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4133__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15444749209521819209ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13954443312396218486ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4871150374229498747ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17819787691787402510ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13168394938255433154ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4135__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15392472151776271078ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4135__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13193620837226291608ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4135__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13504787294127822691ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4135__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 410015600762095447ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4144__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14653260003755650647ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4144__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2352190913717427593ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4153__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11783827854401187053ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4153__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5456183629951204208ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4154__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11487272138523068020ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4154__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17442622273075366584ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4161__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2555352614544624203ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4161__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15099328779369802549ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4172__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14023000430633530053ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4172__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11530150703867087978ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4174__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18365277431244943000ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4174__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2942559266852418757ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4174__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13777806008883596978ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4175__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3609736925104909052ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4175__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5866538069018732160ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4175__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12665831627068528569ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4178__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1421505367122779754ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4178__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13683409714782523763ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13238169290154492779ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4198__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11745171832666539270ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4198__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13543850642287546640ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4198__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14046996371596292914ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4198__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10479357994974458359ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17729504202317890218ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10796670751287366594ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1604343593114157830ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12141292456464509499ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4200__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12179240110505829132ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4200__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13762192804653032806ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4200__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10160245739405002083ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4200__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9199156255403473565ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14687159872658490903ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4202__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5423944669270708416ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4202__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8768239200898881484ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4202__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3802133896634884778ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4202__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1268109979117864115ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4982235438013473043ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9212393582574754945ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3158533682101986493ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6418543833179514694ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4204__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11621598160938513210ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4204__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8603002223387600207ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4204__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1242252164424715411ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4204__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7173012926665378130ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4213__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2659239212371914071ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4213__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2657119852157340179ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4222__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14955583348074900062ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4222__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 446509290276240217ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4223__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10259584105323514602ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4223__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3426932663698614300ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4230__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8306719146278502051ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4230__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2395509849901055190ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4241__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10961113112146054281ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4241__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4506516048270973392ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4243__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6830038984012211935ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4243__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 592640693995097097ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4243__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15142068887084365028ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4244__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9647431561514268103ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4244__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3233097707180380263ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4244__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8755183375922440043ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4247__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6717574504607077857ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4247__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2134500093241838864ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6742210433263803644ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4267__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1480242264931307911ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4267__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14363414320025306837ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4267__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1152206089217874233ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4267__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6765213800857321651ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11043856189796856149ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1286418384141553486ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5699140136444814615ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16853276324050187665ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4269__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15132838557063954631ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4269__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17457146760567782730ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4269__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3760306055961501887ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4269__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5939908321431196264ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15437645928988905883ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4271__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4813612688960542434ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4271__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1523877128395218836ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4271__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11161940086827081246ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4271__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18190569471518955656ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16421096257201800097ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17832380044004856070ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2316466600977833390ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17125921514376662759ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4273__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17571343615664324169ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4273__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3552372952739129912ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4273__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4990765196987088084ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4273__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 623357813612538673ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4282__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17606283633339972828ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4282__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3549127408270069889ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4291__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 447969063894667134ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4291__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11689731687878556785ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4292__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10907336820701909924ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4292__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5441181640733976418ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4299__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3461413936635350149ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4299__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16605312050051478877ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4310__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2665170271402129044ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4310__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16275801414555553147ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4312__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15144718971613488742ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4312__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1182823997687507724ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4312__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11013303144415825611ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4313__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17275920177669207575ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4313__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7077163255558032619ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4313__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2562811064745950003ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4316__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1550288772778730819ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4316__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13702054682423832ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9455616902188203340ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4336__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14607448989789380043ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4336__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11159844456486404756ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4336__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14084494485670161973ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4336__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15425147376623627178ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2335364911086160754ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2785567974652240343ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18274976762072440323ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13531360132302770472ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4338__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4978468359723803859ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4338__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3026589008265069388ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4338__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12033857908323857674ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4338__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11181100452563476099ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9119136069201219240ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4340__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6888851980766620516ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4340__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2926209870258265829ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4340__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 900142108794106544ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4340__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2918161888270555920ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16946245998483831508ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7582804154990777902ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3439051688716955096ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15139295073074227919ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4342__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5499007092851497424ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4342__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3341652811966657849ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4342__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17953138326690949584ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4342__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1576916852672341427ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4351__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18261795964861762503ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4351__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12841791193220112392ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4360__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4374589154443392503ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4360__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13808174655935840603ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4361__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17579087360115958361ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4361__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3765688458420265784ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4368__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2042434685085399871ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4368__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7614245254324396597ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4379__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11510170252740209659ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4379__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12751019732005865481ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4381__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14424367487689103259ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4381__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8078656616316402933ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4381__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3941404223099734339ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4382__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16253700893837635632ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4382__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17621344085117026185ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4382__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3775880445324211137ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4385__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4642315702976066205ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4385__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11168251255875146538ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4404__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8157974716037693270ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4405__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2923916745076893335ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4405__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8752304678972913378ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4405__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11185275652624125967ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4405__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13281935913941882621ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4406__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12182283234107392549ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4406__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3940228662299944180ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4406__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5784688454599387486ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4406__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14402043299660855366ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4407__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6373667328300534146ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4407__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8452824974739553326ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4407__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4852084649999914370ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4407__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11679273725063527538ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4408__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17109911388933612619ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4409__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7371877803590072110ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4409__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6962953259724636447ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4409__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13144707084212114569ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4409__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15881462489180199598ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4410__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17577115842423188410ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4410__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1595734719453498343ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4410__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7898098640734988805ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4410__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1452957620582401932ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4411__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 31245175742523892ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4411__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6163097754977863353ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4411__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9151207402924335477ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4411__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1282382163531689497ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4420__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17130337673549453522ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4420__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3202047245103382213ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4429__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13837822535386216524ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4429__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7051493690730583872ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4430__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3957635553475390407ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4430__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14260452572613254265ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4437__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10897115219419698161ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4437__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5274893486308645193ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4448__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10693831354446948110ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4448__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9741927148396959197ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4450__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2376976595232431264ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4450__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7239902951859985988ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4450__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 649329984900026497ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4451__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11650268063159205263ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4451__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11001511324642631374ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4451__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5582734689158613211ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4454__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13498328534321179102ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4454__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16873741253680323589ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4473__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8915677065762558165ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4474__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9734025748868944348ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4474__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17535811796233352850ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4474__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5018603116914116733ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4474__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18421105407926060387ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4475__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10517772909523303592ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4475__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2913476429129491713ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4475__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16259118167844246760ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4475__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14209663210626030907ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4476__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12245985591054767878ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4476__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16954539020839519397ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4476__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8656769454583847718ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4476__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10230865560250858569ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4477__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18174356476821600671ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4478__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10597882141976954892ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4478__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12914448517748644103ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4478__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13721477171440003936ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4478__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4488463813126877891ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4479__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16598537230908603575ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4479__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3389528381911228205ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4479__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11576441975421777971ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4479__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8879820279600656016ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4480__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3093352847052866933ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4480__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8454324304340214351ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4480__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5485352529852417615ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4480__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18095496512632002966ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4489__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16951762194011061829ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4489__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15179986538155092407ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4498__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13620143405660609002ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4498__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14377034599642060766ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4499__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5918742167396076176ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4499__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17641123570902550609ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4506__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2099363002724997748ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4506__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17880375505535495219ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4517__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14714107937264198391ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4517__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4334324128224920194ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4519__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17682409882641207709ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4519__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13443022857079837416ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4519__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2796716649770010878ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4520__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4809677880373062948ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4520__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15744614343496553468ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4520__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5991882085046514865ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4523__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15313612687463027572ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4523__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7263451002956426479ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4542__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18212239967521596098ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4543__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8484753971904141432ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4543__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13284712684791085641ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4543__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3289192077817818256ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4543__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10570348939352685152ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4544__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4806984188923101493ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4544__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14940492740424925703ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4544__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16020766722136185036ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4544__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16533615006716804600ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4545__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6607720849382301266ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4545__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1277948198105475307ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4545__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4147600267411782571ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4545__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16079032875344078269ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4546__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10963789033163338519ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4547__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14827317913178223036ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4547__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1680133163833228653ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4547__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17610367296894546633ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4547__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4196498912589796064ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4548__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3420246593726496997ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4548__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13569064314150068270ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4548__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17445549403594682264ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4548__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5942884431550426666ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4549__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18362143596824365715ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4549__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3360053423935309432ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4549__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13346060624682196505ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4549__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1975906372822575450ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4558__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18291929486411870349ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4558__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5853272045327487235ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4567__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5103006717428781147ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4567__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2197156894757768288ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4568__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5981209873364269871ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4568__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5286645031915964562ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4575__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17810424326341462318ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4575__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11483699126146737627ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4586__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16921320529023559669ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4586__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4984451733847915290ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4588__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12011444217144468118ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4588__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2780265014765167459ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4588__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7513213810839099554ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4589__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13328940782046510478ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4589__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2209304673223008306ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4589__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15631641523176797610ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4592__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5356280872023020507ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4592__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5136552011640276600ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12920694095251072532ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4612__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3526569297109633472ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4612__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16682952395605095739ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4612__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13747527571557857741ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4612__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7694468400880651119ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4534810860708862783ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13421825444752662932ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6560814204864101059ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5021134583138209604ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4614__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6519011575934057381ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4614__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 728251729222287266ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4614__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11197052969530777323ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4614__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 747163506136962533ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7963885202096837666ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4616__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16150564545808979653ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4616__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 641112451638788778ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4616__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4794694709260732890ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4616__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9762604997813407881ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4675559037774795546ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2612893021432787261ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5359390888440017014ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7715574848341150975ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4618__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13834104344655664448ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4618__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12000854440824369787ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4618__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4067177520721250838ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4618__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12991031936181218683ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4627__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8635061037499725040ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4627__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13421274002762013523ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4636__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8914763922003294036ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4636__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15232783021392169917ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4637__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1758843029642580234ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4637__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14878134709828145201ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4644__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11928468387245921877ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4644__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6533829453524435227ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4655__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1961869561143527295ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4655__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10463628590007434638ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4657__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13334366259588578575ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4657__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8943528882090924655ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4657__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16543428250435333466ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4658__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5566092598715268643ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4658__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8754918774780345062ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4658__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17475743928483279825ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4661__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13943119300191733314ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4661__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12648027695857469501ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16059035369924318136ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4681__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9611280842473828309ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4681__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12845612300957439146ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4681__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18093371915987643724ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4681__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5750306896356525091ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15702370054940504641ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18265952135961067231ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13224398696072298476ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7183488758813961494ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4683__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4394119784494792428ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4683__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11819372243937740242ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4683__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3093934509943639822ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4683__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2286193944420390829ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2511808130133168996ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4685__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8229392047201286348ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4685__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9937518944500069587ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4685__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10104057551422994265ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4685__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14359570457654188681ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12928744395741201560ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17404866083944481291ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16010565015371170490ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6584247601304413887ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4687__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17642845570845400987ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4687__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14867329049669920145ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4687__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17038787661444206758ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4687__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14391786460449929444ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4696__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9929456463900424036ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4696__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10597610500904239659ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4705__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7954726640438736311ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4705__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15813933166816593208ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4706__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7950924996186625191ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4706__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7448104592093084737ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4713__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7820866087554928966ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4713__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9530944011674108100ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4724__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14181534540123739539ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4724__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3985026582718786549ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4726__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13632972428641386224ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4726__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6719582952530205170ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4726__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6530384219472178105ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4727__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9112953948054998984ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4727__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1607827564943121663ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4727__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8017300979629255161ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4730__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1452281567181400065ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4730__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4656821358187870058ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16384697502728853735ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4750__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2747772268859498465ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4750__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13928459418647119471ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4750__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8323768627122959318ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4750__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12031286547862313556ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17004082069186530726ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1363399951456294631ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15655257781635089393ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6338390107976614526ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4752__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 480399076118090680ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4752__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16717234696917455667ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4752__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12028385286703919756ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4752__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7234942337107958458ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9166269740290780866ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4754__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12249630458243975134ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4754__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3760445261729980450ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4754__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18108141357969520218ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4754__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10203948296093906253ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8565684663807885091ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6304191003824475125ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15848250791283939547ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4952525948026935872ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4756__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9958346941230350809ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4756__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12684013808291247886ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4756__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5129819952628775496ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4756__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 576614431476172723ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4765__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11223650248369425809ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4765__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3781981321011524862ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4774__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15623661335406516463ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4774__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17784635425384962421ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4775__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15444407912658501579ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4775__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17765774120780778019ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4782__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7700025073008846433ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4782__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12510245448968365972ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4793__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8571163187685643627ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4793__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16038096205372726775ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4795__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 181633323029105482ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4795__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6925100986915510274ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4795__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 703704781124737150ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4796__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13829179968899186674ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4796__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9654423104130636916ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4796__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3823455966869808348ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4799__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7092446373743998321ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4799__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9400105705752245261ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4959153162828561554ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4819__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1491889217460957563ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4819__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15512278958253433237ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4819__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5835552791525675844ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4819__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14166838644386538196ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12005551905887294047ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1991529251164614036ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6525783605478964752ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16706998125118857083ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4821__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7087593302827949698ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4821__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17044926474949433473ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4821__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13708509027430606587ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4821__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5318200301955785669ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1551480760469255309ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4823__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5273037807126150524ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4823__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3238400885719395931ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4823__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14286195147481332443ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4823__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2896129085235749394ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11831546289695795814ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6597498359816402245ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1070978608306258401ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6023979522136361021ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4825__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8391224253510123697ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4825__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16592983457859525852ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4825__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6636872660536311114ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4825__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14548618007328189016ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4834__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1457603456850694180ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4834__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2665086714616364628ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4843__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6024144309265360881ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4843__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16546715594141615372ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4844__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16322313665632986032ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4844__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1195191370633044050ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4851__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6299483935520173445ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4851__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 946673635517265248ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4862__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11292629841798098809ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4862__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6089205886347448907ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4864__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13273089350329628707ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4864__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5939204347137817041ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4864__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7899237530203865973ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4865__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2276816836190122119ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4865__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1028323859896804848ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4865__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5972198823910661515ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4868__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15010417102146080991ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4868__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6441930126419313686ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13926749138058963661ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4888__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11652936999429385637ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4888__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2648895118935693390ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4888__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16865729015321986619ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4888__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3907749974832850271ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9340273298933127882ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15308092386412876808ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16391128213410895973ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12186788848841954477ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4890__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8541532449126989355ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4890__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11000925951533624079ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4890__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13894574050843949809ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4890__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14776296782987126850ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6522166077750142852ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4892__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 559884199386853283ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4892__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17079330236066051284ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4892__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5250107996390541150ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4892__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3079546183135905771ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8260662451411281288ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 66783972895299775ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5593095403732293429ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18284616776535895862ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4894__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14845120429185321586ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4894__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9891600313818081846ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4894__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5818794198264985516ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4894__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1671568973480048365ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4903__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6072836905208672736ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4903__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5473859846839203602ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4912__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3521320611497198734ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4912__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18060278271752147568ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4913__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6149872617740756201ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4913__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13161012507029484741ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4920__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2332840086676294641ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4920__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1662871097707912638ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4931__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8180079266193919643ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4931__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7316547008744056446ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4933__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 497704712698216041ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4933__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12788226947221436064ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4933__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2875825367535640259ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4934__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2192124390353530071ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4934__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5645672454594233903ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4934__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15502681353504110496ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4937__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1229156594719007149ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4937__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13538223080627472460ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17575742517411513272ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4957__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16128436237121582712ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4957__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4138392917796311335ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4957__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5659849337420634818ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4957__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18348317956530865563ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1822252413212215234ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4582355001800100880ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5538343418326564387ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16686296465065561987ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4959__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11285708269188836621ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4959__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11993573800326545085ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4959__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7378658459906936440ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4959__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15806674800522840671ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5629272419763061156ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4961__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4749705291264702861ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4961__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5215433430442238040ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4961__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4760139296158806773ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4961__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7542501363420123569ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6247785360865004530ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16364693231358918333ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13248471222541365418ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17412229978533923091ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4963__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7205870679143732932ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4963__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17803043173205812545ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4963__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4223388001219777062ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4963__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18368799289595323436ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4972__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17046437366585627549ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4972__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9598221728977412878ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4981__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2174221111593347114ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4981__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17688505769417340382ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4982__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5878643060726797406ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4982__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1646063940383213200ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4989__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17732830584841883581ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4989__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17426247646599554308ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5000__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14128462480613945555ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5000__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14996466154748125264ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5002__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1116544665437763618ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5002__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15619358730191115635ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5002__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4996970468113536370ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5003__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1692735627066900341ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5003__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6481185968094938850ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5003__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12622529567702644356ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5006__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16571846698670952148ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5006__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11711703060197004038ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5025__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6058960114501761616ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5026__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3232725044957863346ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5026__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9285120474790839727ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5026__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3965692352863024254ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5026__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13629210134445292951ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5027__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11907191677844359537ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5027__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10214309146577061475ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5027__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7316375873916389533ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5027__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18282997876835474838ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5028__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2825753330556593726ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5028__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12935567692903424189ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5028__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13674704349610011548ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5028__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11553788563175518301ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5029__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18420355568816927378ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5030__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17054113446336732832ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5030__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4719223642424697416ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5030__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6762466461653721725ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5030__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1365870568977264177ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5031__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7084018595623221898ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5031__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11559030925969310731ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5031__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3992250054586344216ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5031__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2342082200296020322ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5032__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13438493542139699543ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5032__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12226212359678274814ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5032__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6183819312086460915ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5032__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17780200759599783984ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5041__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8479819175813450407ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5041__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9115101943453829447ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5050__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6458978359471708296ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5050__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16920522973300544661ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5051__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3426927582090743893ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5051__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8689387697144368932ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5058__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5256245670137789825ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5058__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10714617829905904716ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5069__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13402625476922574814ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5069__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16276410213579201724ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5071__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16242851322075254602ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5071__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15185181335611105311ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5071__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14863734875746324739ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5072__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9018495115170927392ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5072__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15860698999158120122ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5072__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18402464956764067594ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5075__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 10777559774312646965ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5075__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10515402318822606284ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5094__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9303662585753651355ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5095__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2430649179007536565ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5095__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10637993658377351410ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5095__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3994108379849327245ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5095__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10552720387170778562ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5096__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11243773710376551157ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5096__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16484171175586645994ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5096__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7295448596000519433ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5096__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17935204862181631545ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5097__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2813753339076453991ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5097__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4968543970758945409ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5097__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7327033267301039988ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5097__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10870403208115806339ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5098__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10084587396315214356ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5099__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5752577211062428808ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5099__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9355373637664411148ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5099__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4136553490040284475ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5099__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10217908514787793204ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5100__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17704969610353251846ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5100__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12951141491237849951ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5100__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14435878202972363828ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5100__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6325521102337075197ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5101__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3863983631676299656ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5101__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6083571475978575509ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5101__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15777104354858013037ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5101__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12517651494439449618ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5110__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7326136954449703044ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5110__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1112147056729562934ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5119__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4502623150757581235ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5119__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2267461100705036984ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5120__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4173292015217370840ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5120__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5549787917766771184ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5127__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 263066771813251197ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5127__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15551148119093918517ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5138__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6135487805120875479ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5138__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12968198301807321032ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5140__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10901167805265584086ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5140__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8392131012574481211ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5140__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2518270379344578068ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5141__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6300411279706989590ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5141__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 973703616273528511ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5141__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3545235951933254529ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5144__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13488795862419476350ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5144__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9700202561896131509ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5163__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9165578217229619673ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5164__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8319320652305268057ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5164__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18445256597350464126ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5164__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17563728591792704789ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5164__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 589262140839167314ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5165__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8526500034094956149ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5165__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13063533827650004245ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5165__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3958039624172684797ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5165__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 81512647816854631ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5166__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16868879093559556260ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5166__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10744329286637210535ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5166__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1205268146896045185ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5166__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 68025020545604609ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5167__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12308469948031474552ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5168__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11795291116331191803ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5168__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15542162896851091726ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5168__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8777204378798954603ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5168__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7920377794486522999ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5169__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3839070316502583023ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5169__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6555691116740891753ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5169__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16268885949544753743ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5169__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17817318423161044488ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5170__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17311224722015189221ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5170__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1933226592273506286ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5170__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3650501320005710418ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5170__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13447090543548150846ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5179__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14449540942874999665ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5179__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10311368692220642255ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5188__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14636420553381415822ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5188__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7667916232507007750ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5189__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10949687006819391090ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5189__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8137614512776475796ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5196__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6192562905849061306ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5196__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3754906132892684030ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5207__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12138148440723509162ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5207__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12150388069915592534ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5209__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1637849905178699224ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5209__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17828529975931918156ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5209__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 997954977482262442ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5210__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16945403085593274422ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5210__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13603572668252921185ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5210__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12721535994978225813ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5213__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4108336302876050202ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5213__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3726991375786701572ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5232__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 317207516546376983ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5233__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16985802884460543973ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5233__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13788232388579917991ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5233__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1616678007263374930ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5233__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2414467222982473903ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5234__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 973532436526566869ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5234__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9832268800380963924ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5234__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13848904856501343757ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5234__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6606678715809413571ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5235__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13345695483096191617ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5235__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17502668357995708327ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5235__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10536803093478547685ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5235__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3961950022197582000ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5236__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8561507126044810590ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5237__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5455611812924237428ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5237__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10143312908026329182ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5237__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16664002616240683100ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5237__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9687953857507155016ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5238__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11646554473955753895ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5238__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 599992428834787967ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5238__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4477961656198345119ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5238__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15571793503700401741ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5239__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13861977543151847432ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5239__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9706978919924007250ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5239__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13910296170041282519ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5239__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13498171199800343747ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5248__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9143033266717754864ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5248__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4821734105493443149ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5257__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2168303893584913506ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5257__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18306914192735718666ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5258__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13274769649669891408ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5258__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4115485393762727310ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5265__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10019001782849004617ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5265__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17729446294792815024ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5276__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 671686939952805336ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5276__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15627080239010560251ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5278__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11481996269492945190ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5278__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5294835826995876266ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5278__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3953519951071437063ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5279__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12104759015259428912ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5279__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16365027022648423059ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5279__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12712047968029011248ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5282__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7952897350490996267ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5282__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8529179590435848885ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5301__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7280100511430397204ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5302__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14958780087679157614ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5302__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4720117893990506839ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5302__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10274946480522450645ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5302__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9609945414878979953ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5303__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4350657207572256527ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5303__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14351103965832201694ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5303__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5147538870065493560ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5303__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5731769864173238520ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5304__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11812978849984721441ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5304__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7358206617111525075ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5304__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2330951969733722419ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5304__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7875022334573776283ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5305__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4876083697589379108ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5306__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14134386139466256451ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5306__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17332415081900623827ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5306__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11902727456209770910ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5306__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12557631349295855935ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5307__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4050532112524278626ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5307__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 100158403720477622ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5307__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2410464059348802193ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5307__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12022180581286370835ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5308__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15736163868010019799ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5308__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15841469733935521485ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5308__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10769553415737515015ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5308__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3878717039578316374ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5317__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15358234936622413382ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5317__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15047203865137745337ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5326__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14246547563087063369ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5326__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14882317330513644010ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5327__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6747173730060541712ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5327__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16249358834617564584ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5334__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9197929312444485367ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5334__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5876570016333177230ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5345__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18140288016295098238ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5345__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1769737888214322976ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5347__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14773810629627903858ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5347__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5845203406158046653ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5347__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10236498191503401479ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5348__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14909507333775243694ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5348__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16935157942053086810ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5348__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12655064226063430053ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5351__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5160640392709270914ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5351__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14480837682129403773ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5370__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5587653044258832698ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5371__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2754560644163095520ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5371__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6674358765419389762ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5371__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17303803556727619301ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5371__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9673920795546931438ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5372__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11075020905176787449ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5372__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7035894660971322265ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5372__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16280243405701935120ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5372__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16673645350418927921ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5373__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8015092286483016060ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5373__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17584491712255901891ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5373__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14336753077760308370ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5373__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1509401971001180739ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5374__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2821443287103779122ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5375__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8506674276396139996ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5375__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13698797636925091289ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5375__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5178167315071623442ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5375__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7194986331933083456ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5376__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9681051751457949678ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5376__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6924564192413991163ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5376__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7058556863222136807ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5376__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16725630624967215791ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5377__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4647261852474792875ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5377__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2021861509833334855ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5377__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15201560752823165562ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5377__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12030654532899068359ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5386__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5916376121915365464ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5386__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6171095501664225505ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5395__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6679372946153412949ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5395__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4156865247322896757ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5396__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17684725384736230636ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5396__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7778707145560463259ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5403__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14286562914125641359ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5403__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10481583194456523671ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5414__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1035462126229917415ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5414__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17896851047095782670ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5416__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17976545283640804293ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5416__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8202253560185966996ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5416__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 34070262256376277ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5417__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1763554354434754775ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5417__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2517736445155889299ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5417__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9341295141962500042ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5420__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6607064079512875374ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5420__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 702646838783571897ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5439__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9352212534159735870ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5440__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11268864167450757870ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5440__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3876415277372925142ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5440__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16528658038199003025ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5440__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15148794791883864486ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18030947762428440617ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7598149692625108794ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15176274552059609250ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5441__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15603446644194534306ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5442__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1486670712868559309ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5442__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9163182043834731124ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5442__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16184960112167797342ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5442__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11618536095263218585ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5443__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1175664361386327072ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5444__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16646965950757732559ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5444__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6787368115253209285ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5444__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18395468883681719564ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5444__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5818408658116878817ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18342920429755568676ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5641896890202099278ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17207307560036546390ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5445__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5176877275125314461ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5446__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4160703994561259648ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5446__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2108675977829336413ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5446__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1134101221394672057ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5446__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9760991640916042140ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5455__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11834153294802046934ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__5455__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5837547481994457692ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5464__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13801003629610200065ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__5464__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11524829515916076862ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5465__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 193530412242268900ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5465__vector = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9811295373638762236ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5472__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15650082807209429006ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__5472__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11897087115893877623ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5483__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12600138749313297817ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__5483__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6288174106586904014ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5485__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1028708688860877574ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5485__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18352544851292180348ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5485__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6455486034702638715ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5486__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16818435566360204828ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5486__input_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6106221090034044421ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__5486__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18417994293222203557ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5489__Vfuncout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 3364270544151783419ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__5489__vector = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8882467961631481554ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__5508__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15379204293067877460ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5509__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3402669894500536559ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5509__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10482051790233405365ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5509__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1250531171473703330ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__5509__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1637055532831982061ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8574531181182058998ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16931357854200694717ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1406114813331635571ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__5510__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4987083983065136752ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5511__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17370165173465878789ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5511__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14896099728302064197ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5511__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1134206833575916493ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__5511__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15626454790990388190ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__5512__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6441207365748203852ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5513__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6000939805140597523ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5513__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6153085142687374296ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5513__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10744981942477758346ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__5513__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2014084270053706952ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5405071461337640352ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__arg1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6482771471297507756ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17447800499680869029ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__5514__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13780043060975625267ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5515__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13704053275049778844ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5515__arg1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14923919129972115023ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5515__arg2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11834315266835199701ull);
    vlSelf->__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__5515__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3461640068529584972ull);
}
