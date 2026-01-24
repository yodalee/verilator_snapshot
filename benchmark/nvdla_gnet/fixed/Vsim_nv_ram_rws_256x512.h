// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_RAM_RWS_256X512_H_
#define VERILATED_VSIM_NV_RAM_RWS_256X512_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_RAMPDP_256X144_GL_M2_D2;
class Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1;
class Vsim_ScanShareSel_JTAG_reg_ext_cg__pi3;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_nv_ram_rws_256x512 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_RAMPDP_256X144_GL_M2_D2* __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_0;
    Vsim_RAMPDP_256X144_GL_M2_D2* __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_144;
    Vsim_RAMPDP_256X144_GL_M2_D2* __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X144_0_288;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1* __PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi1* __PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi3* __PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi3* __PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(ra,7,0);
        VL_IN8(re,0,0);
        VL_IN8(wa,7,0);
        VL_IN8(we,0,0);
        CData/*0:0*/ __PVT__SO_int_net;
        CData/*0:0*/ __PVT__mbist_ramaccess_rst_;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x512__DOT__Ra_array_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ctx_ctrl_we;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__shiftDR_en;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__mbist_ce_r0_0_0_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_FF;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WADR;
        CData/*7:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RD_rdnt;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1;
        CData/*6:0*/ r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire;
        CData/*0:0*/ __PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        CData/*6:0*/ __VdlyDim0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0;
    };
    struct {
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        CData/*6:0*/ __VdlyDim0__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0;
        VL_OUTW(dout,511,0,16);
        VL_INW(di,511,0,16);
        VL_IN(pwrbus_ram_pd,31,0);
        VlWide<16>/*511:0*/ __PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net;
        VlWide<16>/*511:0*/ __PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B;
        VlWide<16>/*511:0*/ __PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0;
        VlWide<16>/*511:0*/ __PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0;
        VlWide<3>/*79:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WDQ_pr;
        VlWide<3>/*79:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__dout;
        VlWide<3>/*79:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0;
        VlWide<3>/*79:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1;
        IData/*31:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__i;
        IData/*31:0*/ __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__i;
        VlWide<3>/*79:0*/ __VdlyVal__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        VlWide<3>/*79:0*/ __VdlyVal__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0;
        VlUnpacked<VlWide<3>/*79:0*/, 128> __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr;
        VlUnpacked<VlWide<3>/*79:0*/, 128> __PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_nv_ram_rws_256x512(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_nv_ram_rws_256x512();
    VL_UNCOPYABLE(Vsim_nv_ram_rws_256x512);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
