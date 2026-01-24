// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_NVDLA_CACC_CALC_INT8_H_
#define VERILATED_VSIM_NV_NVDLA_CACC_CALC_INT8_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_NV_NVDLA_CACC_CALC_int8 final : public VerilatedModule {
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
        CData/*0:0*/ __PVT__i_sat_sel;
        CData/*0:0*/ __PVT__i_sat_vld;
        CData/*0:0*/ __PVT__i_final_vld;
        CData/*0:0*/ __PVT__i_partial_vld;
        CData/*0:0*/ __PVT__i_point5;
        CData/*0:0*/ __PVT__i_sft_need_sat;
        VL_IN(in_data,21,0);
        VL_OUT(out_final_data,31,0);
        VL_IN64(in_op,33,0);
        VL_OUT64(out_partial_data,33,0);
        QData/*34:0*/ __PVT__i_sum_pd;
        QData/*33:0*/ __PVT__i_partial_result;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4672;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4673;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4674;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4675;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4676;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4677;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4678;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4679;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4680;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4681;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4682;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4683;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4684;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4685;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4686;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4687;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4688;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4689;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4690;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4691;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4692;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4693;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4694;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4695;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4696;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4697;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4698;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4699;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4700;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4701;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4702;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4703;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4704;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4705;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4706;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4707;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4708;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4709;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4710;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4711;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4712;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4713;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4714;
    };
    struct {
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4715;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4716;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4717;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4718;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4719;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4720;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4721;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4722;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4723;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4724;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4725;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4726;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4727;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4728;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4729;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4730;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4731;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4732;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4733;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4734;
        QData/*49:0*/ __VdfgRegularize_h6e95ff9d_0_4735;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_NV_NVDLA_CACC_CALC_int8(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_NV_NVDLA_CACC_CALC_int8();
    VL_UNCOPYABLE(Vsim_NV_NVDLA_CACC_CALC_int8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
