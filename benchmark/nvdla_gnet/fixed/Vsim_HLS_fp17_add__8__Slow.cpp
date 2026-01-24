// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_1__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out_prdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_10) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out0_vld))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_0) 
                 & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_16))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_1) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_7))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4532__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4485__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4534__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4533__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4524__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4500__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4503__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4501__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4487__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4530__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4535__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4537__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4486__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4528__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4502__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4488__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4536__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4538__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4529__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4504__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4531__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4505__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4526__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4527__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4559__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4559__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4559__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4559__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4560__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4560__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4560__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4560__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4561__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4561__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4561__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4561__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4566__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4566__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4566__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4566__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4566__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4566__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4576__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4576__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4576__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4576__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4587__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4587__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4587__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4587__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4587__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4587__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4594__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4594__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4594__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4594__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4594__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4594__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4610__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4610__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4610__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4610__vector = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4619__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4619__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4619__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4619__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4619__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4619__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4620__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4620__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4620__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4620__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4620__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4620__arg2 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4586__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4586__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4586__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4586__Vfuncout)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4561__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4561__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4561__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4561__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4612__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4612__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4612__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4612__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4612__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4612__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4612__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4612__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4614__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4614__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4614__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4614__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4614__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4614__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4614__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4614__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4613__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4611__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4616__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4616__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4616__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4616__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4616__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4616__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4616__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4616__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4618__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4618__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4618__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4618__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4618__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4618__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4618__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4618__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4617__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4615__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[2U] 
                           << 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[1U] 
                                     >> 0x00000018U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4621__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data4[2U] 
                           << 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data4[1U] 
                                     >> 0x00000018U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4622__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4560__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4560__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4560__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4560__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4562__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4563__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4564__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4558__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4558__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4558__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4558__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4575__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4575__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4575__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4575__Vfuncout))))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4587__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4587__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4587__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4587__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4587__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4587__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4590__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4591__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4559__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4559__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4559__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4559__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4576__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4576__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4576__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4576__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4592__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4592__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4592__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4592__Vfuncout))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4619__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4619__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4620__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4619__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4620__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4619__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4620__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4620__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4620__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4619__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4620__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4619__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4567__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4567__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4567__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4567__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4608__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4609__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4568__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4568__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4568__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4568__Vfuncout)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4610__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4610__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4610__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4610__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4594__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4594__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4594__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4594__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4594__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4594__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4566__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4566__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4566__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4566__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4566__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4566__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4588__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4588__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4588__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4588__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4588__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4588__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4589__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4589__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4589__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4589__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4589__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4589__Vfuncout))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4565__Vfuncout;
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

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out_prdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out3_vld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_9))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_2) 
                 & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_17))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_3) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_5))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4601__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4554__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4603__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4602__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4593__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4569__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4572__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4570__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4556__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4599__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4604__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4606__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4555__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4597__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4571__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4557__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4605__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4607__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4598__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4573__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4600__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4574__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4595__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4596__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4628__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4628__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4628__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4628__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4629__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4629__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4629__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4629__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4630__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4630__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4630__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4630__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4635__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4635__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4635__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4635__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4635__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4635__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4645__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4645__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4645__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4645__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4656__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4656__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4656__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4656__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4656__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4656__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4663__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4663__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4663__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4663__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4663__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4663__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4679__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4679__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4679__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4679__vector = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4688__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4688__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4688__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4688__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4688__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4688__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4689__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4689__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4689__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4689__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4689__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4689__arg2 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4655__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4655__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4655__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4655__Vfuncout)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4630__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4630__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4630__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4630__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4681__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4681__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4681__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4681__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4681__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4681__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4681__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4681__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4683__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4683__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4683__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4683__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4683__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4683__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4683__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4683__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4682__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4680__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4685__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4685__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4685__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4685__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4685__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4685__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4685__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4685__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4687__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4687__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4687__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4687__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4687__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4687__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4687__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4687__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4686__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4684__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[3U] 
                           << 0x0000000cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[2U] 
                                              >> 0x00000014U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4690__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data4[3U] 
                           << 0x0000000cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data4[2U] 
                                              >> 0x00000014U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4691__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4629__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4629__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4629__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4629__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4631__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4632__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4633__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4627__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4627__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4627__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4627__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4644__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4644__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4644__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4644__Vfuncout))))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4656__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4656__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4656__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4656__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4656__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4656__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4659__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4660__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4628__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4628__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4628__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4628__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4645__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4645__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4645__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4645__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4661__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4661__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4661__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4661__Vfuncout))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4688__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4688__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4689__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4688__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4689__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4688__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4689__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4689__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4689__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4688__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4689__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4688__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4636__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4636__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4636__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4636__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4677__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4678__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4637__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4637__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4637__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4637__Vfuncout)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4679__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4679__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4679__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4679__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4663__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4663__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4663__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4663__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4663__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4663__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4635__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4635__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4635__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4635__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4635__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4635__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4657__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4657__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4657__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4657__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4657__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4657__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4658__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4658__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4658__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4658__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4658__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4658__Vfuncout))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4634__Vfuncout;
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

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out_prdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out2_vld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_9))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_4) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in3_b_rdy))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_4) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in3_a_rdy))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4670__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4623__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4672__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4671__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4662__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4638__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4641__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4639__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4625__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4668__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4673__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4675__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4624__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4666__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4640__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4626__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4674__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4676__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4667__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4642__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4669__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4643__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4664__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4665__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4697__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4697__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4697__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4697__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4698__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4698__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4698__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4698__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4699__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4699__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4699__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4699__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4704__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4704__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4704__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4704__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4704__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4704__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4714__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4714__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4714__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4714__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4725__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4725__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4725__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4725__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4725__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4725__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4732__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4732__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4732__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4732__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4732__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4732__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4748__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4748__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4748__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4748__vector = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4757__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4757__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4757__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4757__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4757__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4757__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4758__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4758__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4758__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4758__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4758__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4758__arg2 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4724__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4724__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4724__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4724__Vfuncout)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4699__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4699__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4699__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4699__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4750__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4750__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4750__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4750__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4750__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4750__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4750__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4750__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4752__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4752__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4752__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4752__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4752__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4752__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4752__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4752__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4751__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4749__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4754__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4754__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4754__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4754__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4754__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4754__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4754__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4754__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4756__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4756__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4756__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4756__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4756__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4756__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4756__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4756__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4755__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4753__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__input_0 
        = (0x0001ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[0U]);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4759__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__input_0 
        = (0x0001ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data5[0U]);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4760__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4698__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4698__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4698__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4698__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4700__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4701__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4702__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4696__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4696__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4696__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4696__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4713__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4713__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4713__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4713__Vfuncout))))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4725__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4725__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4725__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4725__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4725__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4725__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4728__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4729__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4697__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4697__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4697__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4697__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4714__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4714__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4714__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4714__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4730__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4730__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4730__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4730__Vfuncout))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4757__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4757__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4758__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4757__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4758__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4757__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4758__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4758__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4758__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4757__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4758__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4757__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4705__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4705__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4705__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4705__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4746__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4747__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4706__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4706__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4706__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4706__Vfuncout)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4748__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4748__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4748__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4748__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4732__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4732__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4732__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4732__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4732__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4732__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4704__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4704__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4704__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4704__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4704__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4704__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4726__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4726__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4726__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4726__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4726__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4726__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4727__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4727__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4727__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4727__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4727__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4727__Vfuncout))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4703__Vfuncout;
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

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out_prdy) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_8)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in0_b_rdy) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_6))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in0_a_rdy) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_6))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4739__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4692__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4741__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4740__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4731__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4707__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4710__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4708__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4694__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4737__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4742__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4744__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4693__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4735__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4709__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4695__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4743__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4745__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4736__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4711__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4738__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4712__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4733__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4734__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4766__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4766__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4766__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4766__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4767__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4767__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4767__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4767__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4768__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4768__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4768__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4768__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4773__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4773__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4773__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4773__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4773__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4773__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4783__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4783__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4783__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4783__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4794__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4794__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4794__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4794__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4794__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4794__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4801__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4801__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4801__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4801__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4801__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4801__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4817__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4817__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4817__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4817__vector = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4826__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4826__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4826__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4826__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4826__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4826__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4827__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4827__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4827__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4827__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4827__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4827__arg2 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4793__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4793__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4793__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4793__Vfuncout)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4768__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4768__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4768__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4768__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4819__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4819__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4819__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4819__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4819__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4819__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4819__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4819__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4821__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4821__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4821__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4821__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4821__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4821__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4821__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4821__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4820__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4818__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4823__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4823__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4823__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4823__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4823__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4823__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4823__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4823__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4825__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4825__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4825__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4825__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4825__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4825__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4825__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4825__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4824__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4822__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[1U] 
                           << 4U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[0U] 
                                     >> 0x0000001cU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4828__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data5[1U] 
                           << 4U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data5[0U] 
                                     >> 0x0000001cU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4829__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4767__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4767__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4767__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4767__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4769__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4770__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4771__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4765__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4765__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4765__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4765__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4782__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4782__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4782__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4782__Vfuncout))))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4794__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4794__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4794__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4794__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4794__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4794__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4797__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4798__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4766__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4766__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4766__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4766__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4783__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4783__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4783__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4783__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4799__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4799__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4799__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4799__Vfuncout))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4826__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4826__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4827__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4826__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4827__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4826__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4827__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4827__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4827__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4826__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4827__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4826__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4774__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4774__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4774__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4774__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4815__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4816__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4775__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4775__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4775__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4775__Vfuncout)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4817__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4817__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4817__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4817__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4801__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4801__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4801__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4801__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4801__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4801__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4773__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4773__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4773__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4773__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4773__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4773__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4795__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4795__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4795__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4795__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4795__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4795__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4796__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4796__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4796__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4796__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4796__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4796__Vfuncout))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4772__Vfuncout;
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

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out_prdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_10) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out0_vld))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_0) 
                 & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_18))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_1) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_7))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4808__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4761__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4810__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4809__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4800__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4776__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4779__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4777__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4763__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4806__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4811__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4813__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4762__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4804__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4778__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4764__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4812__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4814__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4805__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4780__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4807__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4781__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4802__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4803__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4835__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4835__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4835__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4835__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4836__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4836__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4836__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4836__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4837__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4837__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4837__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4837__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4842__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4842__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4842__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4842__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4842__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4842__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4852__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4852__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4852__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4852__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4863__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4863__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4863__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4863__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4863__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4863__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4870__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4870__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4870__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4870__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4870__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4870__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4886__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4886__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4886__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4886__vector = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4895__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4895__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4895__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4895__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4895__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4895__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4896__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4896__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4896__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4896__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4896__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4896__arg2 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4862__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4862__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4862__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4862__Vfuncout)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4837__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4837__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4837__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4837__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4888__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4888__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4888__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4888__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4888__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4888__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4888__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4888__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4890__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4890__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4890__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4890__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4890__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4890__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4890__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4890__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4889__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4887__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4892__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4892__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4892__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4892__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4892__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4892__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4892__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4892__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4894__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4894__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4894__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4894__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4894__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4894__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4894__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4894__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4893__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4891__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[2U] 
                           << 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[1U] 
                                     >> 0x00000018U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4897__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data5[2U] 
                           << 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data5[1U] 
                                     >> 0x00000018U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4898__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4836__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4836__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4836__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4836__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4838__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4839__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4840__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4834__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4834__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4834__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4834__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4851__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4851__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4851__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4851__Vfuncout))))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4863__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4863__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4863__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4863__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4863__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4863__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4866__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4867__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4835__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4835__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4835__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4835__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4852__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4852__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4852__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4852__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4868__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4868__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4868__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4868__Vfuncout))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4895__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4895__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4896__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4895__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4896__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4895__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4896__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4896__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4896__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4895__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4896__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4895__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4843__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4843__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4843__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4843__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4884__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4885__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4844__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4844__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4844__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4844__Vfuncout)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4886__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4886__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4886__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4886__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4870__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4870__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4870__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4870__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4870__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4870__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4842__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4842__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4842__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4842__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4842__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4842__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4864__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4864__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4864__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4864__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4864__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4864__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4865__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4865__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4865__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4865__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4865__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4865__Vfuncout))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4841__Vfuncout;
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

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out_prdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out3_vld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_9))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_2) 
                 & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_19))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_3) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_5))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4877__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4830__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4879__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4878__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4869__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4845__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4848__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4846__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4832__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4875__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4880__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4882__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4831__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4873__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4847__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4833__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4881__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4883__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4874__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4849__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4876__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4850__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4871__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4872__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_3__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4904__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4904__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4904__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4904__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4905__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4905__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4905__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4905__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4906__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4906__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4906__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4906__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4911__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4911__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4911__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4911__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4911__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4911__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4921__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4921__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4921__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4921__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4932__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4932__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4932__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4932__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4932__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4932__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4939__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4939__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4939__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4939__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4939__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4939__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4955__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4955__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4955__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4955__vector = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4964__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4964__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4964__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4964__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4964__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4964__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4965__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4965__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4965__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4965__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4965__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4965__arg2 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4931__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4931__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4931__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4931__Vfuncout)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4906__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4906__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4906__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4906__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4957__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4957__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4957__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4957__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4957__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4957__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4957__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4957__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4959__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4959__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4959__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4959__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4959__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4959__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4959__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4959__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4958__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4956__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4961__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4961__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4961__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4961__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4961__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4961__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4961__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4961__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4963__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4963__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4963__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4963__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4963__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4963__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4963__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4963__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4962__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4960__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[3U] 
                           << 0x0000000cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[2U] 
                                              >> 0x00000014U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4966__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data5[3U] 
                           << 0x0000000cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data5[2U] 
                                              >> 0x00000014U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4967__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4905__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4905__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4905__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4905__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4907__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4908__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4909__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4903__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4903__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4903__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4903__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4920__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4920__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4920__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4920__Vfuncout))))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4932__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4932__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4932__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4932__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4932__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4932__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4935__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4936__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4904__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4904__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4904__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4904__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4921__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4921__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4921__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4921__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4937__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4937__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4937__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4937__Vfuncout))));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4964__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4964__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4965__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4964__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4965__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4964__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4965__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4965__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4965__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4964__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4965__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4964__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4912__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4912__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4912__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4912__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4953__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4954__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4913__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4913__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4913__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4913__Vfuncout)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4955__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4955__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4955__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4955__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4939__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4939__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4939__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4939__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4939__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4939__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4911__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4911__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4911__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4911__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4911__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4911__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4933__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4933__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4933__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4933__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4933__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4933__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4934__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4934__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4934__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4934__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4934__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4934__Vfuncout))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4910__Vfuncout;
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
