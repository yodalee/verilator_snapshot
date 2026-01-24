// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2490__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2490__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2490__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2490__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2491__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2491__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2491__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2491__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2496__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2496__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2496__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2496__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2496__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2496__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2509__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2509__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2509__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2509__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2517__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2517__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2517__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2517__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2517__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2517__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2524__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2524__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2524__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2524__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2524__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2524__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2549__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2549__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2549__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2549__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2549__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2549__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2550__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2550__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2550__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2550__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2550__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2550__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2509__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2509__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2509__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2509__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2508__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2507__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2510__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2491__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2491__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2491__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2491__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2511__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2514__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2516__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2516__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2516__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2516__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
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
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2549__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2549__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2550__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2549__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2550__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2549__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2550__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2550__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2550__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2549__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2550__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2549__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2490__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2490__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2490__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2490__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2513__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2515__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2497__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2497__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2497__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2497__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2512__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2492__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2498__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2498__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2498__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2498__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2517__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2517__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2517__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2517__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2517__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2517__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2524__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2524__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2524__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2524__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2524__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2524__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2496__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2496__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2496__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2496__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2496__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2496__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2546__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2546__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2546__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2546__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2546__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2546__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2546__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2546__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2548__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2548__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2548__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2548__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2548__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2548__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2548__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2548__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2547__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2545__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2542__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2542__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2542__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2542__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2542__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2542__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2542__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2542__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2544__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2544__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2544__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2544__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2544__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2544__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2544__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2544__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2543__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2541__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2495__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2493__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2494__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2520__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2521__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2522__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2522__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2522__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2522__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__input_0 
        = (0x0001ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p3_pipe_data[0U]);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2552__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2489__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2489__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2489__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2489__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2506__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2506__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2506__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2506__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2540__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2540__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2540__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2540__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__input_0 
        = (0x0001ffffU & vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__fp_cur_pooling_dat[0U]);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2551__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
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
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2488__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2488__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2488__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2488__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2505__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2505__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2505__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2505__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2489__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2489__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2489__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2489__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2506__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2506__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2506__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2506__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2538__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2539__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2540__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2540__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2540__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2540__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2518__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2518__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2518__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2518__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2518__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2518__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2519__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2519__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2519__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2519__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2519__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2519__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_out_prdy) 
              & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2531__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2484__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2533__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2532__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2523__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2499__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2502__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2500__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2529__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2534__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2536__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2485__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2527__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2501__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2535__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2537__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2528__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2503__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2530__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2504__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2525__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2526__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0__3(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld) 
              & (IData)(((0x0eU == (0x0eU & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy))) 
                         & (0x0fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld) 
              & (IData)(((0x0eU == (0x0eU & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy))) 
                         & (0x0fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2486__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2487__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2559__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2559__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2559__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2559__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2560__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2560__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2560__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2560__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2565__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2565__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2565__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2565__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2565__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2565__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2578__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2578__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2578__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2578__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2586__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2586__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2586__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2586__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2586__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2586__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2593__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2593__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2593__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2593__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2593__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2593__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2618__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2618__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2618__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2618__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2618__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2618__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2619__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2619__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2619__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2619__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2619__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2619__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2578__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2578__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2578__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2578__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2577__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2576__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2579__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2560__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2560__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2560__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2560__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2580__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2583__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2585__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2585__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2585__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2585__Vfuncout)))));
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
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2618__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2618__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2619__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2618__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2619__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2618__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2619__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2619__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2619__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2618__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2619__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2618__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2559__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2559__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2559__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2559__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2582__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2584__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2566__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2566__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2566__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2566__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2581__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2561__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2567__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2567__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2567__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2567__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2586__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2586__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2586__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2586__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2586__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2586__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2593__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2593__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2593__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2593__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2593__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2593__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2565__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2565__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2565__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2565__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2565__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2565__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2615__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2615__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2615__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2615__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2615__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2615__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2615__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2615__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2617__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2617__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2617__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2617__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2617__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2617__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2617__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2617__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2616__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2614__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2611__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2611__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2611__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2611__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2611__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2611__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2611__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2611__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2613__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2613__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2613__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2613__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2613__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2613__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2613__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2613__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2612__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2610__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2564__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2562__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2563__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2589__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2590__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2591__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2591__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2591__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2591__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p3_pipe_data[1U] 
                           << 0x0000000aU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p3_pipe_data[0U] 
                                              >> 0x00000016U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2621__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2558__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2558__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2558__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2558__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2575__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2575__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2575__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2575__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2609__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2609__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2609__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2609__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__fp_cur_pooling_dat[1U] 
                           << 0x0000000aU) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__fp_cur_pooling_dat[0U] 
                                              >> 0x00000016U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2620__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
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
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2557__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2557__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2557__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2557__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2574__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2574__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2574__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2574__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2558__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2558__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2558__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2558__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2575__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2575__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2575__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2575__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2607__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2608__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2609__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2609__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2609__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2609__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2587__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2587__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2587__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2587__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2587__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2587__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2588__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2588__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2588__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2588__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2588__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2588__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_out_prdy) 
              & (IData)(((0x0cU == (0x0cU & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__out_z_vld))) 
                         & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2600__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2553__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2602__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2601__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2592__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2568__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2571__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2569__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2598__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2603__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2605__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2554__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2596__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2570__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2604__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2606__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2597__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2572__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2599__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2573__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2594__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2595__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1__3(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld) 
              & (IData)((((0x0cU == (0x0cU & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy))) 
                          & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld)) 
                         & (0x0fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld) 
              & (IData)((((0x0cU == (0x0cU & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy))) 
                          & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld)) 
                         & (0x0fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2555__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2556__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2628__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2628__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2628__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2628__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2629__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2629__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2629__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2629__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2634__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2634__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2634__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2634__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2634__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2634__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2647__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2647__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2647__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2647__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2655__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2655__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2655__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2655__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2655__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2655__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2662__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2662__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2662__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2662__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2662__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2662__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2687__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2687__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2687__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2687__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2687__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2687__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2688__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2688__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2688__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2688__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2688__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2688__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2647__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2647__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2647__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2647__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2646__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2645__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2648__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2629__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2629__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2629__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2629__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2649__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2652__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2654__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2654__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2654__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2654__Vfuncout)))));
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
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2687__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2687__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2688__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2687__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2688__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2687__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2688__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2688__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2688__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2687__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2688__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2687__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2628__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2628__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2628__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2628__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2651__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2653__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2635__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2635__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2635__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2635__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2650__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2630__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2636__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2636__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2636__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2636__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2655__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2655__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2655__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2655__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2655__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2655__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2662__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2662__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2662__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2662__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2662__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2662__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2634__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2634__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2634__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2634__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2634__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2634__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2684__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2684__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2684__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2684__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2684__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2684__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2684__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2684__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2686__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2686__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2686__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2686__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2686__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2686__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2686__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2686__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2685__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2683__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2680__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2680__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2680__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2680__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2680__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2680__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2680__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2680__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2682__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2682__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2682__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2682__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2682__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2682__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2682__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2682__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2681__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2679__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2633__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2631__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2632__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2658__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2659__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2660__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2660__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2660__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2660__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__input_0 
        = (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p3_pipe_data[1U] 
                          >> 0x0000000cU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2690__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2627__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2627__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2627__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2627__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2644__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2644__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2644__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2644__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2678__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2678__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2678__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2678__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__input_0 
        = (0x0001ffffU & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__fp_cur_pooling_dat[1U] 
                          >> 0x0000000cU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2689__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
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
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2626__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2626__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2626__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2626__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2643__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2643__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2643__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2643__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2627__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2627__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2627__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2627__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2644__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2644__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2644__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2644__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2676__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2677__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2678__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2678__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2678__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2678__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2656__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2656__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2656__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2656__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2656__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2656__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2657__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2657__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2657__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2657__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2657__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2657__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_out_prdy) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                 & (3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_6)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2669__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2622__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2671__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2670__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2661__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2637__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2640__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2638__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2667__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2672__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2674__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2623__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2665__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2639__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2673__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2675__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2666__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2641__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2668__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2642__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2663__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2664__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2__3(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_2__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                 & ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_2)) 
                    & (0x0000000fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                 & ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_4)) 
                    & (0x0000000fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2624__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2625__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2697__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2697__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2697__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2697__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2698__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2698__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2698__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2698__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2703__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2703__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2703__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2703__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2703__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2703__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2716__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2716__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2716__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2716__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2724__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2724__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2724__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2724__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2724__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2724__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2731__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2731__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2731__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2731__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2731__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2731__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2756__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2756__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2756__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2756__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2756__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2756__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2757__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2757__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2757__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2757__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2757__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2757__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2716__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2716__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2716__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2716__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2715__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2714__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2717__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2698__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2698__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2698__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2698__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2718__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2721__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2723__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2723__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2723__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2723__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
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
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2756__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2756__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2757__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2756__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2757__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2756__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2757__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2757__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2757__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2756__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2757__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2756__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2697__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2697__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2697__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2697__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2720__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2722__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2704__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2704__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2704__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2704__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2719__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2699__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2705__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2705__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2705__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2705__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2724__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2724__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2724__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2724__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2724__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2724__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2731__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2731__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2731__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2731__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2731__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2731__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2703__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2703__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2703__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2703__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2703__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2703__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2753__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2753__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2753__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2753__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2753__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2753__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2753__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2753__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2755__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2755__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2755__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2755__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2755__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2755__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2755__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2755__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2754__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2752__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2749__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2749__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2749__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2749__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2749__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2749__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2749__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2749__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2751__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2751__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2751__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2751__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2751__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2751__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2751__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2751__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2750__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2748__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2702__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2700__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2701__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2727__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2728__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2729__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2729__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2729__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2729__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__input_0 
        = (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__p3_pipe_data[2U] 
                          >> 2U));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__2759__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2696__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2696__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2696__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2696__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2713__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2713__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2713__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2713__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2747__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2747__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2747__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2747__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__input_0 
        = (0x0001ffffU & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__fp_cur_pooling_dat[2U] 
                          >> 2U));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__2758__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
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
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2695__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2695__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2695__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__2695__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2712__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2712__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2712__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__2712__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2696__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2696__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2696__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2696__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2713__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2713__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2713__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__2713__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2745__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2746__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2747__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2747__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2747__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__2747__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2725__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2725__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2725__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2725__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2725__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2725__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2726__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2726__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2726__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2726__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2726__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2726__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_out_prdy) 
              & (7U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_7))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2738__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2691__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2740__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2739__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2730__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2706__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2709__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2707__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2736__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2741__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2743__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2692__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2734__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2708__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2742__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2744__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2735__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2710__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2737__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2711__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2732__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2733__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3__3(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__u_cal1d_fp16_pool_sum__DOT__u_cal1d_pool_sum_3__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld) 
              & ((7U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_3)) 
                 & (0x0000000fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_b_rdy)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_in_pvld) 
              & ((7U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.u_cal1d_fp16_pool_sum__DOT____VdfgRegularize_h1a2ae030_0_5)) 
                 & (0x0000000fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7.__PVT__u_cal1d_fp16_pool_sum__DOT__inp_a_rdy)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2693__Vfuncout;
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2694__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
}

