// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_NVDLA_RUBIK_FIFO_H_
#define VERILATED_VSIM_NV_NVDLA_RUBIK_FIFO_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25;
class Vsim_ScanShareSel_JTAG_reg_ext_cg__pi3;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_NV_NVDLA_RUBIK_fifo final : public VerilatedModule {
  public:
    // CELLS
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi3* __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Data_reg_r0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(nvdla_core_clk,0,0);
        VL_IN8(nvdla_core_rstn,0,0);
        VL_OUT8(idata_prdy,0,0);
        VL_IN8(idata_pvld,0,0);
        VL_IN8(odata_prdy,0,0);
        VL_OUT8(odata_pvld,0,0);
        CData/*0:0*/ __PVT__nvdla_core_clk_mgated;
        CData/*0:0*/ __PVT__wr_reserving;
        CData/*0:0*/ __PVT__idata_pvld_in;
        CData/*0:0*/ __PVT__wr_busy_in;
        CData/*0:0*/ __PVT__idata_busy_next;
        CData/*0:0*/ __PVT__wr_busy_in_int;
        CData/*0:0*/ __PVT__idata_busy_int;
        CData/*0:0*/ __PVT__wr_popping;
        CData/*6:0*/ __PVT__idata_count;
        CData/*6:0*/ __PVT__wr_count_next_no_wr_popping;
        CData/*6:0*/ __PVT__wr_count_next;
        CData/*6:0*/ __PVT__idata_adr;
        CData/*0:0*/ __PVT__rd_enable;
        CData/*0:0*/ __PVT__ore;
        CData/*6:0*/ __PVT__wr_adr_next;
        CData/*6:0*/ __PVT__odata_adr;
        CData/*6:0*/ __PVT__rd_adr_next;
        CData/*0:0*/ __PVT__rd_pushing;
        CData/*0:0*/ __PVT__odata_pvld_p;
        CData/*0:0*/ __PVT__odata_pvld_int;
        CData/*6:0*/ __PVT__odata_count_p;
        CData/*6:0*/ __PVT__rd_count_p_next_rd_popping;
        CData/*6:0*/ __PVT__rd_count_p_next_no_rd_popping;
        CData/*0:0*/ __PVT__rd_count_p_next_not_0;
        CData/*0:0*/ __VdfgRegularize_h8709d9ae_0_0;
        CData/*0:0*/ __PVT__nvdla_core_clk_mgate__DOT__disable_asserts;
        CData/*0:0*/ __PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
        CData/*0:0*/ __PVT__ram__DOT__SO_int_net;
        CData/*0:0*/ __PVT__ram__DOT__mbist_ramaccess_rst_;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__dft_rst_gated_clk;
        CData/*6:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__Ra_array_reg_r0;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ctx_ctrl_we;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__shiftDR_en;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__posedge_updateDR_sync;
        CData/*6:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Wa_reg_w0;
        CData/*6:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_we_w0;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__we_q;
        CData/*6:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Ra_reg_r0;
        CData/*6:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__access_en_r;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_re_r0;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__re_q;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__mbist_ce_r0_1p;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_gate_core__DOT__qd;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RE_LATB;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RE_FF;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_LATB;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_FF;
        CData/*6:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR;
        CData/*6:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WADR;
    };
    struct {
        CData/*6:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WAFF;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WRDCLK;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK;
        CData/*6:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RD_rdnt0;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RD_rdnt1;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WrClk0;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_re_reg_r0__DOT__clk_wire;
        CData/*0:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        CData/*0:0*/ __Vdly__idata_pvld_in;
        CData/*6:0*/ __VdlyDim0__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        CData/*0:0*/ __VdlySet__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        VL_INW(idata_pd,255,0,8);
        VL_OUTW(odata_pd,255,0,8);
        VL_IN(pwrbus_ram_pd,31,0);
        VlWide<8>/*255:0*/ __PVT__idata_pd_in;
        VlWide<8>/*255:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr;
        VlWide<8>/*255:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__dout;
        VlWide<8>/*255:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0;
        IData/*31:0*/ __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__i;
        VlWide<8>/*255:0*/ ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0;
        VlWide<8>/*255:0*/ __VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0;
        QData/*32:0*/ __PVT__prand_inst0__Vstatic__diff;
        QData/*32:0*/ __PVT__prand_inst1__Vstatic__diff;
        VlUnpacked<VlWide<8>/*255:0*/, 80> __PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_NV_NVDLA_RUBIK_fifo(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_NV_NVDLA_RUBIK_fifo();
    VL_UNCOPYABLE(Vsim_NV_NVDLA_RUBIK_fifo);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
