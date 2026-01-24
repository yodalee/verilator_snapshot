// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_RAM_RWS_64X116_H_
#define VERILATED_VSIM_NV_RAM_RWS_64X116_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_nv_ram_rws_64x116 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(ra,5,0);
        VL_IN8(re,0,0);
        VL_IN8(wa,5,0);
        VL_IN8(we,0,0);
        CData/*0:0*/ __PVT__SO_int_net;
        CData/*0:0*/ __PVT__mbist_ramaccess_rst_;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__re;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__dft_rst_gated_clk;
        CData/*5:0*/ __PVT__r_nv_ram_rws_64x116__DOT__Ra_array_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ctx_ctrl_we;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__shiftDR_en;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync;
        CData/*5:0*/ __PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0;
        CData/*5:0*/ __PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__we_q;
        CData/*5:0*/ __PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0;
        CData/*5:0*/ __PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__access_en_r;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__re_q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__mbist_ce_r0_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd;
        CData/*6:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__RA;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_FF;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF;
        CData/*6:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR;
        CData/*6:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WADR;
        CData/*6:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WRDCLK;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RD_rdnt0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RD_rdnt1;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WrClk0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT__clk_wire;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT__clk_wire;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
    };
    struct {
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q;
    };
    struct {
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q;
        CData/*5:0*/ __VdlyDim0__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        VL_OUTW(dout,115,0,4);
        VL_INW(di,115,0,4);
        VL_IN(pwrbus_ram_pd,31,0);
        VlWide<4>/*115:0*/ __PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net;
        VlWide<4>/*115:0*/ __PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0;
        VlWide<4>/*115:0*/ __PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0;
        VlWide<4>/*115:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WDQ_pr;
        VlWide<4>/*115:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout;
        VlWide<4>/*115:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0;
        IData/*31:0*/ __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__i;
        VlWide<4>/*115:0*/ __VdlyVal__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        VlUnpacked<VlWide<4>/*115:0*/, 64> __PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_nv_ram_rws_64x116(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_nv_ram_rws_64x116();
    VL_UNCOPYABLE(Vsim_nv_ram_rws_64x116);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
