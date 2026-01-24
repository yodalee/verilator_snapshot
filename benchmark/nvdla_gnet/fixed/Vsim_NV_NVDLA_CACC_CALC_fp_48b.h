// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_NVDLA_CACC_CALC_FP_48B_H_
#define VERILATED_VSIM_NV_NVDLA_CACC_CALC_FP_48B_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_NV_NVDLA_CACC_CALC_fp_48b final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(nvdla_core_clk,0,0);
        VL_IN8(nvdla_core_rstn,0,0);
        VL_IN8(in_op_valid,0,0);
        VL_IN8(in_sel,0,0);
        VL_IN8(in_valid,0,0);
        VL_OUT8(out_final_valid,0,0);
        VL_OUT8(out_partial_valid,0,0);
        CData/*7:0*/ __PVT__expo_trans;
        CData/*0:0*/ __PVT__final_sel;
        CData/*0:0*/ __PVT__final_vld;
        CData/*7:0*/ __PVT__in_aligned_expo;
        CData/*2:0*/ __PVT__in_mant_cut;
        CData/*0:0*/ __PVT__in_nan_2d;
        CData/*0:0*/ __PVT__in_nan_d;
        CData/*0:0*/ __PVT__msum_sel;
        CData/*0:0*/ __PVT__msum_vld;
        CData/*7:0*/ __PVT__partial_result_expo;
        CData/*0:0*/ __PVT__shift_sel;
        CData/*0:0*/ __PVT__shift_vld;
        CData/*7:0*/ __PVT__di_expo;
        CData/*7:0*/ __PVT__di_expo_shift;
        CData/*5:0*/ __PVT__di_lead_num;
        CData/*0:0*/ __PVT__fp32_mant_carry;
        CData/*0:0*/ __PVT__in_nan;
        CData/*0:0*/ __PVT__mant_sum_carry_neg;
        CData/*0:0*/ __PVT__mant_sum_carry_pos;
        CData/*0:0*/ __PVT__mant_sum_point5;
        CData/*7:0*/ __PVT__max_expo;
        CData/*5:0*/ __PVT__msum_lead_num;
        CData/*7:0*/ __PVT__oi_expo;
        CData/*7:0*/ __PVT__oi_expo_shift;
        CData/*0:0*/ __VdfgRegularize_h3f0e3986_0_2;
        CData/*5:0*/ __PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
        CData/*5:0*/ __PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i;
        CData/*0:0*/ __PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done;
        CData/*5:0*/ __PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc;
        CData/*5:0*/ __PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp;
        CData/*5:0*/ __PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
        CData/*5:0*/ __PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i;
        CData/*0:0*/ __PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done;
        CData/*5:0*/ __PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc;
        CData/*5:0*/ __PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp;
        VL_OUT(out_final_data,31,0);
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4943;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4944;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4945;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4946;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4947;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4948;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4949;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4950;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4951;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4952;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4953;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4954;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4955;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4956;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4957;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4958;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4959;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4960;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4961;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4962;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4963;
    };
    struct {
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4964;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4965;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4966;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4967;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4968;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4969;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4970;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4971;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4972;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4973;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4974;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4975;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4976;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4977;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4978;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4979;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4980;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4981;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4982;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4983;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4984;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4985;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4986;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4987;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4988;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4989;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4990;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4991;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4992;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4993;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4994;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4995;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4996;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4997;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4998;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_4999;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5000;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5001;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5002;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5003;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5004;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5005;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5006;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5007;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5008;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5009;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5010;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5011;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5012;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5013;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5014;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5015;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5016;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5017;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5018;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5019;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5020;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5021;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5022;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5023;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5024;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5025;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5026;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5027;
    };
    struct {
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5028;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5029;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5030;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5031;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5032;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5033;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5034;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5035;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5036;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5037;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5038;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5039;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5040;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5041;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5042;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5043;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5044;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5045;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5046;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5047;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5048;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5049;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5050;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5051;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5052;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5053;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5054;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5055;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5056;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5057;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5058;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5059;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5060;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5061;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5062;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5063;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5064;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5065;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5066;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5067;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5068;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5069;
        VlWide<3>/*79:0*/ __VdfgRegularize_h6e95ff9d_0_5070;
        VL_IN64(in_data,43,0);
        VL_IN64(in_op,47,0);
        VL_OUT64(out_partial_data,47,0);
        QData/*39:0*/ __PVT__di_aligned_mant;
        QData/*41:0*/ __PVT__mant_sum_trans;
        QData/*39:0*/ __PVT__oi_aligned_mant;
        QData/*39:0*/ __PVT__partial_result_mant;
        QData/*47:0*/ __PVT__in_mask_op;
        QData/*40:0*/ __PVT__mant_sum;
        QData/*40:0*/ __PVT__mant_sum_round;
        QData/*44:0*/ __PVT__mant_sum_scmp;
        QData/*38:0*/ __PVT__partial_mant_abs;
        QData/*40:0*/ __PVT__partial_mant_nmlz_tmp;
        QData/*47:0*/ __PVT__partial_result;
        QData/*35:0*/ __PVT__u0_dw_lsd__DOT__dec;
        QData/*35:0*/ __PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
        QData/*43:0*/ __PVT__u1_dw_lsd__DOT__a;
        QData/*43:0*/ __PVT__u1_dw_lsd__DOT__dec;
        QData/*43:0*/ __PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_NV_NVDLA_CACC_CALC_fp_48b(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_NV_NVDLA_CACC_CALC_fp_48b();
    VL_UNCOPYABLE(Vsim_NV_NVDLA_CACC_CALC_fp_48b);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