void Vsim_HLS_fp17_add___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_0__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_slcg_fp16__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_0__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2785__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2785__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2785__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2785__vector = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2825__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2825__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2825__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2825__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2825__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2825__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2826__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2826__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2826__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2826__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2826__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2826__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2785__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2785__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2785__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__2785__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
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
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
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
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2825__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2825__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2826__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2825__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2826__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2825__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2826__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2826__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2826__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2825__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__2826__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__2825__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_0__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2766__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2766__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2766__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2766__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2767__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2767__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2767__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2767__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2772__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2772__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2772__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2772__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2772__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2772__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2793__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2793__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2793__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2793__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2793__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2793__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2800__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2800__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2800__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2800__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2800__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2800__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__sbit = 0;
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__2784__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2783__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__2786__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2767__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2767__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2767__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2767__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2787__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2790__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2792__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2792__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2792__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__2792__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2766__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2766__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2766__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__2766__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2789__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2791__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2773__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2773__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2773__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__2773__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2788__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2768__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2774__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2774__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2774__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__2774__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2793__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2793__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2793__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2793__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2793__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__2793__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2800__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2800__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2800__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2800__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2800__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__2800__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2772__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2772__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2772__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2772__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2772__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2772__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2822__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2822__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2822__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2822__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2822__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2822__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2822__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__2822__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2824__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2824__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2824__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2824__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2824__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2824__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2824__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__2824__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__2823__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__2821__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2818__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2818__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2818__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2818__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2818__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2818__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2818__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__2818__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2820__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2820__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2820__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2820__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2820__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2820__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2820__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__2820__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__2819__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__2817__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__2771__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2769__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2770__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2796__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__2797__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2798__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2798__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2798__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__2798__Vfuncout))));
}
