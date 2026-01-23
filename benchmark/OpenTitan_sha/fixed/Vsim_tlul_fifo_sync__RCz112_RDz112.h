// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_TLUL_FIFO_SYNC__RCZ112_RDZ112_H_
#define VERILATED_VSIM_TLUL_FIFO_SYNC__RCZ112_RDZ112_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_tlul_fifo_sync__RCz112_RDz112 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(spare_req_i,0,0);
    VL_OUT8(__PVT__spare_req_o,0,0);
    VL_IN8(spare_rsp_i,0,0);
    VL_OUT8(__PVT__spare_rsp_o,0,0);
    CData/*0:0*/ __PVT__reqfifo__DOT__wvalid_i;
    CData/*0:0*/ __PVT__reqfifo__DOT__wready_o;
    CData/*0:0*/ __PVT__rspfifo__DOT__wvalid_i;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_247;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_250;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_1750;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1684;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1689;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1690;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1694;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1695;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1764;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1765;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1147;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1148;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1151;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1152;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1187;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1286;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1287;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1288;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1289;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1290;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1291;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1295;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1296;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1297;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1322;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1323;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1324;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1325;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1326;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1327;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1328;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1329;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1757;
    VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1758;
    VL_INW(tl_h_i,108,0,4);
    VL_OUTW(tl_h_o,65,0,3);
    VL_OUTW(tl_d_o,108,0,4);
    VL_INW(tl_d_i,65,0,3);

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_tlul_fifo_sync__RCz112_RDz112(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_tlul_fifo_sync__RCz112_RDz112();
    VL_UNCOPYABLE(Vsim_tlul_fifo_sync__RCz112_RDz112);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
