// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_NVDLA_CACC_CALC_INT16_H_
#define VERILATED_VSIM_NV_NVDLA_CACC_CALC_INT16_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_NV_NVDLA_CACC_CALC_int16 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(nvdla_core_clk,0,0);
        VL_IN8(nvdla_core_rstn,0,0);
        VL_IN8(cfg_truncate,4,0);
        VL_IN8(in_op_valid,0,0);
        VL_IN8(in_sel,0,0);
        VL_IN8(in_valid,0,0);
        VL_OUT8(out_final_sat,0,0);
        VL_OUT8(out_final_valid,0,0);
        VL_OUT8(out_partial_valid,0,0);
        CData/*0:0*/ __PVT__di_sign_d;
        CData/*0:0*/ __PVT__i_sat_sel;
        CData/*0:0*/ __PVT__i_sat_vld;
        CData/*0:0*/ __PVT__in_hsb_same_d;
        CData/*0:0*/ __PVT__oi_sign_d;
        CData/*0:0*/ __PVT__i_final_vld;
        CData/*0:0*/ __PVT__i_partial_vld;
        CData/*0:0*/ __PVT__i_point5;
        CData/*0:0*/ __PVT__i_sft_need_sat;
        CData/*0:0*/ __PVT__in_hsb_same;
        VL_OUT(out_final_data,31,0);
        IData/*16:0*/ __PVT__i_hsum_pd;
        VL_IN64(in_data,37,0);
        VL_IN64(in_op,47,0);
        VL_OUT64(out_partial_data,47,0);
        QData/*32:0*/ __PVT__i_lsum_pd;
        QData/*32:0*/ __PVT__i_lsum_pd_nxt;
        QData/*47:0*/ __PVT__i_partial_result;
        QData/*47:0*/ __PVT__in_mask_op;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4608;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4609;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4610;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4611;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4612;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4613;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4614;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4615;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4616;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4617;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4618;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4619;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4620;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4621;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4622;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4623;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4624;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4625;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4626;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4627;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4628;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4629;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4630;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4631;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4632;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4633;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4634;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4635;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4636;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4637;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4638;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4639;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4640;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4641;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4642;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4643;
    };
    struct {
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4644;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4645;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4646;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4647;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4648;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4649;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4650;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4651;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4652;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4653;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4654;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4655;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4656;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4657;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4658;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4659;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4660;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4661;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4662;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4663;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4664;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4665;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4666;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4667;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4668;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4669;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4670;
        QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_4671;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_NV_NVDLA_CACC_CALC_int16(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_NV_NVDLA_CACC_CALC_int16();
    VL_UNCOPYABLE(Vsim_NV_NVDLA_CACC_CALC_int16);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
