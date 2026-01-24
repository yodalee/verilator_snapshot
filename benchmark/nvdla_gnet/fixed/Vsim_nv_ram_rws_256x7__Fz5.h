// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_RAM_RWS_256X7__FZ5_H_
#define VERILATED_VSIM_NV_RAM_RWS_256X7__FZ5_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1;
class Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_nv_ram_rws_256x7__Fz5 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1* __PVT__r_nv_ram_rws_256x7__DOT__testInst_Wa_reg_w0;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1* __PVT__r_nv_ram_rws_256x7__DOT__testInst_Ra_reg_r0;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* __PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(ra,7,0);
        VL_IN8(re,0,0);
        VL_OUT8(dout,6,0);
        VL_IN8(wa,7,0);
        VL_IN8(we,0,0);
        VL_IN8(di,6,0);
        CData/*0:0*/ __PVT__SO_int_net;
        CData/*0:0*/ __PVT__mbist_ramaccess_rst_;
        CData/*6:0*/ __PVT__r_nv_ram_rws_256x7__DOT__mbist_Do_r0_int_net;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__dft_rst_gated_clk;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x7__DOT__Ra_array_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ctx_ctrl_we;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__shiftDR_en;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__posedge_updateDR_sync;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x7__DOT__pre_Wa_reg_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__muxed_we_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__we_q;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x7__DOT__pre_Ra_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__access_en_r;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__muxed_re_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__re_q;
        CData/*0:0*/ r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_0;
        CData/*0:0*/ r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_1;
        CData/*0:0*/ r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_2;
        CData/*0:0*/ r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_3;
        CData/*0:0*/ r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_4;
        CData/*0:0*/ r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_5;
        CData/*0:0*/ r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_6;
        CData/*6:0*/ __PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__mbist_ce_r0_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_gate_core__DOT__qd;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__RA;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WA;
        CData/*6:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__we_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat;
        CData/*6:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wd_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__re_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat;
        CData/*6:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__bitclk;
        CData/*6:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr;
        CData/*6:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff;
        CData/*6:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff_clk;
        CData/*6:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
        CData/*6:0*/ __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__testInst_re_reg_r0__DOT__clk_wire;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0;
        CData/*7:0*/ __VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1;
        CData/*7:0*/ __VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1;
    };
    struct {
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2;
        CData/*7:0*/ __VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3;
        CData/*7:0*/ __VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4;
        CData/*7:0*/ __VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5;
        CData/*7:0*/ __VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6;
        CData/*7:0*/ __VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6;
        VL_IN(pwrbus_ram_pd,31,0);
        VlUnpacked<CData/*6:0*/, 256> __PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_nv_ram_rws_256x7__Fz5(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_nv_ram_rws_256x7__Fz5();
    VL_UNCOPYABLE(Vsim_nv_ram_rws_256x7__Fz5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
