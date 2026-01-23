// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_TLUL_SOCKET_M1__PI53_H_
#define VERILATED_VSIM_TLUL_SOCKET_M1__PI53_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_tlul_fifo_sync__RCz112_RDz112;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_tlul_socket_m1__pi53 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_tlul_fifo_sync__RCz112_RDz112* __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vsim_tlul_fifo_sync__RCz112_RDz112* __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        CData/*0:0*/ __PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d;
        CData/*0:0*/ __PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q;
        CData/*0:0*/ __PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_d;
        CData/*0:0*/ __PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q;
        CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i;
        CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o;
        CData/*0:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o;
        CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req;
        CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
        CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask;
        CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
        VlWide<4>/*108:0*/ __Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o;
        VlWide<4>/*107:0*/ __PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o;
        VlWide<4>/*107:0*/ __PVT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage;
        VlWide<3>/*64:0*/ __PVT__u_devicefifo__DOT__rspfifo__DOT__rdata_o;
        VlWide<3>/*64:0*/ __PVT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__storage;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_499;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_500;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_501;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_502;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_503;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_504;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_505;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_506;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_507;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_508;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_509;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_510;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_511;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_512;
        VlWide<4>/*107:0*/ __VdfgRegularize_h6e95ff9d_0_1270;
        VlWide<4>/*107:0*/ __VdfgRegularize_h6e95ff9d_0_1277;
        VlWide<4>/*107:0*/ __VdfgRegularize_h6e95ff9d_0_1280;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1396;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1397;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1398;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1399;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1400;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1401;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1402;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1403;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1404;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1405;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1406;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1407;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1408;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1409;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1410;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1411;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1412;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1413;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1414;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1415;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1416;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1417;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1418;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1419;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1420;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1421;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1422;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1423;
    };
    struct {
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1739;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1742;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1743;
        IData/*22:0*/ __VdfgRegularize_h6e95ff9d_0_1753;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1756;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1762;
        VlWide<3>/*64:0*/ __VdfgRegularize_h6e95ff9d_0_1763;
        VL_OUTW(tl_d_o,108,0,4);
        VL_INW(tl_d_i,65,0,3);
        QData/*62:0*/ __VdfgRegularize_hc7c2fcdb_0_2;
        VL_INW(tl_h_i[2],108,0,4);
        VL_OUTW(tl_h_o[2],65,0,3);
        VlUnpacked<VlWide<4>/*108:0*/, 2> __PVT__hreq_fifo_o;
        VlUnpacked<VlWide<3>/*65:0*/, 2> __PVT__hrsp_fifo_i;
        VlUnpacked<VlWide<4>/*108:0*/, 2> __Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i;
        VlUnpacked<VlWide<4>/*108:0*/, 2> __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_tlul_socket_m1__pi53(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_tlul_socket_m1__pi53();
    VL_UNCOPYABLE(Vsim_tlul_socket_m1__pi53);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
