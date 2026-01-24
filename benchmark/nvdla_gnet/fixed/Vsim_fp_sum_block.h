// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_FP_SUM_BLOCK_H_
#define VERILATED_VSIM_FP_SUM_BLOCK_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_HLS_fp32_add;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_fp_sum_block final : public VerilatedModule {
  public:
    // CELLS
    Vsim_HLS_fp32_add* __PVT__u_HLS_fp32_add_3_5;
    Vsim_HLS_fp32_add* __PVT__u_HLS_fp32_add_2_6;
    Vsim_HLS_fp32_add* __PVT__u_HLS_fp32_add_1_7;
    Vsim_HLS_fp32_add* __PVT__u_HLS_fp32_add_0_8;
    Vsim_HLS_fp32_add* __PVT__u_HLS_fp32_add_sum3;
    Vsim_HLS_fp32_add* __PVT__u_HLS_fp32_add_sum5;
    Vsim_HLS_fp32_add* __PVT__u_HLS_fp32_add_sum7;
    Vsim_HLS_fp32_add* __PVT__u_HLS_fp32_add_sum9;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(fp16_sum_rdy,0,0);
        VL_IN8(fp_sq_out_vld,0,0);
        VL_IN8(len3,0,0);
        VL_IN8(len5,0,0);
        VL_IN8(len7,0,0);
        VL_IN8(len9,0,0);
        VL_IN8(nvdla_core_clk,0,0);
        VL_IN8(nvdla_core_rstn,0,0);
        VL_IN8(reg2dp_normalz_len,1,0);
        VL_OUT8(fp16_sum_vld,0,0);
        VL_OUT8(fp_sq_out_rdy,0,0);
        CData/*0:0*/ __PVT__fp16_dout_4_in_rdy;
        CData/*0:0*/ __PVT__fp16_dout_4_in_rdy_d1;
        CData/*0:0*/ __PVT__fp16_dout_4_in_rdy_d2;
        CData/*0:0*/ __PVT__fp16_dout_4_in_rdy_d3;
        CData/*0:0*/ __PVT__fp16_dout_4_in_vld;
        CData/*0:0*/ __PVT__fp16_sum35_rdy;
        CData/*0:0*/ __PVT__fp16_sum3_vld;
        CData/*0:0*/ __PVT__fp16_sum4_rdy;
        CData/*0:0*/ __PVT__fp16_sum5_vld;
        CData/*0:0*/ __PVT__fp16_sum7_vld;
        CData/*0:0*/ __PVT__fp16_sum_3_5_vld;
        CData/*0:0*/ __PVT__fp16_sum_stage0_rdy;
        CData/*0:0*/ __PVT__fp16_sum_stage0_vld;
        CData/*0:0*/ __PVT__fp16_sum_stage1_rdy;
        CData/*0:0*/ __PVT__fp16_sum_stage1_vld;
        CData/*0:0*/ __PVT__fp16_sum_stage2_rdy;
        CData/*0:0*/ __PVT__fp16_sum_stage2_vld;
        CData/*0:0*/ __PVT__fp16_sum_stage3_rdy;
        CData/*0:0*/ __PVT__fp16_sum_stage3_vld;
        CData/*0:0*/ __PVT__stage1_pipe_in_rdy;
        CData/*0:0*/ __PVT__stage1_pipe_in_rdy_d1;
        CData/*0:0*/ __PVT__stage1_pipe_in_rdy_d2;
        CData/*0:0*/ __PVT__stage1_pipe_in_rdy_d3;
        CData/*0:0*/ __PVT__stage1_pipe_in_vld;
        CData/*0:0*/ __PVT__stage2_pipe_in_rdy;
        CData/*0:0*/ __PVT__stage2_pipe_in_rdy_d1;
        CData/*0:0*/ __PVT__stage2_pipe_in_rdy_d2;
        CData/*0:0*/ __PVT__stage2_pipe_in_rdy_d3;
        CData/*0:0*/ __PVT__stage2_pipe_in_vld;
        CData/*0:0*/ __PVT__stage2_sum26_rdy;
        CData/*0:0*/ __PVT__stage2_sum3_rdy;
        CData/*0:0*/ __PVT__stage3_pipe_in_rdy;
        CData/*0:0*/ __PVT__stage3_pipe_in_rdy_d1;
        CData/*0:0*/ __PVT__stage3_pipe_in_rdy_d2;
        CData/*0:0*/ __PVT__stage3_pipe_in_rdy_d3;
        CData/*0:0*/ __PVT__stage3_pipe_in_vld;
        CData/*0:0*/ __PVT__stage3_sum17_rdy;
        CData/*0:0*/ __PVT__stage3_sum5_rdy;
        CData/*0:0*/ __PVT__stage4_sum08_rdy;
        CData/*0:0*/ __PVT__stage4_sum7_rdy;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_0;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_4;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_5;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_6;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_7;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_8;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_9;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_10;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_11;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_12;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_13;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_14;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_15;
    };
    struct {
        CData/*1:0*/ __VdfgRegularize_h1b022894_0_16;
        CData/*2:0*/ __VdfgRegularize_h1b022894_0_17;
        CData/*3:0*/ __VdfgRegularize_h1b022894_0_18;
        CData/*4:0*/ __VdfgRegularize_h1b022894_0_19;
        CData/*5:0*/ __VdfgRegularize_h1b022894_0_20;
        CData/*6:0*/ __VdfgRegularize_h1b022894_0_21;
        CData/*7:0*/ __VdfgRegularize_h1b022894_0_22;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_23;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_24;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_25;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_26;
        CData/*0:0*/ __VdfgRegularize_h1b022894_0_28;
        CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p3__DOT__p3_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p4__DOT__p4_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p5__DOT__p5_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p6__DOT__p6_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p7__DOT__p7_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p8__DOT__p8_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p9__DOT__p9_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p10__DOT__p10_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p11__DOT__p11_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p12__DOT__p12_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p13__DOT__p13_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p14__DOT__p14_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p15__DOT__p15_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p16__DOT__p16_pipe_valid;
        CData/*0:0*/ __VdfgRegularize_h1b022894_1_0;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2929;
        SData/*8:0*/ __PVT__fp_sum_in_rdy;
        VL_IN(fp16_dout_0,31,0);
        VL_IN(fp16_dout_1,31,0);
        VL_IN(fp16_dout_2,31,0);
        VL_IN(fp16_dout_3,31,0);
        VL_IN(fp16_dout_4,31,0);
        VL_IN(fp16_dout_5,31,0);
        VL_IN(fp16_dout_6,31,0);
        VL_IN(fp16_dout_7,31,0);
        VL_IN(fp16_dout_8,31,0);
        VL_OUT(fp16_sum,31,0);
        IData/*31:0*/ __PVT__fp16_sum3;
        IData/*31:0*/ __PVT__fp16_sum5;
        IData/*31:0*/ __PVT__fp16_sum7;
        IData/*31:0*/ __PVT__pipe_p1__DOT__p1_pipe_data;
        IData/*31:0*/ __PVT__pipe_p2__DOT__p2_pipe_data;
        IData/*31:0*/ __PVT__pipe_p3__DOT__p3_pipe_data;
        IData/*31:0*/ __PVT__pipe_p4__DOT__p4_pipe_data;
        VlWide<3>/*95:0*/ __PVT__pipe_p5__DOT__p5_pipe_data;
        VlWide<3>/*95:0*/ __PVT__pipe_p6__DOT__p6_pipe_data;
        VlWide<3>/*95:0*/ __PVT__pipe_p7__DOT__p7_pipe_data;
        VlWide<3>/*95:0*/ __PVT__pipe_p8__DOT__p8_pipe_data;
        IData/*31:0*/ __PVT__pipe_p13__DOT__p13_pipe_data;
        IData/*31:0*/ __PVT__pipe_p14__DOT__p14_pipe_data;
        IData/*31:0*/ __PVT__pipe_p15__DOT__p15_pipe_data;
        IData/*31:0*/ __PVT__pipe_p16__DOT__p16_pipe_data;
        QData/*63:0*/ __PVT__pipe_p9__DOT__p9_pipe_data;
        QData/*63:0*/ __PVT__pipe_p10__DOT__p10_pipe_data;
        QData/*63:0*/ __PVT__pipe_p11__DOT__p11_pipe_data;
        QData/*63:0*/ __PVT__pipe_p12__DOT__p12_pipe_data;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_fp_sum_block(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_fp_sum_block();
    VL_UNCOPYABLE(Vsim_fp_sum_block);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
