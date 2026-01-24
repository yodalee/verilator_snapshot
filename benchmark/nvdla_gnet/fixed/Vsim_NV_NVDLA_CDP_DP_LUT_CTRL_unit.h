// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_NVDLA_CDP_DP_LUT_CTRL_UNIT_H_
#define VERILATED_VSIM_NV_NVDLA_CDP_DP_LUT_CTRL_UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_HLS_fp32_sub;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit final : public VerilatedModule {
  public:
    // CELLS
    Vsim_HLS_fp32_sub* __PVT__u_CDP_DP_LUTCTRL_XOFFSET;
    Vsim_HLS_fp32_sub* __PVT__u_CDP_DP_LUTCTRL_YOFFSET;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(nvdla_core_clk,0,0);
        VL_IN8(nvdla_op_gated_clk_fp16,0,0);
        VL_IN8(nvdla_op_gated_clk_int,0,0);
        VL_IN8(nvdla_core_rstn,0,0);
        VL_IN8(dp2lut_prdy,0,0);
        VL_IN8(fp16_en,0,0);
        VL_IN8(int16_en,0,0);
        VL_IN8(int8_en,0,0);
        VL_IN8(reg2dp_lut_le_function,0,0);
        VL_IN8(reg2dp_lut_le_index_offset,7,0);
        VL_IN8(reg2dp_lut_le_index_select,7,0);
        VL_IN8(reg2dp_lut_le_start_high,5,0);
        VL_IN8(reg2dp_lut_lo_index_select,7,0);
        VL_IN8(reg2dp_lut_lo_start_high,5,0);
        VL_IN8(reg2dp_sqsum_bypass,0,0);
        VL_IN8(sum2itp_pvld,0,0);
        VL_OUT8(dp2lut_pvld,0,0);
        VL_OUT8(sum2itp_prdy,0,0);
        CData/*0:0*/ __PVT__X_exp;
        CData/*0:0*/ __PVT__X_int16_oflow;
        CData/*0:0*/ __PVT__X_int8_oflow_lsb;
        CData/*0:0*/ __PVT__X_int8_oflow_msb;
        CData/*1:0*/ __PVT__Y_dat_info_shift;
        CData/*0:0*/ __PVT__Y_int16_oflow;
        CData/*0:0*/ __PVT__Y_int8_oflow_lsb;
        CData/*0:0*/ __PVT__Y_int8_oflow_msb;
        CData/*0:0*/ __PVT__Y_less_than_win_s;
        CData/*0:0*/ __PVT__Y_less_than_win_start;
        CData/*7:0*/ __PVT__Y_shift_bits;
        CData/*0:0*/ __PVT__fp_X_index_uflow;
        CData/*0:0*/ __PVT__fp_X_stage1_vld;
        CData/*0:0*/ __PVT__fp_X_stage2_vld;
        CData/*0:0*/ __PVT__fp_X_uflow;
        CData/*0:0*/ __PVT__fp_Xshift_oflow;
        CData/*0:0*/ __PVT__fp_Y_stage1_vld;
        CData/*0:0*/ __PVT__fp_Y_uflow;
        CData/*0:0*/ __PVT__fp_Yindex_info_d;
        CData/*0:0*/ __PVT__fp_Yshift_oflow;
        CData/*0:0*/ __PVT__int_X_index_uflow_lsb;
        CData/*0:0*/ __PVT__int_X_index_uflow_msb;
        CData/*1:0*/ __PVT__int_X_input_uflow_d;
        CData/*0:0*/ __PVT__int_X_input_uflow_lsb;
        CData/*0:0*/ __PVT__int_X_input_uflow_msb;
        CData/*0:0*/ __PVT__int_Y_input_uflow_lsb;
        CData/*0:0*/ __PVT__int_Y_input_uflow_msb;
        CData/*0:0*/ __PVT__int_Y_stage0_pvld;
        CData/*0:0*/ __PVT__int_Y_stage1_pvld;
        CData/*0:0*/ __PVT__int_stage0_pvld;
        CData/*0:0*/ __PVT__int_stage1_pvld;
        CData/*0:0*/ __PVT__int_stage2_pvld;
        CData/*0:0*/ __PVT__int_stage3_pvld;
        CData/*0:0*/ __PVT__less_than_win_s;
        CData/*0:0*/ __PVT__less_than_win_start;
        CData/*0:0*/ __PVT__mon_Y_dec_offset_lsb;
        CData/*0:0*/ __PVT__mon_Y_dec_offset_msb;
        CData/*0:0*/ __PVT__mon_dec_Xindex_lsb;
        CData/*0:0*/ __PVT__mon_dec_Xindex_msb;
        CData/*0:0*/ __PVT__mon_dec_offset_lsb;
        CData/*0:0*/ __PVT__mon_dec_offset_msb;
        CData/*0:0*/ __PVT__mon_fp_Xindex;
        CData/*0:0*/ __PVT__sqsum_bypass_enable;
        CData/*5:0*/ __PVT__Y_shift_bits_int16_abs;
        CData/*4:0*/ __PVT__Y_shift_bits_int8_abs;
        CData/*0:0*/ __PVT__Y_stage1_in_rdy;
    };
    struct {
        CData/*0:0*/ __PVT__Y_stage1_in_rdy_d1;
        CData/*0:0*/ __PVT__fp16_X_datin_prdy;
        CData/*0:0*/ __PVT__fp16_Y_datin_prdy;
        CData/*0:0*/ __PVT__fp_X_proc_in_vld;
        CData/*7:0*/ __PVT__fp_X_shift_abs;
        CData/*0:0*/ __PVT__fp_X_stage0_load;
        CData/*0:0*/ __PVT__fp_X_stage1_load;
        CData/*0:0*/ __PVT__fp_X_stage1_rdy;
        CData/*0:0*/ __PVT__fp_X_stage2_rdy;
        CData/*0:0*/ __PVT__fp_Y_proc_in_vld;
        CData/*7:0*/ __PVT__fp_Y_shift_abs;
        CData/*0:0*/ __PVT__fp_Y_stage0_load;
        CData/*0:0*/ __PVT__fp_Y_stage1_rdy;
        CData/*0:0*/ __PVT__fp_en_vld;
        CData/*0:0*/ __PVT__fp_out_rdy;
        CData/*0:0*/ __PVT__int_X_datin_prdy;
        CData/*0:0*/ __PVT__int_X_proc_in_vld;
        CData/*0:0*/ __PVT__int_Y_datin_prdy;
        CData/*0:0*/ __PVT__int_Y_proc_in_vld;
        CData/*0:0*/ __PVT__int_Y_stage0_prdy;
        CData/*0:0*/ __PVT__int_en_vld;
        CData/*0:0*/ __PVT__int_out_rdy;
        CData/*0:0*/ __PVT__int_stage0_prdy;
        CData/*0:0*/ __PVT__int_stage1_prdy;
        CData/*0:0*/ __PVT__int_stage2_prdy;
        CData/*0:0*/ __PVT__int_stage3_prdy;
        CData/*0:0*/ __PVT__less_than_start;
        CData/*0:0*/ __PVT__load_din_intY;
        CData/*0:0*/ __PVT__load_in_intX;
        CData/*0:0*/ __PVT__load_int_Y_stage0;
        CData/*0:0*/ __PVT__load_int_stage0;
        CData/*0:0*/ __PVT__load_int_stage1;
        CData/*0:0*/ __PVT__load_int_stage2;
        CData/*0:0*/ __PVT__same_sign;
        CData/*7:0*/ __PVT__shift_bits;
        CData/*6:0*/ __PVT__shift_bits_int16_abs;
        CData/*5:0*/ __PVT__shift_bits_int8_abs;
        CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_valid;
        CData/*0:0*/ __PVT__pipe_p3__DOT__p3_pipe_valid;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3975;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3976;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3977;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3978;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3979;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3980;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3981;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3982;
        SData/*15:0*/ __PVT__X_lin_frac_int16;
        SData/*15:0*/ __PVT__X_lin_frac_int8_lsb;
        SData/*15:0*/ __PVT__X_lin_frac_int8_msb;
        SData/*15:0*/ __PVT__Y_lin_frac_int16;
        SData/*15:0*/ __PVT__Y_lin_frac_int8_lsb;
        SData/*15:0*/ __PVT__Y_lin_frac_int8_msb;
        SData/*9:0*/ __PVT__Y_shift_int16;
        SData/*9:0*/ __PVT__Y_shift_lsb_int8;
        SData/*9:0*/ __PVT__Y_shift_msb_int8;
        SData/*15:0*/ __PVT__fp_X_exp_frac;
        SData/*8:0*/ __PVT__fp_Xindex;
        SData/*9:0*/ __PVT__fp_Xshift;
        SData/*15:0*/ __PVT__fp_Xshift_frac;
        SData/*9:0*/ __PVT__fp_Yshift;
        SData/*15:0*/ __PVT__fp_Yshift_frac;
        SData/*9:0*/ __PVT__shift_int16;
    };
    struct {
        SData/*9:0*/ __PVT__shift_lsb_int8;
        SData/*9:0*/ __PVT__shift_msb_int8;
        SData/*15:0*/ __PVT__fp_X_frac;
        SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_2940;
        SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_2943;
        SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_2958;
        SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_2961;
        SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_2974;
        SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_2977;
        SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_2990;
        SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_2993;
        VL_IN(reg2dp_lut_le_start_low,31,0);
        VL_IN(reg2dp_lut_lo_start_low,31,0);
        VL_OUT(dp2lut_X_pd,19,0);
        VL_OUT(dp2lut_Y_pd,19,0);
        IData/*21:0*/ __PVT__Y_dec_offset_msb;
        IData/*22:0*/ __PVT__dec_Xindex_msb;
        IData/*21:0*/ __PVT__dec_offset_msb;
        IData/*16:0*/ __PVT__fp_X_info_d;
        IData/*31:0*/ __PVT__fp_X_log2_datout;
        IData/*31:0*/ __PVT__fp_X_log2_datout_d;
        IData/*16:0*/ __PVT__fp_Xindex_info_d;
        IData/*21:0*/ __PVT__log2_datout_msb;
        IData/*20:0*/ __PVT__log2_frac_msb;
        VlWide<5>/*128:0*/ __PVT__Y_fp32_int;
        IData/*20:0*/ __PVT__datin_int8_lsb;
        IData/*20:0*/ __PVT__datin_int8_msb;
        IData/*21:0*/ __PVT__dec_offset_datin_msb;
        VlWide<5>/*128:0*/ __PVT__fp32_int;
        IData/*16:0*/ __PVT__fp_X_info;
        IData/*31:0*/ __PVT__fp_Xindex_data;
        IData/*16:0*/ __PVT__fp_Xindex_info;
        IData/*31:0*/ __PVT__fp_log2_datin;
        IData/*27:0*/ __PVT__pipe_p3__DOT__p3_pipe_data;
        VlWide<4>/*102:0*/ __VdfgRegularize_h6e95ff9d_0_2932;
        VlWide<4>/*101:0*/ __VdfgRegularize_h6e95ff9d_0_2937;
        VlWide<9>/*277:0*/ __VdfgRegularize_h6e95ff9d_0_2941;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_2942;
        VlWide<9>/*277:0*/ __VdfgRegularize_h6e95ff9d_0_2944;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_2945;
        VlWide<4>/*102:0*/ __VdfgRegularize_h6e95ff9d_0_2950;
        VlWide<4>/*101:0*/ __VdfgRegularize_h6e95ff9d_0_2955;
        VlWide<9>/*277:0*/ __VdfgRegularize_h6e95ff9d_0_2959;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_2960;
        VlWide<9>/*277:0*/ __VdfgRegularize_h6e95ff9d_0_2962;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_2963;
        VlWide<4>/*102:0*/ __VdfgRegularize_h6e95ff9d_0_2966;
        VlWide<4>/*101:0*/ __VdfgRegularize_h6e95ff9d_0_2971;
        VlWide<9>/*277:0*/ __VdfgRegularize_h6e95ff9d_0_2975;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_2976;
        VlWide<9>/*277:0*/ __VdfgRegularize_h6e95ff9d_0_2978;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_2979;
        VlWide<4>/*102:0*/ __VdfgRegularize_h6e95ff9d_0_2982;
        VlWide<4>/*101:0*/ __VdfgRegularize_h6e95ff9d_0_2987;
        VlWide<9>/*277:0*/ __VdfgRegularize_h6e95ff9d_0_2991;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_2992;
        VlWide<9>/*277:0*/ __VdfgRegularize_h6e95ff9d_0_2994;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_2995;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_3529;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_3531;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_3532;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_3534;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_3535;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_3537;
    };
    struct {
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_3538;
        VlWide<13>/*407:0*/ __VdfgRegularize_h6e95ff9d_0_3540;
        VL_IN64(sum2itp_pd,41,0);
        VL_OUT64(dp2lut_X_info,35,0);
        VL_OUT64(dp2lut_Y_info,35,0);
        QData/*37:0*/ __PVT__Y_dec_offset_lsb;
        QData/*33:0*/ __PVT__dat_info_d;
        QData/*33:0*/ __PVT__dat_info_shift;
        QData/*38:0*/ __PVT__dec_Xindex_lsb;
        QData/*37:0*/ __PVT__dec_offset_lsb;
        QData/*37:0*/ __PVT__log2_datout_lsb;
        QData/*36:0*/ __PVT__log2_frac_lsb;
        QData/*33:0*/ __PVT__dat_info;
        QData/*33:0*/ __PVT__dat_info_index_sub;
        QData/*36:0*/ __PVT__datin_int16;
        QData/*37:0*/ __PVT__dec_offset_datin_lsb;
        QData/*55:0*/ __PVT__pipe_p1__DOT__p1_pipe_data;
        QData/*55:0*/ __PVT__pipe_p2__DOT__p2_pipe_data;
        QData/*54:0*/ __VdfgRegularize_h6e95ff9d_0_2933;
        QData/*54:0*/ __VdfgRegularize_h6e95ff9d_0_2934;
        QData/*53:0*/ __VdfgRegularize_h6e95ff9d_0_2938;
        QData/*53:0*/ __VdfgRegularize_h6e95ff9d_0_2939;
        QData/*54:0*/ __VdfgRegularize_h6e95ff9d_0_2951;
        QData/*54:0*/ __VdfgRegularize_h6e95ff9d_0_2952;
        QData/*53:0*/ __VdfgRegularize_h6e95ff9d_0_2956;
        QData/*53:0*/ __VdfgRegularize_h6e95ff9d_0_2957;
        QData/*54:0*/ __VdfgRegularize_h6e95ff9d_0_2967;
        QData/*54:0*/ __VdfgRegularize_h6e95ff9d_0_2968;
        QData/*53:0*/ __VdfgRegularize_h6e95ff9d_0_2972;
        QData/*53:0*/ __VdfgRegularize_h6e95ff9d_0_2973;
        QData/*54:0*/ __VdfgRegularize_h6e95ff9d_0_2983;
        QData/*54:0*/ __VdfgRegularize_h6e95ff9d_0_2984;
        QData/*53:0*/ __VdfgRegularize_h6e95ff9d_0_2988;
        QData/*53:0*/ __VdfgRegularize_h6e95ff9d_0_2989;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit();
    VL_UNCOPYABLE(Vsim_NV_NVDLA_CDP_DP_LUT_CTRL_unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
