// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_RAM_RWSP_128X6__FZ5_H_
#define VERILATED_VSIM_NV_RAM_RWSP_128X6__FZ5_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_nv_ram_rwsp_128x6__Fz5 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* __PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* __PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(ra,6,0);
        VL_IN8(re,0,0);
        VL_IN8(ore,0,0);
        VL_OUT8(dout,5,0);
        VL_IN8(wa,6,0);
        VL_IN8(we,0,0);
        VL_IN8(di,5,0);
        CData/*0:0*/ __PVT__SO_int_net;
        CData/*0:0*/ __PVT__mbist_ramaccess_rst_;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__dft_rst_gated_clk;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__Ra_array_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ctx_ctrl_we;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__shiftDR_en;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__pre_Wa_reg_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__we_q;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__pre_Ra_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__re_q;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__dout_0_0;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_0;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_1;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_2;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_3;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_4;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_5;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__mbist_ce_r0_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WD;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__bitclk;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__testInst_re_reg_r0__DOT__clk_wire;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT__clk_wire;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
    };
    struct {
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0;
        CData/*6:0*/ __VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0;
        CData/*0:0*/ __VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1;
        CData/*6:0*/ __VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1;
        CData/*0:0*/ __VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2;
        CData/*6:0*/ __VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2;
        CData/*0:0*/ __VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3;
        CData/*6:0*/ __VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3;
        CData/*0:0*/ __VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4;
        CData/*6:0*/ __VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4;
        CData/*0:0*/ __VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5;
        CData/*6:0*/ __VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5;
        CData/*0:0*/ __VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5;
        VL_IN(pwrbus_ram_pd,31,0);
        VlUnpacked<CData/*5:0*/, 128> __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_nv_ram_rwsp_128x6__Fz5(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_nv_ram_rwsp_128x6__Fz5();
    VL_UNCOPYABLE(Vsim_nv_ram_rwsp_128x6__Fz5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
