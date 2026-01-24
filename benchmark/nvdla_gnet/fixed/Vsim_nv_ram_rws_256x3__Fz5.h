// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_RAM_RWS_256X3__FZ5_H_
#define VERILATED_VSIM_NV_RAM_RWS_256X3__FZ5_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_nv_ram_rws_256x3__Fz5 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1* __PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1* __PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(ra,7,0);
        VL_IN8(re,0,0);
        VL_OUT8(dout,2,0);
        VL_IN8(wa,7,0);
        VL_IN8(we,0,0);
        VL_IN8(di,2,0);
        CData/*0:0*/ __PVT__SO_int_net;
        CData/*0:0*/ __PVT__mbist_ramaccess_rst_;
        CData/*3:0*/ __PVT__r_nv_ram_rws_256x3__DOT__mbist_Do_r0_int_net;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__dft_rst_gated_clk;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x3__DOT__Ra_array_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ctx_ctrl_we;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__shiftDR_en;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__posedge_updateDR_sync;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x3__DOT__pre_Wa_reg_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__muxed_we_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__we_q;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x3__DOT__pre_Ra_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__access_en_r;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__muxed_re_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__re_q;
        CData/*3:0*/ __PVT__r_nv_ram_rws_256x3__DOT__muxed_Data_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__mbist_ce_r0_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_gate_core__DOT__qd;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__RA;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WA;
        CData/*3:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__we_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wa_lat;
        CData/*3:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wd_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__re_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__ra_lat;
        CData/*3:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__bitclk;
        CData/*3:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr;
        CData/*3:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff;
        CData/*3:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff_clk;
        CData/*3:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
        CData/*3:0*/ __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__testInst_re_reg_r0__DOT__clk_wire;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT__clk_wire;
        CData/*0:0*/ r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3071;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3072;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3073;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3074;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0;
        CData/*7:0*/ __VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0;
    };
    struct {
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1;
        CData/*7:0*/ __VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2;
        CData/*7:0*/ __VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3;
        CData/*7:0*/ __VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3;
        VL_IN(pwrbus_ram_pd,31,0);
        VlUnpacked<CData/*3:0*/, 256> __PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_nv_ram_rws_256x3__Fz5(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_nv_ram_rws_256x3__Fz5();
    VL_UNCOPYABLE(Vsim_nv_ram_rws_256x3__Fz5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
