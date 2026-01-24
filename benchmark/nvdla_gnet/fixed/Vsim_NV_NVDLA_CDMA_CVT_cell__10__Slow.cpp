// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4261__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4261__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4261__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4261__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4262__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4262__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4262__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4262__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4265__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4265__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4265__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4265__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4269__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4269__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4269__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4269__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4273__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4273__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4273__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4273__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4276__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4276__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4276__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4276__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4276__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4276__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4277__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4277__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4277__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4277__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4277__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4277__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4279__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4279__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4279__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4279__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4282__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4282__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4282__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4282__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4315__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4315__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4315__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4315__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4315__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4315__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4327__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4327__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4327__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4327__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4327__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4327__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4328__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4328__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4328__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4328__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4328__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4328__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23 
        = ((1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                   >> 0x0000001eU)) & (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                              >> 0x0000001eU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_60_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4329__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_60_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4330__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                           >> 0x0000001eU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4901 = (
                                                   (2U 
                                                    == 
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                                     >> 0x0000001eU)) 
                                                   | (2U 
                                                      != 
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                                       >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp 
        = (1U & (~ ((2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                            >> 0x0000001eU)) | (1U 
                                                == 
                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                                 >> 0x0000001eU)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3254 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2 
        = (1U & VL_REDXOR_32((0xc0000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4260__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4266__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4266__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4266__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4266__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4266__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4267__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4267__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4267__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4267__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4267__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp) 
           & (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp) 
                    | (1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                              >> 0x0000001eU)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4902 = (
                                                   (2U 
                                                    == 
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                                     >> 0x0000001eU)) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg2 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
           >> 0x0000001aU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4326__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[7U] 
                                                                 >> 0x00000010U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
           & (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x0000003cU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x0000003cU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4274__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4274__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4274__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4274__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4274__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4275__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4275__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4275__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4275__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4902) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4265__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                         >> 0x0000001eU)) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                                             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                                                  ? 2U
                                                  : 1U) 
                                                >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4265__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4265__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4265__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4901) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4285__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                    >> 0x00000022U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                       >> 0x00000010U)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000022U)) | (0U == 
                                              (0x0003ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                          >> 0x00000010U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                      >> 0x0000001eU))) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4286__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4291__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (4U & ((~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
                                                & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3)) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                                        << 2U)))) | 
           ((2U & ((~ ((~ (IData)(((0U == (0x00018000U 
                                           & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                                   & ((~ ((~ (IData)(
                                                     ((0U 
                                                       == 
                                                       (0x00c0U 
                                                        & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                      & ((0U 
                                                          != 
                                                          (0x0030U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                         | (0U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                                >> 2U))))))) 
                                          & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                      & ((0U != (0x3000U 
                                                 & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                         | (0U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000aU)))))))) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                   << 1U)) | (1U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
                                         | (1U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000dU)))) 
                                        | ((((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                               >> 0x0000000bU) 
                                              | (1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                     >> 9U)))) 
                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2)) 
                                            | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                 >> 7U) 
                                                | ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 5U))) 
                                                   | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 3U) 
                                                       | (1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                              >> 1U)))) 
                                                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                               & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7)))) 
                                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)) 
                                       & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4270__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4270__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4270__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4270__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4270__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4270__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4261__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4261__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4261__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4261__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4262__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4262__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4262__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4262__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4284__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4279__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4279__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4279__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4279__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4327__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4327__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4328__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4327__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4328__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4327__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4328__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4328__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4328__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4327__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4328__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4327__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x0000001eU))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4271__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4271__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4271__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4271__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4271__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4271__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4323__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4283__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4283__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4283__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4283__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4281__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4281__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4281__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4281__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4281__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4272__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4272__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4272__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4272__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4272__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4268__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4268__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4268__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4268__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4268__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4324__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4324__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4324__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4324__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4324__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4325__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4325__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4325__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4325__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4282__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4282__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4282__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4282__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4273__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4273__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4273__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4273__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4269__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4269__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4269__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4269__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4314__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4280__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4278__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4276__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4276__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4276__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4276__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4276__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4276__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1)) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4292__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4263__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4294__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4287__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4315__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4315__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4315__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4315__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4315__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4315__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                               >> 0x0000001eU)) << 1U) 
                      | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4313__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4293__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4264__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4295__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4288__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4277__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4277__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4277__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4277__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4277__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4277__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4316__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4317__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4319__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4320__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4296__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4289__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                               >> 0x0000001eU)) << 1U) 
                      | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4312__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4318__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4321__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4290__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4322__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_61__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_61__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4332__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4332__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4332__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4332__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4333__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4333__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4333__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4333__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4336__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4336__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4336__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4336__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4340__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4340__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4340__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4340__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4344__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4344__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4344__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4344__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4347__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4347__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4347__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4347__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4347__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4347__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4348__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4348__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4348__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4348__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4348__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4348__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4350__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4350__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4350__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4350__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4353__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4353__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4353__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4353__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4386__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4386__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4386__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4386__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4386__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4386__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4398__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4398__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4398__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4398__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4398__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4398__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4399__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4399__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4399__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4399__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4399__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4399__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_61_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4400__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_61_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4401__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                           >> 0x0000001eU))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3255 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4331__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4337__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4337__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4337__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4337__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4337__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4338__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4338__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4338__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4338__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4338__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg2 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
           >> 0x0000001aU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4397__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[7U] 
                                                                 >> 0x00000010U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x0000003dU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x0000003dU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4345__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4345__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4345__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4345__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4345__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4346__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4346__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4346__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4346__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__VdfgRegularize_h6e95ff9d_0_4902) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4336__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                         >> 0x0000001eU)) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                                             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                                                  ? 2U
                                                  : 1U) 
                                                >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4336__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4336__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4336__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__VdfgRegularize_h6e95ff9d_0_4901) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4356__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                    >> 0x00000022U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                       >> 0x00000010U)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000022U)) | (0U == 
                                              (0x0003ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                          >> 0x00000010U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                      >> 0x0000001eU))) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4357__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4362__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (4U & ((~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
                                                & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3)) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                                        << 2U)))) | 
           ((2U & ((~ ((~ (IData)(((0U == (0x00018000U 
                                           & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                                   & ((~ ((~ (IData)(
                                                     ((0U 
                                                       == 
                                                       (0x00c0U 
                                                        & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                      & ((0U 
                                                          != 
                                                          (0x0030U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                         | (0U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                                >> 2U))))))) 
                                          & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                      & ((0U != (0x3000U 
                                                 & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                         | (0U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000aU)))))))) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                   << 1U)) | (1U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
                                         | (1U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000dU)))) 
                                        | ((((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                               >> 0x0000000bU) 
                                              | (1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                     >> 9U)))) 
                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2)) 
                                            | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                 >> 7U) 
                                                | ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 5U))) 
                                                   | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 3U) 
                                                       | (1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                              >> 1U)))) 
                                                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                               & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7)))) 
                                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)) 
                                       & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4341__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4341__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4341__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4341__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4341__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4341__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4332__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4332__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4332__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4332__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4333__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4333__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4333__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4333__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4355__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4350__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4350__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4350__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4350__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4398__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4398__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4399__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4398__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4399__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4398__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4399__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4399__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4399__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4398__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4399__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4398__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x0000001eU))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4342__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4342__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4342__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4342__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4342__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4342__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4394__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4354__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4354__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4354__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4354__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4352__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4352__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4352__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4352__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4352__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4343__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4343__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4343__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4343__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4343__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4339__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4339__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4339__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4339__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4339__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4395__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4395__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4395__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4395__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4395__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4396__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4396__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4396__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4396__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4353__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4353__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4353__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4353__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4344__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4344__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4344__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4344__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4340__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4340__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4340__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4340__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4385__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4351__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4349__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4347__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4347__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4347__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4347__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4347__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4347__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1)) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4363__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4334__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4365__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4358__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4386__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4386__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4386__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4386__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4386__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4386__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                               >> 0x0000001eU)) << 1U) 
                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4384__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4364__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4335__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4366__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4359__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4348__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4348__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4348__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4348__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4348__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4348__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4387__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4388__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4390__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4391__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4367__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4360__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                               >> 0x0000001eU)) << 1U) 
                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4383__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4389__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4392__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4361__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4393__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_62__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_62__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4403__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4403__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4403__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4403__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4404__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4404__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4404__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4404__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4407__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4407__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4407__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4407__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4411__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4411__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4411__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4411__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4415__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4415__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4415__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4415__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4418__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4418__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4418__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4418__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4418__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4418__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4419__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4419__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4419__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4419__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4419__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4419__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4421__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4421__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4421__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4421__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4424__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4424__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4424__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4424__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4457__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4457__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4457__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4457__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4457__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4457__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4469__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4469__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4469__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4469__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4469__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4469__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4470__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4470__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4470__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4470__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4470__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4470__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_62_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4471__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_62_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4472__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                           >> 0x0000001eU))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3256 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4402__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4408__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4408__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4408__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4408__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4408__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4409__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4409__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4409__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4409__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4409__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg2 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
           >> 0x0000001aU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4468__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[7U] 
                                                                 >> 0x00000010U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x0000003eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x0000003eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4416__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4416__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4416__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4416__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4416__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4417__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4417__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4417__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4417__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__VdfgRegularize_h6e95ff9d_0_4902) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4407__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                         >> 0x0000001eU)) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                                             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                                                  ? 2U
                                                  : 1U) 
                                                >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4407__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4407__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4407__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__VdfgRegularize_h6e95ff9d_0_4901) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4427__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                    >> 0x00000022U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                       >> 0x00000010U)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000022U)) | (0U == 
                                              (0x0003ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                          >> 0x00000010U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                      >> 0x0000001eU))) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4428__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4433__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (4U & ((~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
                                                & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3)) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                                        << 2U)))) | 
           ((2U & ((~ ((~ (IData)(((0U == (0x00018000U 
                                           & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                                   & ((~ ((~ (IData)(
                                                     ((0U 
                                                       == 
                                                       (0x00c0U 
                                                        & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                      & ((0U 
                                                          != 
                                                          (0x0030U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                         | (0U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                                >> 2U))))))) 
                                          & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                      & ((0U != (0x3000U 
                                                 & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                         | (0U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000aU)))))))) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                   << 1U)) | (1U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
                                         | (1U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000dU)))) 
                                        | ((((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                               >> 0x0000000bU) 
                                              | (1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                     >> 9U)))) 
                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2)) 
                                            | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                 >> 7U) 
                                                | ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 5U))) 
                                                   | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 3U) 
                                                       | (1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                              >> 1U)))) 
                                                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                               & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7)))) 
                                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)) 
                                       & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4412__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4412__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4412__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4412__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4412__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4412__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4403__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4403__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4403__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4403__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4404__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4404__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4404__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4404__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4426__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4421__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4421__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4421__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4421__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4469__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4469__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4470__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4469__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4470__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4469__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4470__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4470__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4470__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4469__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4470__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4469__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x0000001eU))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4413__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4413__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4413__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4413__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4413__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4413__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4465__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4425__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4425__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4425__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4425__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4423__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4423__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4423__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4423__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4423__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4414__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4414__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4414__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4414__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4414__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4410__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4410__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4410__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4410__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4410__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4466__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4466__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4466__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4466__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4466__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4467__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4467__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4467__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4467__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4424__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4424__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4424__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4424__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4415__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4415__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4415__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4415__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4411__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4411__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4411__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4411__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4456__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4422__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4420__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4418__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4418__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4418__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4418__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4418__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4418__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1)) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4434__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4405__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4436__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4429__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4457__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4457__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4457__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4457__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4457__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4457__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                               >> 0x0000001eU)) << 1U) 
                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4455__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4435__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4406__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4437__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4430__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4419__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4419__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4419__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4419__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4419__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4419__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4458__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4459__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4461__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4462__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4438__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4431__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                               >> 0x0000001eU)) << 1U) 
                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4454__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4460__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4463__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4432__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4464__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_63__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_63__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4474__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4474__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4474__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4474__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4475__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4475__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4475__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4475__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4478__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4478__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4478__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4478__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4482__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4482__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4482__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4482__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4486__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4486__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4486__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4486__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4489__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4489__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4489__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4489__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4489__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4489__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4490__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4490__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4490__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4490__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4490__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4490__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4492__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4492__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4492__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4492__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4495__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4495__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4495__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4495__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4528__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4528__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4528__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4528__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4528__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4528__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4540__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4540__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4540__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4540__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4540__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4540__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4541__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4541__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4541__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4541__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4541__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4541__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_63_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4542__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_63_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4543__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                           >> 0x0000001eU))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3257 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4473__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4479__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4479__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4479__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4479__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4479__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4480__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4480__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4480__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4480__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4480__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg2 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
           >> 0x0000001aU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4539__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[7U] 
                                                                 >> 0x00000010U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x0000003fU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x0000003fU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4487__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4487__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4487__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4487__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4487__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4488__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4488__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4488__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4488__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__VdfgRegularize_h6e95ff9d_0_4902) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4478__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                         >> 0x0000001eU)) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                                             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                                                  ? 2U
                                                  : 1U) 
                                                >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4478__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4478__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4478__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__VdfgRegularize_h6e95ff9d_0_4901) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4498__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                    >> 0x00000022U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                       >> 0x00000010U)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000022U)) | (0U == 
                                              (0x0003ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                          >> 0x00000010U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                      >> 0x0000001eU))) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4499__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4504__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (4U & ((~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
                                                & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3)) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                                        << 2U)))) | 
           ((2U & ((~ ((~ (IData)(((0U == (0x00018000U 
                                           & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                                   & ((~ ((~ (IData)(
                                                     ((0U 
                                                       == 
                                                       (0x00c0U 
                                                        & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                      & ((0U 
                                                          != 
                                                          (0x0030U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                         | (0U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                                >> 2U))))))) 
                                          & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                      & ((0U != (0x3000U 
                                                 & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                         | (0U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000aU)))))))) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                   << 1U)) | (1U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
                                         | (1U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000dU)))) 
                                        | ((((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                               >> 0x0000000bU) 
                                              | (1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                     >> 9U)))) 
                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2)) 
                                            | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                 >> 7U) 
                                                | ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 5U))) 
                                                   | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 3U) 
                                                       | (1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                              >> 1U)))) 
                                                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                               & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7)))) 
                                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)) 
                                       & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4483__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4483__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4483__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4483__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4483__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4483__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4474__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4474__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4474__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4474__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4475__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4475__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4475__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4475__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4497__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4492__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4492__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4492__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4492__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4540__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4540__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4541__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4540__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4541__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4540__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4541__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4541__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4541__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4540__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4541__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4540__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x0000001eU))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4484__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4484__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4484__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4484__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4484__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4484__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4536__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                     >> 0x0000001eU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4496__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4496__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4496__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4496__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4494__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4494__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4494__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4494__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4494__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4485__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4485__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4485__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4485__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4485__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4481__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4481__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4481__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4481__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4481__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4537__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4537__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4537__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4537__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4537__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4538__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4538__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4538__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4538__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4495__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4495__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4495__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4495__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4486__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4486__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4486__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4486__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4482__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4482__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4482__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4482__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4527__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4493__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4491__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4489__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4489__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4489__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4489__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4489__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4489__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1)) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4505__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4476__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4507__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4500__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4528__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4528__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4528__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4528__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4528__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4528__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                               >> 0x0000001eU)) << 1U) 
                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4526__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4506__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4477__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4508__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4501__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4490__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4490__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4490__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4490__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4490__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4490__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4529__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4530__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4532__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__sel 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
           >> 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4533__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4509__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__sel 
        = (2U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                  >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4502__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                               >> 0x0000001eU)) << 1U) 
                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_60.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4525__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4531__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4534__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4503__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4535__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDMA_CVT_cell___ctor_var_reset(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->chn_data_in_rsc_z = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3778744464747032861ull);
    vlSelf->chn_data_in_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6411156219638407287ull);
    vlSelf->chn_data_in_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12610757762809989475ull);
    vlSelf->chn_alu_in_rsc_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8802923548947701392ull);
    vlSelf->chn_alu_in_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11495228411613325999ull);
    vlSelf->chn_alu_in_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14423485125770397652ull);
    vlSelf->cfg_mul_in_rsc_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7222867562811567290ull);
    vlSelf->cfg_in_precision = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18435605174514179765ull);
    vlSelf->cfg_out_precision = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9448096109860261123ull);
    vlSelf->cfg_truncate = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18252016311599703412ull);
    vlSelf->chn_data_out_rsc_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2105024845041982187ull);
    vlSelf->chn_data_out_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8836941278150431517ull);
    vlSelf->__PVT__chn_data_out_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9527688675389731580ull);
    vlSelf->__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8480294200899764746ull);
    vlSelf->__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8550095718453778785ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14852672247215641962ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8502217265213087581ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13056047330668838265ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11863534963309158849ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11110779863158556010ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8433946968944946288ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7309629155007256813ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8342834969933237678ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5251649995973599569ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16756205697428424593ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 9655245252621660756ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13748342582629940774ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14114422351276200726ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14869309867154171460ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14956869700355445055ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9535784710219112138ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3893015371786608585ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10807888261101284411ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14184393683008067352ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9467186894184711765ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6922256838412792234ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13363256633542390172ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15160425180817670338ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7691661761302011133ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4773860134638481033ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12068436403141062835ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16186426959286094773ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4302429827099630692ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9492107818467268220ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6956917757329198251ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2986837112970031639ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11338097066163420686ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6805525931522781559ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11887588045930194505ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10875498673226986695ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8872679429933560098ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4613505578977400556ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6200462626111594478ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5588810759852422657ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9501386511234764689ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15347745069349718745ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4617021567060277812ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2565037597422362822ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5531840342335175679ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6606827582662638021ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2742169765866714489ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1885980196032294469ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17876879245372804ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12628693740761739969ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14301454440594189474ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16169135655667411007ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5954796216512584348ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15437195867449053367ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10664308792698252527ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2916259790169685780ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18143147308271224836ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4328190082485485490ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12882322184692756496ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4548779173692592111ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14023179494539457642ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13148240654898608853ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16513029642389249812ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17119580513523492009ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16760207866540790546ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12493799569025850533ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4867903238773416201ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16749753016193352060ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9206691586690696450ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17366117241823923089ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6837139213775203871ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12663634895776667935ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11446707439554769917ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6764432644362978455ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15161352309880672952ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1511001842484174260ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15696300262678637674ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11169919680127603183ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11264619440581925037ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16678086673269563415ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2408580813798740866ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16399336336428185743ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17949728174348816782ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 194998237822291261ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 442945512061724363ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8395294972777163001ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1177686963202046277ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2460992627502728723ull);
    VL_SCOPED_RAND_RESET_W(97, vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva, __VscopeHash, 16007387366930861358ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18179291999120811907ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6269678185815042225ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6461812511584846810ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4947469140604990225ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15805292323344613016ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16861140775101124486ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9298382529776565323ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1810320292914339341ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10286505328569757759ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18325827826343152145ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9307472656233319768ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14487326742102791239ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5266468554897735263ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10134475487306378071ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17135153634569616901ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 296518865484415135ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16603764606143718783ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4001197104840963222ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14812355286666332609ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11471587551770684673ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5132824887904266866ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7529387134400060088ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6767753796336528723ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2546872580948280724ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 781734570731934355ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17098418211749636723ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1055469744880464498ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9629337059517851356ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5568290797964610808ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15549809785247275398ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15192394159253226990ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17193397672820730491ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 1682186796171568731ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16950752943820310366ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 169410429736005514ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17610266557591447603ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8698803083390005969ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1784175381149319284ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7171829962873656341ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7890117515248076721ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7717652680087713281ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16086635058476392399ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12914451946450278978ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15301803685165507740ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9426036891007682334ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4773962988269187232ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9985930922381516232ull);
    VL_SCOPED_RAND_RESET_W(97, vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a, __VscopeHash, 4390063271308786072ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4155401244389441483ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13676904536983691902ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 659200632627332195ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4491684244717290030ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1769969506574656515ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4487477720438445625ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1962560661421473577ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 189452213132606408ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17566321796472117860ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13212098340786989681ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16101599498693711268ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10730674361427064538ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9124436605616362845ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7503436560050115092ull);
    vlSelf->NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8800902955417436239ull);
    vlSelf->NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17012278784244623044ull);
    vlSelf->NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14399966394192251296ull);
    vlSelf->NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1649200509164149033ull);
    vlSelf->NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15556554526672716148ull);
    vlSelf->NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9457595849821361431ull);
    vlSelf->NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16188040318056430107ull);
    VL_SCOPED_RAND_RESET_W(98, vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshl_u_1__Vstatic__result, __VscopeHash, 17211321774554358872ull);
    VL_SCOPED_RAND_RESET_W(98, vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshl_u_1__Vstatic__result_t, __VscopeHash, 10308591088379908045ull);
    VL_SCOPED_RAND_RESET_W(97, vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result, __VscopeHash, 14953753188111528660ull);
    VL_SCOPED_RAND_RESET_W(97, vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, __VscopeHash, 13865630639357388201ull);
    VL_SCOPED_RAND_RESET_W(98, vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshl_s__Vstatic__sbit_arg1, __VscopeHash, 13338451017214711948ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9476424474058672870ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15509009432642820277ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 17845441776238595327ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16133666967917196041ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10719308607113852071ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 13267721470026740559ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12934183193835601540ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6858264323210792931ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5411528020486923418ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2618752968059881531ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3882684218301234915ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11530063973572094757ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8595995489150701881ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15217206014191478290ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15300707942249904800ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11537714711516152710ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13066329715037680528ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10680164608385148826ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6451260957737758364ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7727667535248723525ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14929188893172664160ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15918201196456170144ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1383956215098771612ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 318145363832029949ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9569505242255473724ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10083901769964240486ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14192108734257341196ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13979804380108003170ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4678923510915421918ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9895400215272336860ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16853380717816114638ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17482929944894264224ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3288500656531654471ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 299920558635488109ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13521343226856884886ull);
    vlSelf->__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9043558705301731998ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__6__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8031825168971252190ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__6__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12893942122694629547ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__7__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8228750736826250361ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__7__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15796268701578995029ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__8__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15425553143076863416ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__8__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14867875327356169031ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__10__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17667419222007591513ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__10__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2301306394587072532ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__10__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14481325943780846555ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__11__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6218356278814672052ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__11__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10565766765669671334ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__11__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9684546812952870208ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__12__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14088965676044298418ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__12__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11332410798257668942ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__14__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 8497501846253759535ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__14__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8662255219498079696ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__15__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9556299636977798503ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__15__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6920692961363804081ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__21__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14986735301157636575ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__21__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5161687028932801478ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__23__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17165269344873107073ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__23__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3135301427706077113ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__64__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10480235595355706111ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__64__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13358988953900450395ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__65__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8646726104144635322ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__65__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7284871861516509437ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__77__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 17643675527325952147ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__77__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 785930183750524426ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__78__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 672533336689658479ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__78__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5943356625593328645ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__79__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3129368469656480959ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__79__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14894597319720426677ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__81__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15829494569979517724ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__81__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16705077334316127544ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__81__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15009615378476821774ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__82__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 8319735871910963621ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__82__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10366768371439949499ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__82__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18004320863234770329ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__83__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16614311758937080292ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__83__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17558898734476827688ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__85__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 4137604622931202213ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__85__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11695616081207090747ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__86__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 10962561079369411936ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__86__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12636348854726948692ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__92__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8288436201348413602ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__92__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16926084267585240558ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__94__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14096471943624068266ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__94__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3091223230377481707ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__135__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8684217556790328828ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__135__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12109121177445498391ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__136__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12741852797282309753ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__136__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2130383044913361208ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__148__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 7757043413987078757ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__148__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9983098931084799367ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__149__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16306707676845309873ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__149__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11066187120572245014ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__150__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9374109962505261940ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__150__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10906950693160988238ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__152__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3819244034590169197ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__152__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10389051603198631680ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__152__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8144465631177828258ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__153__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13570561062274999518ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__153__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15999617411732166722ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__153__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7525341479377115444ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__154__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12019199182334430509ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__154__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 702029953580687762ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__156__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 803492646141195905ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__156__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14655977116436421753ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__157__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 5263081576310781936ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__157__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14410136080758494047ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__163__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9402342887812906327ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__163__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9237062141638562718ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__165__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2732999181864707559ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__165__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8617515468444585910ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__206__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12244205293866023997ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__206__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10291363743120678414ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__207__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10719669715330892228ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__207__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7820386536855226391ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__219__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 857963786995266791ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__219__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3387739597917390736ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__220__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9748691955457835189ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__220__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10792010141562128339ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__221__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8401458195092131976ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__221__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4637136375606770560ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__223__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9946906629783517203ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__223__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 724488593427858453ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__223__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6875459491801388685ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__224__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17284235436747738291ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__224__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7052490910614988206ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__224__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4480134941661473201ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__225__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 75076362910012648ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__225__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7142061217231335446ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__227__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 3601886882390003643ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__227__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13772488739988950921ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__228__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 8268325001751781798ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__228__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13690193331182975552ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__234__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6791339674305869647ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__234__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2658874284792363840ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__236__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7404580987959409970ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__236__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13997222746934545619ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__277__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2606697128728063685ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__277__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9321815171098292485ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__278__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4174460463884657730ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__278__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15968302122701393235ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__290__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 829685453216131329ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__290__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10262112064146743824ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__291__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4927967086962571265ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__291__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15770354203804835771ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__292__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8245643774655860728ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__292__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6122613836838517441ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__294__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 11748341455511100158ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__294__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6787242088377147435ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__294__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16673253898386747671ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__295__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 521233245187144053ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__295__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6269515167053619990ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__295__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12127765816883237168ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__296__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16733876855968007207ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__296__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4741334469639413955ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__298__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 16865216116789688048ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__298__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13103170392609176988ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__299__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 14376986654287163899ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__299__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2483828257756008338ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__305__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5833878398951136851ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__305__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11645976740405467968ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__307__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6925287374907616709ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__307__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1394296438919641636ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__348__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12979537380666978920ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__348__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6390247202804249082ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__349__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15325641895226316656ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__349__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17987153320995717752ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__361__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6532113317117278203ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__361__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13880026835318443999ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__362__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12130970793185961680ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__362__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18196125065644943367ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__363__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10483200435077721100ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__363__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 227743611277400858ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__365__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14645875273887503553ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__365__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14566138711828044715ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__365__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 715623432925527386ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__366__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 8725892785938681706ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__366__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14981025614513682933ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__366__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17296472152029935550ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__367__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6621594346791976771ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__367__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13437710038780513467ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__369__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 7229978259027296229ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__369__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7587045868272104720ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__370__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 15227817074757038144ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__370__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14989565400708773727ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__376__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13188137850117024430ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__376__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2796732171371649787ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__378__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 654887169688464240ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__378__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12479241670237629226ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__419__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2448358066001381009ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__419__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11868314090011325480ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__420__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 176114474860405604ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__420__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17302254381750270448ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__432__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16717545382206953258ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__432__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3132888080465955445ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__433__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1245975772617239422ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__433__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13381738103810632323ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__434__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1194440151491857109ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__434__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7250180540276891782ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__436__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13214722005270314390ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__436__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10565949638475779966ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__436__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13183093092919715308ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__437__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13924122710774777927ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__437__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10347839208580878033ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__437__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4062301221179112763ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__438__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13375356318847955630ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__438__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8434263751033837852ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__440__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 8823713458897003003ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__440__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5894251213900602517ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__441__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 3175989454846935692ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__441__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2863310216060542260ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__447__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13329331436753668447ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__447__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13346058454115723276ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__449__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9261479898901362607ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__449__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13983860929992827408ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__490__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1685173096834924736ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__490__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2146648896710244089ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__491__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7255063295910646983ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__491__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17945263115261083454ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__503__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3276571550194731596ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__503__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14302964107862238202ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__504__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10899785191978482068ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__504__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13887495909235984601ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__505__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16571058887611262220ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__505__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 112606359048933657ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__507__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2005372236318063912ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__507__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15373363066121065216ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__507__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2586048464895886829ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__508__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16751587911464516993ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__508__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4935984441536797945ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__508__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12333870737359212720ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__509__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4952805029878524467ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__509__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12310078192207359482ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__511__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 3645804884279072894ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__511__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13249389792982097504ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__512__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 16941314751037257343ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__512__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6932403747610646378ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__518__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10570434298998241444ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__518__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16419188510312783771ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__520__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11925741970533086175ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__520__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10685449620057121725ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__561__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15423213646529285325ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__561__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15473078231522172862ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__562__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7287803982344269931ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__562__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3102378907612658419ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__574__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5253999688005430590ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__574__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15220022900702357611ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__575__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15421708103204714151ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__575__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9262517651339948314ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__576__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5619595074835098865ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__576__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1329672356607354151ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__578__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 18090043218794966505ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__578__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4721285081048018318ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__578__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1708956674807655538ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__579__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6648605799430988679ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__579__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16082101378034171191ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__579__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4731430764871173945ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__580__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2906558859954028526ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__580__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8809101153877560823ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__582__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 16483692289617305326ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__582__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17630329266837022276ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__583__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 8400847410796996883ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__583__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10513413123988547006ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__589__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9637075472686019830ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__589__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9410884787189764576ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__591__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6774593987529973137ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__591__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2132803560539221689ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__632__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7140490924448026970ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__632__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10268432202938578989ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__633__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15582512336400509915ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__633__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18146919984916474101ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__645__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 14529451459217717948ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__645__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13397762367103169024ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__646__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 14908329216946044400ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__646__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2439043095808333711ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__647__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6204174051048592715ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__647__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3933250723787985342ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__649__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3680223073115059138ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__649__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6734056284670493770ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__649__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2347125490036276187ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__650__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15895136635190443093ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__650__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16948104134825283830ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__650__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8834296629813842535ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__651__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12277911212843930682ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__651__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1976372205575695626ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__653__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 15776871445021352417ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__653__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13346993825789482375ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__654__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 10167995632086126891ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__654__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17123749705446153452ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__660__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1934052476623804482ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__660__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15255734688294866892ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__662__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8946466461005278630ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__662__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2223737967485040269ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__703__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3747674739578527305ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__703__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12301468375249390405ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__704__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13457935174153596279ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__704__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12369431451475135741ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__716__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9424230396452186768ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__716__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2376936380976296088ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__717__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4022786250129034014ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__717__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15929858215040014718ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__718__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16348441346814523732ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__718__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14910364146360452329ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__720__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7451884941947917997ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__720__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16145521874701895100ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__720__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8157410102669325181ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__721__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13257325834183415673ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__721__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17380186171431239159ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__721__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17203508393044048327ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__722__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1819344796663331554ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__722__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4020767486377834645ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__724__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 12391209687382756056ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__724__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9862510355133469902ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__725__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 18238660376582618405ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__725__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5610451417328205520ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__731__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15606663332425298637ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__731__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4141042982060160402ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__733__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 403184095855539330ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__733__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8806308730057474961ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__774__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7719824972391561925ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__774__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7304853046047218157ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__775__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8282809488973684759ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__775__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11002069762981277451ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__787__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15012195763014211858ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__787__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1380933105534274166ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__788__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6432079485969047003ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__788__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6944403317674304143ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__789__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 827757885103548593ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__789__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2818687134135111603ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__791__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 8956740238566039189ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__791__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2158624179890077822ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__791__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14827973299026339775ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__792__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5830065135455710678ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__792__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 8658238431572718049ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__792__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17061994172571199247ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__793__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13684350861856933137ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__793__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10356707698306000527ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__795__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 6161626981417680592ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__795__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6104120606106798507ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__796__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 1202210331617170130ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__796__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4437196811634047902ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__802__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8610220584324558440ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__802__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11650422544665652352ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__804__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5107719447033812339ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__804__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 213742882470731018ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__845__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11123195117069505627ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__845__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6987609949901803544ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__846__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6930247415933057293ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__846__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15643590479696564245ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__858__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 7591818097688530991ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__858__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13507345486772544626ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__859__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 13784506484488064903ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__859__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13134776659145286249ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__860__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12488725597628583056ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__860__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17693243492373389587ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__862__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15137011651371503246ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__862__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2966165654230701957ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__862__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14403331656596555157ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__863__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17043661008150342528ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__863__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17590462825537255501ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__863__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16585078025332624865ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__864__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6717457361802718013ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__864__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4015179614278351973ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__866__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 7177790759476403953ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__866__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14013057201118361498ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__867__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 15520411707800706251ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__867__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17352933110793217822ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__873__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9466528627307737529ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__873__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7323354624778367556ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__875__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11576231963945674657ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__875__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5912174685623503856ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__916__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14976783936513013612ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__916__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15085497486753578622ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__917__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 710156689717474935ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__917__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17977869856878910712ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__929__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3305918937395866468ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__929__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17169460238277966629ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__930__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10147569025354278647ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__930__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1359548623985441108ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__931__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5989880957407959191ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__931__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4778104851644860868ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__933__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 651261560229638622ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__933__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12876657451889385733ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__933__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 419115169408665482ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__934__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14824190978277310475ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__934__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10503828918858400417ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__934__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10743578603195206198ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__935__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14144264295650221057ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__935__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13978436985406929249ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__937__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 16581782267329655811ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__937__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18080667947756961604ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__938__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 5062034799904652175ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__938__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11262014172301940487ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__944__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2770339074966963089ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__944__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7378012214258212308ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__946__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8260504529857840759ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__946__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3270103677933914518ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__987__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11178624013048607236ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__987__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11101616423337642885ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__988__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1144844179105730321ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__988__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6460033597144204547ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1000__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6573325449952132979ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1000__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7638210422522127504ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1001__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 7599188650643162583ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1001__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16125652860702558004ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1002__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6094198703880134304ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1002__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9570533219370744379ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1004__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 8427744638571531413ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1004__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17088335307614663714ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1004__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15331693634854094770ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1005__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 8088783318775812374ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1005__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2932704327980764478ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1005__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2901570290812567577ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1006__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14492809720507522707ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1006__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15755436787668797433ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1008__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9068835166928204359ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1008__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4700842539713866133ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1009__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 1722535360525464118ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1009__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11172015940287557578ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1015__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6237288515914433379ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1015__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11284079649911787726ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1017__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13152401546526956583ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1017__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11673103216709883307ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1058__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14903514600968384366ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1058__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16831987009141498481ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1059__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3740807988185042348ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1059__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2087393584253104996ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1071__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2662439066810315558ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1071__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1271865831311015286ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1072__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3008181715828512693ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1072__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14414744754052065762ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1073__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15725272498512368814ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1073__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11518356306809973882ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1075__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16372177619105222686ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1075__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5139098835373129792ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1075__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16283804923810403645ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1076__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 11154664841930758033ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1076__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2018922258628244991ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1076__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6467429546679796119ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1077__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3919277477755228256ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1077__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15863876582456773949ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1079__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9934316266490142759ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1079__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16021199616819309888ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1080__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 12460648788487893828ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1080__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6983463378330119171ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1086__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7299374865703549105ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1086__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 422338277232375538ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1088__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17565705215422688458ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1088__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9784895182072572617ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1129__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17464662938338297472ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1129__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3616042202560183695ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1130__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9477678892632084698ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1130__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10365547817072279706ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1142__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 14502183735052642783ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1142__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3725933604677577746ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1143__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10517037773422445964ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1143__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 830268843932668861ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1144__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2435621546053149515ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1144__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 807521126023420427ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1146__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 36118127719569726ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1146__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16792433250298126869ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1146__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18148729024729285176ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1147__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5221598918514822716ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1147__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12564772867559060922ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1147__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5441205253976325244ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1148__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3428688219672725776ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1148__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14988271597715637151ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1150__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9942028405083287841ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1150__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2904214307110716351ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1151__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 8046139535274553150ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1151__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10563140658058400231ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1157__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15485972836848816278ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1157__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5524932689947498980ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1159__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9057941174940126035ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1159__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2669761617418431518ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1200__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3066736658866900941ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1200__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6640415745697934007ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1201__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4208743234531081117ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1201__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15355729546101030173ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1213__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12026471374228157912ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1213__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9419806811985775165ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1214__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11184254204265519652ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1214__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13468227474911767367ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1215__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5335096743910880308ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1215__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16332348000058842484ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1217__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13919974534451560427ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1217__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1467782728887848304ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1217__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13962201650246837782ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1218__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14423104287012867073ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1218__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12152161115959769966ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1218__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15937633402789741740ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1219__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1477752238624192015ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1219__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7368424872125868420ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1221__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 8740584387904073314ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1221__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7420565530403334811ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1222__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 396107457590305168ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1222__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11282050423690241193ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1228__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10270923091918802706ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1228__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13059354454159408469ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1230__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12922685006234826126ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1230__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8541744822730551875ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1271__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1006444910834987482ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1271__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8017364316669662906ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1272__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15261634339917315617ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1272__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12516060580974159342ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1284__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 18087345036232204295ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1284__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5951693938998592877ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1285__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8218899874900603479ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1285__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 291972265742111613ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1286__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13817492886176551644ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1286__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15893227337140183371ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1288__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3554804072062641380ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1288__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15017353800295263128ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1288__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2391224505744550405ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1289__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15459299881472005404ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1289__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 11694526793500669909ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1289__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16369607798722028414ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1290__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18219986410887111758ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1290__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 963822970242105178ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1292__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9709711043139150098ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1292__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11328705109368079168ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1293__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 16629816130427398593ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1293__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7763232820658253667ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1299__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18258047664793455568ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1299__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9557381951514974701ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1301__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5847102615951241910ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1301__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4053206428830984215ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1342__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17472363122203899566ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1342__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11090851796681870110ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1343__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2538473573118219128ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1343__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5061817495459249786ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1355__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1371708542134549456ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1355__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15878997474017826887ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1356__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10713486366655763499ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1356__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14838888185295130626ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1357__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12675272190090757281ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1357__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9525163388678695772ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1359__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2997852433423442612ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1359__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6122804169434471943ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1359__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9161221586458741064ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1360__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12498707530808726210ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1360__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5586091178364668104ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1360__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7239974422767217517ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1361__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15171161786255296257ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1361__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5722292173412647524ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1363__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 7876113590857041375ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1363__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 32727545574914906ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1364__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 7992721996720533907ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1364__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18376265345647165765ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1370__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18045209856060418565ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1370__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4562240810984650325ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1372__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9256514292654054660ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1372__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16360315211988554525ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1413__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2776064087445498202ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1413__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 615534419481196497ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1414__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7937386903828454206ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1414__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17735223922180194150ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1426__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6083314486717603771ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1426__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15734154547631999469ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1427__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15822716903770713474ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1427__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12821573867661122288ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1428__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7196461370223659794ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1428__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12782427561915954704ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1430__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13327017768078426355ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1430__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15321889731319041150ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1430__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2020451136145602441ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1431__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14303484072101804763ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1431__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14099799076601054051ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1431__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8242773620537139339ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1432__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8604042159857259280ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1432__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13950202655393731536ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1434__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 15470977785030350634ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1434__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 26834165674726656ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1435__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 4840986994756080911ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1435__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3109700813360091051ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1441__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17362300658493063418ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1441__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11246942814642423654ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1443__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6019804984063316947ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1443__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16327137026315166620ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1484__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8788378448731219476ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1484__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3141247711665585214ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1485__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9517923426518911382ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1485__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16158685432643035401ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1497__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16190100041032310996ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1497__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6283624065112719093ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1498__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11780197737761664981ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1498__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8789474805971329481ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1499__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13342738308488996700ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1499__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5753209862396015124ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1501__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9384698194071402660ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1501__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 8683492875754818621ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1501__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10338530603020411868ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1502__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1177526444010886767ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1502__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6857251693629134525ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1502__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6422986515637869948ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1503__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1355985361435365961ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1503__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17068564138252164527ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1505__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 14756885787494823897ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1505__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6723977278378740ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1506__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 5401036227713022840ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1506__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2170421643539702291ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1512__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16385582965095287000ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1512__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4577732470653062953ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1514__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2300689506464009655ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1514__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17023255900769244755ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1555__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4095749273603311476ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1555__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13686189223983456054ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1556__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3387728533555693498ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1556__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1374237803082270091ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1568__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10822834555604899857ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1568__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1170244227993809051ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1569__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3129575520203606861ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1569__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17404811820999924308ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1570__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4562532409079000985ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1570__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10224311414041867511ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1572__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7103345082406569655ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1572__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1413011232078076600ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1572__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11595542544756251199ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1573__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4631303247413808336ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1573__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 18070338654430020719ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1573__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1211350360355953129ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1574__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11970629412868266348ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1574__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3524048160943330041ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1576__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 12913662439093902085ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1576__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7049496021046450225ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1577__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9066298687176959641ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1577__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7671684567489011180ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1583__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6204430702776774967ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1583__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15309369002400517904ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1585__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6365660701470636429ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1585__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9263768670190607765ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1626__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4298025144428457402ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1626__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12015208234462111124ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1627__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7358904212401007027ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1627__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12687650395348733495ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1639__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6220673134317213036ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1639__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2584400908824364651ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1640__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3497067651225809520ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1640__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 753291228972967444ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1641__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6276764772648529661ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1641__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4671824797004054878ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1643__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7416387702510025028ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1643__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17083080255808127568ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1643__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13451486282807834358ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1644__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10999333889337798902ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1644__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13059305673711708258ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1644__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4179035248112659863ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1645__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3638182872081663411ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1645__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9963724997783871117ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1647__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 4067807778341216122ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1647__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14719776300284853058ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1648__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 8044111319842625904ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1648__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12861233199695765917ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1654__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15712003591214035093ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1654__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1801147993851428709ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1656__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13204028545459286203ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1656__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10762565299160995395ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1697__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13010935819414485612ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1697__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2961436924462292394ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1698__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8020635848150022177ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1698__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7902942259914389287ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1710__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15583470698757394578ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1710__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2001940893868959104ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1711__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 7373711324160484859ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1711__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3128131717673060984ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1712__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16083628266290286076ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1712__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4058985756341204005ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1714__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 18138888725819386971ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1714__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2164436520517638401ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1714__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11793419153706954458ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1715__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13620891158067661366ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1715__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13172732754555896938ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1715__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 977894940216630328ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1716__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 175021895622585138ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1716__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2946032775265364408ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1718__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 13799105380555726541ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1718__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7062796392774694527ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1719__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 6429380497168972248ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1719__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10162223359633802363ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1725__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4826542467805041496ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1725__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5921688670942183240ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1727__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6934843442092909901ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1727__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6706446665877498132ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1768__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10943523767204838052ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1768__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4652280571901448711ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1769__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13920256356656179911ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1769__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1045822572795343063ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1781__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 18354659084375026879ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1781__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15962599608272920117ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1782__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15127882117352511897ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1782__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7830353005727019236ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1783__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11536538278119952939ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1783__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7596189900453615670ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1785__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5388266683648569148ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1785__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1672227922989195372ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1785__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8620354919929445727ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1786__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15466801658188327625ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1786__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1924043202372191184ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1786__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18132237355959942571ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1787__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3116867977876704715ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1787__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9797500098460494383ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1789__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 15708261276909824463ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1789__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6197322693709149754ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1790__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 13707254761925867430ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1790__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17090870494023229611ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1796__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16112555934317425614ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1796__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2314162019198394532ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1798__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8489295853388930688ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1798__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16282355004372994741ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1839__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 933668405746495426ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1839__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9850682478141860795ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1840__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 832946597629513861ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1840__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2814937627359910897ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1852__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11479080484784733622ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1852__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2571033292769337541ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1853__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3402643850124638066ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1853__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13174136268859346718ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1854__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 687530993348378963ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1854__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14870474571667003622ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1856__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14498429200177572872ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1856__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 11760741603905480267ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1856__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6151138847026237617ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1857__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12712931288750826096ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1857__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17835060809741490593ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1857__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18420942440685180898ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1858__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2562233338045016650ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1858__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13539234396232217672ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1860__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 13765237985523089552ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1860__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3694294043674661895ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1861__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 14344022267921764075ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1861__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2479514073494367850ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1867__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2760815406683162154ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1867__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7083815282214420681ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1869__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1850085756772071184ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1869__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9125394370977624293ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1910__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15574329545833418930ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1910__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6486692658646560267ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1911__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12905825819654102606ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1911__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5087480003773027518ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1923__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9129759231331571980ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1923__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 18399731212561235271ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1924__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5220904999208304513ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1924__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1255666417579453427ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1925__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9191673106471373121ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1925__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4752176528271302336ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1927__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3329867429448673647ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1927__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17493304476860800461ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1927__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15745325666433341577ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1928__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17414143049269186112ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1928__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4719707773680422261ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1928__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14715266693300645757ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1929__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6399999961886941158ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1929__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11013785962465746659ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1931__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 632807840167009934ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1931__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12741195340356218022ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1932__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9382611098499302201ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1932__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14518556979044506840ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1938__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14990708243585715118ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1938__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8502962401142175265ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1940__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5545602144505575075ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1940__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1148555471710679289ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1981__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13074812933345465560ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1981__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14737905497562664846ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1982__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7335949991773089242ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1982__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14482203461009149602ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1994__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6811527576059364421ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1994__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12156383669747148860ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1995__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15070594770096155856ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1995__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9982820984080450082ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1996__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12591310144405623635ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1996__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5249106779802333065ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1998__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3283467170409936025ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1998__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17102983704601387294ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1998__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7996975617364553927ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1999__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15398960076552734550ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1999__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3762016725471932339ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1999__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9948136739762530209ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2000__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3539335127937468459ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2000__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1832062697407032715ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2002__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9585775399047923133ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2002__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4205056971866936225ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2003__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 829911374157580669ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2003__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1187029523431076209ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2009__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2972556871220087990ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2009__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3102704412686043407ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2011__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10970052198026341782ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2011__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5784367958194936828ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2052__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2260509180486503771ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2052__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2669645490009968924ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2053__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 963696629854873235ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2053__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8397431117833417001ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2065__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6867384743614575581ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2065__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4766724083050151695ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2066__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15943827822745952976ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2066__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14119078825670512664ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2067__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4713133620688015677ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2067__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2397265730783982687ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2069__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3011073230093674169ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2069__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4202613300809271713ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2069__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2081489446456694444ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2070__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14331943698805079676ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2070__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1964316851135201639ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2070__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10387870132191827979ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2071__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2226162863238265235ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2071__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5317149892014262583ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2073__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 4928859991262869914ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2073__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5944911711673534787ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2074__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 17239651013500792365ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2074__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16827760014863802223ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2080__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6707819807291662039ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2080__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4501425470507329867ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2082__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9241736638164759326ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2082__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16285808836239308570ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2123__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1685731844355590911ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2123__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4123083524682753841ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2124__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13660168330971944182ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2124__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8367027154804287053ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2136__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 250451999433590395ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2136__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7479380227129100191ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2137__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2334313392252210546ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2137__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7190024697897757537ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2138__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15070081182491471018ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2138__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12678012418600147709ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2140__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15654898293503751472ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2140__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7537024257644289093ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2140__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2154907942185857519ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2141__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2896752253346459179ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2141__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 18400814779425221489ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2141__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3813016630726165882ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2142__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16371253903062955195ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2142__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12785161720686601887ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2144__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 5314743504238825416ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2144__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5773641554750974791ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2145__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9515628541364920154ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2145__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6861758424782691503ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2151__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1084752180717586391ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2151__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2825130874539388093ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2153__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4868041767774164991ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2153__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7722114112551450258ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2194__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8603742217483837886ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2194__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2885963498151152249ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2195__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1755652191787268782ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2195__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2129886670908078863ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2207__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5224142630600919738ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2207__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16965482694990328638ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2208__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11118616984941913135ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2208__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8608504043235546114ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2209__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13767763397029349660ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2209__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11039082690593687233ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2211__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9198390430876352281ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2211__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 18137894705071867330ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2211__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 815756703067944392ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2212__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17589440857423727390ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2212__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 304224994383202591ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2212__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4058843383007445483ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2213__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14022954114513562389ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2213__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15347039465385271664ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2215__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 2964568054419912574ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2215__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3271920241388306977ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2216__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 4583062865195903985ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2216__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14461644912274095100ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2222__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12925310884810062955ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2222__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14865232255669404429ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2224__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16944969013810616355ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2224__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5763043883370820146ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2265__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1050631480728960605ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2265__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9046455954190350284ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2266__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14936446678047980502ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2266__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11329388969004515950ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2278__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4911888680580677364ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2278__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17695879706834504505ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2279__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4672006458682237886ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2279__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12671001926392814817ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2280__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5350934028462410277ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2280__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12049007838129527358ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2282__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13893389895183532287ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2282__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7689885432792109689ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2282__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15811563913710971043ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2283__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2527614585240290572ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2283__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14746134357239251596ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2283__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7929932378186509192ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2284__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3915381342341391928ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2284__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15806395193464861308ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2286__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 2307372174077625506ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2286__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14980409938952207788ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2287__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 16492351265587477861ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2287__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6400683441159506369ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2293__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16512816321047262763ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2293__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11722290382551291051ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2295__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11591337245713538474ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2295__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3124579185948342617ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2336__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1498505267678610624ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2336__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13977293554486378013ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2337__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10824069074291595734ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2337__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1174937604194150243ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2349__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10012927453370822274ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2349__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1219504041611440794ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2350__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12260498195729410692ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2350__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16891599457530002600ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2351__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5655687840432990955ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2351__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10484951963196636802ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2353__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1913459325138244232ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2353__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2777224698687272680ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2353__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8865618632780992262ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2354__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10915544734138172824ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2354__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2327747337510585218ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2354__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11423333864168941797ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2355__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6047375073939767984ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2355__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6437526095162896410ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2357__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 14825045567188401685ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2357__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10723790831608538107ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2358__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 14265782603395503570ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2358__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12314656168041594134ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2364__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15743084944283209483ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2364__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16350530768062119443ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2366__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16305478738712345208ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2366__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6842537725012496101ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2407__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15796598944428676309ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2407__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17816897038047973988ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2408__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7115837127101091209ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2408__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5795503445798171697ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2420__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5642172343401125692ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2420__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8423151051152369835ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2421__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 17371207806117463692ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2421__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7368222110378229748ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2422__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 171252018254272554ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2422__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2938188720103103826ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2424__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16899780197772347269ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2424__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6091371982148114531ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2424__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8029519938083517189ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2425__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17495776493400890514ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2425__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7509511584388338302ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2425__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7524152873617340528ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2426__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13187142045857541255ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2426__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 489644202354016810ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2428__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 15296426484366122292ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2428__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18135112855514140237ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2429__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 390811042846485756ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2429__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5516407047770406099ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2435__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13552945663520900654ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2435__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5651117142143962610ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2437__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8991695099691375886ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2437__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4087074532799302877ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2478__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6997577968151032333ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2478__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16929181755716877263ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2479__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13245367710387975639ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2479__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17934480352635384363ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2491__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5773795573459006759ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2491__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4074669782000430184ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2492__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5496608816077755235ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2492__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 441010532033403738ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2493__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13586949187982898821ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2493__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16603804801803659886ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2495__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 8627892975824988172ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2495__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3035068524625661106ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2495__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4997423794513436280ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2496__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6221515550343100688ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2496__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2187659425527484689ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2496__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12686771272172876632ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2497__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 592058325226233610ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2497__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12649717184458749255ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2499__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 7113909115292864167ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2499__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7300766888539511423ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2500__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 7768381706060692912ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2500__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 499774327055642197ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2506__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17620495061495134665ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2506__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9790956933277953912ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2508__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7353472234093529618ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2508__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13653079008804454737ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2549__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4524701762358994801ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2549__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1984210577911913197ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2550__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7706152928133031624ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2550__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15644955326797429498ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2562__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12740218026064432166ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2562__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8793126420715529469ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2563__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5574247696857732170ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2563__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16318558163379776178ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2564__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12050621168075174533ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2564__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11389367145214649546ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2566__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14292772482381153195ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2566__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15222782292916491951ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2566__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12344137472022404660ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2567__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13333408023944805810ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2567__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 322048595589186500ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2567__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5413668722300357044ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2568__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10068643785879753238ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2568__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7658298812018401199ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2570__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 12237622539374815031ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2570__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10450334769894346916ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2571__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 6975029205404543214ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2571__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15229268996214521570ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2577__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6847818193176663155ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2577__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7944212092338915616ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2579__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15587036992002428399ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2579__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3542330454592361687ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2620__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1178746165350592803ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2620__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2735795863199185668ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2621__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17545828634380805905ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2621__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6037525577879272367ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2633__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 972317299230187410ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2633__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9488513473231854790ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2634__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 7802704555185579214ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2634__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1491135386518214157ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2635__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13519594923563711923ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2635__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8003392315602835327ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2637__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3184625399608123263ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2637__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7640373323100947119ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2637__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4340634011078778357ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2638__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17985826160088216972ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2638__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4704444983227985760ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2638__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12030333017752856211ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2639__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17217622821243114292ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2639__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7628178967468641052ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2641__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 13427711255243401636ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2641__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12495321554338315540ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2642__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 7412354659487513531ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2642__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6811980894771084200ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2648__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18109361805194551103ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2648__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5568759889810010630ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2650__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10559136602654946220ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2650__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13999380889274967780ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2691__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17219565237595853390ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2691__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16354085144011101321ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2692__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4734547648649386308ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2692__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16240810766222973820ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2704__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9536810962003877744ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2704__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7150640967946473743ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2705__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1014501028748042374ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2705__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 666629917411869861ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2706__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13560711844695234635ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2706__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3872685326067305199ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2708__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 367851539622176698ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2708__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1385107538236976356ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2708__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7894411346886123872ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2709__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7240165771743667939ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2709__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 911340026006528137ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2709__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9075181103342429492ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2710__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1462114818512187282ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2710__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16363207002863015003ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2712__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 3050113622309798984ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2712__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4230720185202901007ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2713__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 6706267205822911797ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2713__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1447869026465481890ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2719__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5632130076885430004ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2719__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12626975171779261636ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2721__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1837296295129582408ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2721__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4720834263234399557ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2762__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3694026719343106411ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2762__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3570489331174933226ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2763__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9501737995757058326ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2763__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12525058824409306768ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2775__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5466099640765936645ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2775__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 245369087032759195ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2776__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 17540185591079393468ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2776__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9306339508212608454ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2777__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9329261524848216673ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2777__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12494194384733046221ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2779__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7366496519845803951ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2779__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3748053943245397889ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2779__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14364084776435485332ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2780__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12376033477639458725ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2780__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9769369653022120548ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2780__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6835689093834468700ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2781__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1829285272010147797ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2781__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 484037579560319524ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2783__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 199735164727007593ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2783__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12317037049305936469ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2784__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 12624029692253315990ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2784__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16867974517906934847ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2790__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9485940657014179748ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2790__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 133865730258077579ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2792__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14015616195280990543ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2792__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17573517935280698252ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2833__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13140501699630368330ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2833__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6399662033357206995ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2834__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10110262499868226985ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2834__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16215124407279402246ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2846__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16202833902755775069ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2846__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4020140300315354262ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2847__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8768486358622996953ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2847__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17632293226087443591ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2848__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13562728061300641657ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2848__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3910604091317326637ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2850__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2385782640582967953ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2850__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16288641003024843431ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2850__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12721646701365455723ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2851__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16508284849938450569ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2851__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12708460500713716590ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2851__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13889677475820033137ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2852__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12132365785091270332ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2852__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12228601022118528590ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2854__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 2053782036432463176ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2854__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2883549476657898020ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2855__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 10252237215573791397ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2855__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18277810157996884227ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2861__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8144070857892733174ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2861__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15292211536455350731ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2863__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11009426441126332911ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2863__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8636947087393499322ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2904__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18227788830689890766ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2904__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5116382018317977578ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2905__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12072475271896905232ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2905__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16308624216434316592ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2917__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5668130137802280534ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2917__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5437459878807144743ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2918__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10630040015697912160ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2918__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4385028223218965921ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2919__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11589416443966627700ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2919__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13339516507617694818ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2921__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15491968728714602286ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2921__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4690566954975713850ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2921__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16471485628195888825ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2922__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7066705033071509802ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2922__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10630805375149352458ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2922__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18066500579655842166ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2923__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14395371719068302414ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2923__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15418943998079130636ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2925__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 6051714176246840755ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2925__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 214854833656736513ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2926__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 94674995067574783ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2926__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14043202422401849070ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2932__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4024851526089113317ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2932__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10880191565668752210ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2934__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5226626514222952741ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2934__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8731175655323215023ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2975__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10550106923171300123ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2975__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8816409049200206947ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2976__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13751310254020499758ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2976__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9665847952963892128ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2988__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5458316014277227166ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2988__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6967371201686702108ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2989__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 7143521902825484263ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2989__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7750683229155463935ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2990__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15162608593832847350ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2990__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11882677306301190706ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2992__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2300208860633250202ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2992__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4087445749574032913ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2992__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1106927860616262765ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2993__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12637396813760495409ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2993__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 570509584441393877ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2993__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3029267878410566905ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2994__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4134749623822714323ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2994__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11431652301624659511ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2996__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 978276836459356994ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2996__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6690611852466067717ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2997__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 10286242543911402566ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2997__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18275353681746728817ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3003__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13726866888932649465ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3003__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4932197040452242319ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3005__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2327991878856088435ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3005__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11489066483762306449ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3046__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11441935032917009665ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3046__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7718256444961071315ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3047__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8924662298687577479ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3047__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3134153404090078604ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3059__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9515171013785891131ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3059__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3328422852278468450ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3060__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4231062717171361097ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3060__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13768177546523069421ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3061__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15456188811121418930ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3061__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4797450411171358111ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3063__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6948453230212354732ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3063__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2462536459074971301ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3063__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3596902116786901098ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3064__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6072284505520943355ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3064__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 11947133049787677084ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3064__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13185274735561349973ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3065__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9435180361096627578ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3065__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6846195338358602747ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3067__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 689883459798936111ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3067__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8836187519276812412ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3068__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 13785688549741042026ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3068__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15704475707443728788ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3074__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5193680233017078057ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3074__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16053309956510935789ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3076__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6077526029501013947ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3076__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6528198369661971738ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3117__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4341165036232668515ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3117__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17408375104727926981ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3118__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16766338405857773291ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3118__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17661033045908779117ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3130__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8237619452248268766ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3130__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14955928426169844284ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3131__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12079794479316644495ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3131__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11020152508549907954ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3132__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2147235411747133836ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3132__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8866226240851176288ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3134__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10334350315986507112ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3134__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15060194773396745089ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3134__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3069801997386008713ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3135__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16354224717102182542ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3135__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17633230926435532636ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3135__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1617881739436270666ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3136__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12756176562752930109ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3136__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3784242785091071554ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3138__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 13442859860627494697ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3138__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17016470272772600065ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3139__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 4233503083018673581ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3139__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11995215414928229782ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3145__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18015957350036973135ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3145__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9360792184884956733ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3147__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3803140801902517346ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3147__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4158417381944763963ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3188__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2360588078557080396ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3188__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14806662970999075349ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3189__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5994012189650509800ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3189__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7451168711863368182ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3201__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8342826561625937988ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3201__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 599245374832144538ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3202__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10216292361870395077ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3202__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13039495708532841421ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3203__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17068707079802583432ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3203__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2860693911369355480ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3205__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17220249312308341718ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3205__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12754400083161349163ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3205__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8817538974021230380ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3206__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7624585571421476914ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3206__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3182225809077333226ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3206__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8548553474108265395ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3207__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12258722626936276342ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3207__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14191950243849455243ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3209__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 16670406843667892448ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3209__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8216521972925577888ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3210__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 2619473215240246419ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3210__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16502795763101817781ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3216__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5687372427376504696ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3216__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5128397978422933358ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3218__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15048136837049571814ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3218__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8271436949555831557ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3259__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8140449997261764781ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3259__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17958611882211821291ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3260__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11520170849433687376ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3260__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17797599105873727874ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3272__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6072806617182532081ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3272__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4735066146909678098ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3273__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12736500638399796290ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3273__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12924781469105280718ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3274__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13065337635636912092ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3274__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15490060551779944565ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3276__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6004842903597386753ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3276__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16378277577786531518ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3276__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6662993814886838540ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3277__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1824654251887940289ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3277__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17761698813012295139ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3277__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13975804729785073192ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3278__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15410891052612258307ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3278__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10155435580938207447ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3280__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 961079201177011164ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3280__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3642237403002574580ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3281__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 11942372958938013307ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3281__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9158954750441417460ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3287__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9539604165706280625ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3287__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14581130602747314708ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3289__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4170466449277444472ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3289__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9856451602979261416ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3330__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8016960352228587073ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3330__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8160424612883255006ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3331__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10735776233480910145ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3331__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1204090351395222185ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3343__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4411763497864168058ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3343__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2699467651246255926ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3344__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2305225940026181862ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3344__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1978641272177959219ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3345__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17785218404996047534ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3345__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6400169785601397207ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3347__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15699370855956443085ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3347__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16906143627029413255ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3347__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4727681116899721806ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3348__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 868791334453990294ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3348__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12129154321264848985ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3348__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3156144138166972229ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3349__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13246632349494651490ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3349__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14922370212160944056ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3351__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 3029115942369605686ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3351__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10477501193405885373ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3352__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 5363391470939789255ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3352__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10051944733558873654ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3358__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6029974145747887832ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3358__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16588565357440841276ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3360__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5084486206639353951ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3360__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10210745006900046864ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3401__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7100471253489651900ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3401__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8647279864656266003ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3402__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3670079500298381652ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3402__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17893621898288524482ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3414__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2124486454233402944ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3414__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6001923133505718459ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3415__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 13825213348888253845ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3415__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12427223419551446942ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3416__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5604994517444379673ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3416__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12527561961912533212ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3418__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12608247882186079422ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3418__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7841963140768972289ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3418__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2767483033565448658ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3419__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2032521510130508437ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3419__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9458788015432444661ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3419__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4152250425809696555ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3420__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8688299403742463753ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3420__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2738204954788894078ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3422__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 17425879123736418927ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3422__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2977579799173046980ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3423__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 11625467682368647031ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3423__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9736837032437819918ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3429__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4016621965514163029ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3429__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6508627995120142761ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3431__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15897902711528382667ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3431__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 641497904181974337ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3472__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13898504298396129559ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3472__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15183449137369870849ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3473__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1213507938173303537ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3473__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11213893040605021438ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3485__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9480128894884318965ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3485__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7461382183706275200ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3486__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15074360279735538886ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3486__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16166698433699100658ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3487__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11923044433772128126ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3487__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1449137430709250318ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3489__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6793553719939213027ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3489__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6638607112734107653ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3489__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13673049746695984002ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3490__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3606414449487116267ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3490__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17853862064635815376ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3490__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6561333424783789553ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3491__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1376138971604667908ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3491__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15348897207258685435ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3493__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 11562343689759904368ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3493__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11867232827281310041ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3494__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 17102724285544898468ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3494__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2242199711619787059ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3500__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9651722785903256797ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3500__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11889150802818043438ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3502__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8259810309790337091ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3502__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13941174111561136615ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3543__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1981823841732334240ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3543__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17805915074850998751ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3544__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17033778043695155389ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3544__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6104950066566213583ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3556__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 13127620308576415435ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3556__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11085051966447019573ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3557__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15991364777523593829ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3557__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 27979466030938937ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3558__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14144230373053027762ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3558__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10027219667134387452ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3560__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3831406535185762688ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3560__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15097232775495519364ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3560__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5647533780753491918ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3561__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 11105503792456740433ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3561__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 11423747382360968994ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3561__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9207514433155728970ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3562__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2714434534397011810ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3562__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1995582047423069986ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3564__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 8471102213541405532ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3564__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5500159318677195758ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3565__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 16017043796577694302ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3565__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10218990144644606415ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3571__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8639108728664522580ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3571__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2509953250922927486ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3573__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2160680881788265465ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3573__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7485767250040048805ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3614__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1016718618369129827ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3614__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12372286103348226966ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3615__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 880795049770148096ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3615__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1582013130410232093ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3627__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 18130856040940423585ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3627__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14575866542884848801ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3628__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10363822935061817635ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3628__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11493904742962098778ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3629__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8177729662059211075ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3629__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9677806413267462428ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3631__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4945058496471576501ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3631__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16292767021995829823ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3631__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16945510116236447169ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3632__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4947854580361425883ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3632__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9590695149714841437ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3632__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2826069627590550241ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3633__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7911604460562806088ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3633__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15734868767747635758ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3635__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 11278836537355338159ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3635__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16273649862882791162ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3636__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 2857262671590803097ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3636__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17670468367703103703ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3642__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5406377179405206831ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3642__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1664966025218114879ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3644__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7429587115165903343ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3644__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12606282540627349223ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3685__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7562851227759808098ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3685__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10915709465981807098ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3686__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 206777713693630362ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3686__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4476399849786033570ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3698__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4420074263234082826ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3698__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11996522272278736790ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3699__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5187769163792658757ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3699__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5153200728417381983ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3700__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8014949565311347169ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3700__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5022959973178585038ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3702__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4613015244233170010ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3702__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4506350324628603358ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3702__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7026918717617185535ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3703__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10004052510153501928ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3703__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 11210350380381627484ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3703__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16140436022743623957ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3704__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15971995984084499335ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3704__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16084121112926716347ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3706__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 14324158263892094632ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3706__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14544574338850878110ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3707__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 15529540283074182591ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3707__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9972170366777096584ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3713__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4923439413855000140ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3713__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4220808584223292257ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3715__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4423954527812852553ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3715__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3094572543839960326ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3756__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15194819731500692272ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3756__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13318219600388027404ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3757__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14037418677494685515ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3757__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6383113760741661436ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3769__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 138084874869260906ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3769__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9608420616235149931ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3770__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1215202171757495602ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3770__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 104335176367708237ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3771__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5526511714300897890ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3771__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8744340721958176155ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3773__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7095150708345109095ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3773__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14333103807906603386ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3773__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2130209323580054949ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3774__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9062274514850143550ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3774__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16905911114459931045ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3774__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14882822733709362950ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3775__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7279549262997747799ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3775__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9216661216556943602ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3777__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 4541000318630295800ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3777__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17881267006768305849ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3778__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 3731527231722014216ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3778__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 35726263267020859ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3784__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3991335068559776809ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3784__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7743969450451505532ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3786__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16261072234914117464ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3786__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4700932705894346790ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3827__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6054684943272438021ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3827__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1184862403609906822ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3828__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6240409559025766278ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3828__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11707140473009712117ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3840__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 236516913434921193ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3840__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17488452921846077776ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3841__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 14707055245228283056ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3841__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2230809815764149401ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3842__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10851082514281111671ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3842__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12923363377682183107ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3844__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5358197984934547650ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3844__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4130831080021450939ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3844__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7941669218029146752ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3845__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 18439114302624177898ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3845__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4664770062632603243ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3845__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15846246524587729874ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3846__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1552074247883918145ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3846__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9569030264164647294ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3848__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 15600692258746948321ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3848__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15789387239541463040ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3849__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 712151856847032771ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3849__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1461926913814617921ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3855__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15958793413321119124ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3855__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16899674153369797386ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3857__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3515041285456486151ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3857__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1211720340984352655ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3898__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18288550948536412718ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3898__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11989969288464409631ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3899__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1881216383188846459ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3899__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9107887020995653404ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3911__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4883498860009777939ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3911__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2595119985433478793ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3912__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8011285729259106992ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3912__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2147435348831776621ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3913__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1625733957670311756ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3913__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1619562706117880590ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3915__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13083945331831876107ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3915__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16737712589193090521ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3915__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10506369842076365381ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3916__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15802362186469300238ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3916__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17551808343415939226ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3916__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3553257827526204236ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3917__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1452819194124433203ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3917__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10000025518429457734ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3919__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 18205575572439316333ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3919__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1823724054202792509ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3920__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 8457982763038033958ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3920__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6270292526883884568ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3926__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7929105047070888737ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3926__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7103675180970301647ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3928__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4660430181448555740ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3928__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16690292089242875305ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3969__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8499114663264423528ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3969__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6030515798223143893ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3970__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2493934904694724514ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3970__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6807164173901587967ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3982__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 14567351071515038478ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3982__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13672476878982392947ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3983__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3436300793155839621ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3983__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3468810917852234068ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3984__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1903781575963052980ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3984__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6335559290006537158ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3986__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6577436108613271326ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3986__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 18425439390613896557ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3986__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5632477317259136365ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3987__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13768844964250820540ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3987__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 913594140981345237ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3987__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1471892448352756725ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3988__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11183422288746191363ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3988__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6868272106070969110ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3990__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 2918189457297117549ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3990__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5803853003995418774ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3991__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 3401136693914325624ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3991__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11669586123124555218ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3997__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6526826467728348186ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3997__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6077036627660004296ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3999__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5539565240717067556ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3999__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11770108573740569025ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4040__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5202371348228640432ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4040__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18276557618011433358ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4041__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 198236048305248230ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4041__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1743495737465854601ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4053__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 13319192671359545050ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4053__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10037673415712253864ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4054__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 7482696173977632554ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4054__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12462743627779921759ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4055__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9718926831811316478ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4055__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10796591537750671922ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4057__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5255409892070363604ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4057__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3924989434120453682ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4057__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14634660486836720387ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4058__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6628049568442050719ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4058__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 18200818807695052613ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4058__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2615609745073678624ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4059__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18185104309224517171ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4059__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2926604745185750264ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4061__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 18249396092640094694ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4061__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8390140223357014149ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4062__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 2513042925227815017ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4062__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 400615265486683256ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4068__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16105379142057345629ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4068__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12179482942458340210ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4070__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 942220800120459401ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4070__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4468768996205669947ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4111__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10053716991257914830ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4111__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17071484120935492454ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4112__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11028551791948128174ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4112__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8477553937210466187ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4124__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8624050721817570919ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4124__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3027025403295973785ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4125__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6666698655010820992ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4125__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1494052067796672840ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4126__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8897069330102428287ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4126__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1621689491516418397ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4128__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12322561842983396864ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4128__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16436543945625188706ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4128__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17889057175386249125ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4129__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 758884911787391442ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4129__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7432568458915328432ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4129__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 571363597557951681ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4130__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18287667092112738045ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4130__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18382019085612852934ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4132__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 5409026449683391483ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4132__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6302340132708199681ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4133__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 13788082724315043085ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4133__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1206735128036581561ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4139__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9562842800268220373ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4139__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14867598432870623309ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4141__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5315455219433602521ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4141__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2075169519668686375ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4182__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 460434103471278103ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4182__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13735205417224208193ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4183__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4899707267259043029ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4183__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4581243461553451143ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4195__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4005537411682090173ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4195__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 323466046990121910ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4196__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6310111881998611515ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4196__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11421764037505161697ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4197__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11588547754000173112ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4197__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10960097084080521868ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4199__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16092908419152009257ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4199__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17619241143992921871ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4199__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5353874452202815256ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4200__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14054389652973699744ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4200__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 8465119334201599369ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4200__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 838597338810670796ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4201__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13948279428161143979ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4201__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16050055513019037094ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4203__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 15120228928636974128ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4203__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4058179022437519024ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4204__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 14989502128563183729ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4204__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13325682112290718100ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4210__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 233201798228165688ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4210__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12583742343733431110ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4212__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10538441280105665154ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4212__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18261651602848691372ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4253__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6098168254435835323ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4253__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4977549754997011888ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4254__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17713482524608126656ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4254__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13101949139152690687ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4266__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15423068807778092672ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4266__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 125055589048795366ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4267__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15360879243240181666ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4267__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1666185738888177215ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4268__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7197437712989382547ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4268__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13430404891191251812ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4270__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9354502243547442587ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4270__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 690626775067714408ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4270__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6007107299759105062ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4271__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 990900277209962498ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4271__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1256262391195418522ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4271__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6210179402538529738ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4272__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8308957897424904297ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4272__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 319985758226238521ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4274__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 12129179801507658909ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4274__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5157512254296756558ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4275__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9263461384326658760ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4275__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3850367217107748429ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4281__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14797280297997329604ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4281__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1693022229936238437ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4283__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7450504429642407516ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4283__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2585869840107067016ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4324__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7152249071096631698ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4324__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6286778597051308143ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4325__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12015470358144333385ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4325__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5683069231693240080ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4337__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4443252184275866028ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4337__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15802850011374449610ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4338__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8413126279848433550ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4338__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5385531520288850906ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4339__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17655980571639747276ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4339__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13550460354207238121ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4341__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 11377754628299995226ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4341__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 11449590090525974310ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4341__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 365120380092840116ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4342__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3790623706130197098ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4342__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12172340585465505773ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4342__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 763429739309171505ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4343__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12804983269558624429ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4343__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12580129026832170652ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4345__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 12219650068378166018ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4345__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6814447597714862367ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4346__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 11240894441286805204ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4346__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15828614748212172632ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4352__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5417031508160112159ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4352__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13635490624964847696ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4354__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8842814105520080537ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4354__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14953083710915391946ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4395__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11099320860225498191ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4395__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8527580983398091811ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4396__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9104496859666484954ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4396__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14018289145348711230ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4408__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11608780823777467182ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4408__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4202866347812872136ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4409__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 14330637244773897360ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4409__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17160412692441448660ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4410__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16841898522438372604ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4410__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8007057391329317082ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4412__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5654290992659022639ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4412__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3431145448365847222ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4412__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3916627677072010477ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4413__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14401506185472139912ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4413__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16555292549303074599ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4413__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16069862103480275143ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4414__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4200221603842141414ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4414__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 264115494281711125ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4416__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 14005547284740450370ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4416__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18120646762492748442ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4417__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 3075252525991026741ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4417__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4579837525960104917ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4423__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13880373158342425863ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4423__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10261339157913845550ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4425__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14297348605677021027ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4425__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18184090041708580722ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4466__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8763856933858756765ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4466__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4792927019813599875ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4467__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3485350271120518440ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4467__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17292776855918486801ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4479__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 567910136598128644ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4479__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5492210784798623898ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4480__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2594753018074117466ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4480__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3814783908826403949ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4481__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7231282558848742386ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4481__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9778373033810059943ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4483__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6934404073527093257ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4483__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15563301881936037955ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4483__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13096027741680229187ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4484__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6311743375550868399ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4484__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5761424063031911051ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4484__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13378971162961847054ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4485__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14299992766000084602ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4485__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7892385210999143746ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4487__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 5043265447988736665ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4487__vector = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10900810836449449977ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4488__Vfuncout = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 18174276159631170996ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4488__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10744903598878694110ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4494__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1141782507340697489ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4494__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4805648370788423565ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4496__Vfuncout = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9996896692356478274ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4496__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6704115278337847189ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4537__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6836866809361438854ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4537__vector = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5556371830602744508ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4538__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14409265476494174627ull);
    vlSelf->__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4538__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3631167114574985367ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__VdfgRegularize_h6e95ff9d_0_3129, __VscopeHash, 12975930775216123623ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3194 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1857439009348203096ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3195 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3491930190360358412ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3196 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17361243259350473266ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3197 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2376821988744908955ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3198 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18373769110755421856ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3199 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1390578883420308454ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3200 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1536448834293992165ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3201 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12565319992355055493ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3202 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9001541925912088730ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3203 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13999579726487796367ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3204 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15394963594093559726ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3205 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3122710490475194119ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3206 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6842199229069822494ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3207 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9301373899534843248ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3208 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14945206344544567322ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3209 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15664933595093161575ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3210 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9231171727168401819ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3211 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14063113648041920044ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3212 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16660324514879752958ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3213 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 824573888101779122ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3214 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2944453692446269296ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3215 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7443285128941188368ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3216 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 946572626414381268ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3217 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5587575090159645680ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3218 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12642444714530269251ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3219 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 787975668420501164ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3220 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5946993215994214075ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3221 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12902346751053816268ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3222 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10027936991958536248ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3223 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8747446308513092289ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3224 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9557112788959872386ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3225 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8631607891480429900ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3226 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3606681288992607705ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3227 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1522392802904270799ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3228 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2931700461716750496ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3229 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14128681889689654751ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3230 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16356785531246065825ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3231 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7023792456566021371ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3232 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9066632046786899455ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3233 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11217504649644730442ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3234 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4761644795763854640ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3235 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 172737244636220265ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3236 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7336664657075876200ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3237 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14531478817570761314ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3238 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15363515122746583047ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3239 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13805715170207225998ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3240 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11875525322662162416ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3241 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13657700449263391204ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3242 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10812056997555369713ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3243 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1266107953047009671ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3244 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2400014682517330947ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3245 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13110123349238958803ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3246 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 47112669864759188ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3247 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15887073343701950693ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3248 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14047475979162264094ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3249 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4681122403730275996ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3250 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12843260708355955113ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3251 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2633352346870892656ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3252 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10147247150079452318ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3253 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14314876441947436687ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3254 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6603826965592303237ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3255 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1573528655878431605ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3256 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5626163039506103319ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3257 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7995928732363525679ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4871 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1019927800039643562ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4872 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11194752914038878957ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4873 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12311939621853243943ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4874 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9173159096471430966ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4875 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2725528848818720716ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4876 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10464116977463700613ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4877 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5691050598171298110ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4878 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18321054296569347691ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4879 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16480250889957773224ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4880 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14975334995460740788ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4881 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8627786250063912969ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4882 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12945860557315675871ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4883 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12121916973633409881ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4884 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1348524164984010276ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4885 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3267847597260322752ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4886 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13697824256540446204ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4887 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16762395958902557328ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4888 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5890405198556766480ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4889 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14665669679603543554ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4890 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16489129863889081291ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4891 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6664347356840479826ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4892 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 580228471236283118ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4893 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16918648829569293990ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4894 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5145005842810147310ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4895 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15836061946291814033ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4896 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7370623726298369716ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4897 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16740440669204688438ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4898 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11584478665620594831ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4899 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2226460746874932730ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4900 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1495415779509541250ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4901 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1181138983640359857ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4902 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4736824328589621734ull);
}
