// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_RAM_RWSP_80X514__FZ5_H_
#define VERILATED_VSIM_NV_RAM_RWSP_80X514__FZ5_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25;
class Vsim_ScanShareSel_JTAG_reg_ext_cg__pi3;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_nv_ram_rwsp_80x514__Fz5 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* __PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* __PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi3* __PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi3* __PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(ra,6,0);
        VL_IN8(re,0,0);
        VL_IN8(ore,0,0);
        VL_IN8(wa,6,0);
        VL_IN8(we,0,0);
        CData/*0:0*/ __PVT__SO_int_net;
        CData/*0:0*/ __PVT__mbist_ramaccess_rst_;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__dft_rst_gated_clk;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__Ra_array_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ctx_ctrl_we;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__shiftDR_en;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__posedge_updateDR_sync;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__pre_Wa_reg_w0;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__muxed_we_w0_0_0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__we_0_0_q;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__muxed_we_w0_0_288;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__we_0_288_q;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__pre_Ra_reg_r0;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__access_en_r_0_0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__access_en_r_0_288;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__muxed_re_r0_0_0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__re_0_0_q;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__muxed_re_r0_0_288;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__re_0_288_q;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__mbist_ce_r0_0_0_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_gate_core_0_0__DOT__E;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_gate_core_0_0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_gate_core_0_288__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RE_LATB;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RE_FF;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WE_LATB;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WE_FF;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WADR;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WAFF;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WRDCLK;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WECLK;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__ADR;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RD_rdnt0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RD_rdnt1;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WrClk0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RE_LATB;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RE_FF;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WE_LATB;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WE_FF;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WADR;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WAFF;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__latffclk;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WRDCLK;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADRCLK;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RECLK;
    };
    struct {
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WECLK;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__ADR;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RD_rdnt0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RD_rdnt1;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WrClk0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire;
        CData/*0:0*/ r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
        CData/*6:0*/ __VdlyDim0__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        CData/*0:0*/ __VdlySet__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        CData/*6:0*/ __VdlyDim0__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        CData/*0:0*/ __VdlySet__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        VL_OUTW(dout,513,0,17);
        VL_INW(di,513,0,17);
        VL_IN(pwrbus_ram_pd,31,0);
        VlWide<17>/*513:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B;
        VlWide<17>/*513:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0;
        VlWide<9>/*287:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WDQ_pr;
        VlWide<9>/*287:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__dout;
        VlWide<9>/*287:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0;
        IData/*31:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__i;
        VlWide<9>/*287:0*/ r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h42cbd457__0;
        VlWide<8>/*225:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WDQ_pr;
        VlWide<8>/*225:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__dout;
        VlWide<8>/*225:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0;
        IData/*31:0*/ __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__i;
        VlWide<8>/*225:0*/ r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h132e63f1__0;
        VlWide<9>/*287:0*/ __VdlyVal__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        VlWide<8>/*225:0*/ __VdlyVal__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        VlUnpacked<VlWide<9>/*287:0*/, 80> __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr;
        VlUnpacked<VlWide<8>/*225:0*/, 80> __PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_nv_ram_rwsp_80x514__Fz5(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_nv_ram_rwsp_80x514__Fz5();
    VL_UNCOPYABLE(Vsim_nv_ram_rwsp_80x514__Fz5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
