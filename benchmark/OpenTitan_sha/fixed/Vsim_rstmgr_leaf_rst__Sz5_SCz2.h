// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_RSTMGR_LEAF_RST__SZ5_SCZ2_H_
#define VERILATED_VSIM_RSTMGR_LEAF_RST__SZ5_SCZ2_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_prim_flop_2sync__W1;
class Vsim_prim_mubi4_sync__A0;
class Vsim_prim_sync_reqack;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_rstmgr_leaf_rst__Sz5_SCz2 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_prim_mubi4_sync__A0* __PVT__u_scanmode_sync;
    Vsim_prim_flop_2sync__W1* __PVT__u_rst_sync;
    Vsim_prim_sync_reqack* __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_handshake;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(leaf_clk_i,0,0);
    VL_IN8(parent_rst_ni,0,0);
    VL_IN8(sw_rst_req_ni,0,0);
    VL_IN8(scanmode_i,3,0);
    VL_IN8(scan_rst_ni,0,0);
    VL_OUT8(rst_en_o,3,0);
    VL_OUT8(leaf_rst_o,0,0);
    VL_OUT8(err_o,0,0);
    VL_OUT8(fsm_err_o,0,0);
    CData/*0:0*/ __Vcellinp__u_rst_mux__sel_i;
    CData/*0:0*/ __PVT__sw_rst_req_q;
    CData/*0:0*/ __PVT__clr_sw_rst_req;
    CData/*3:0*/ __PVT__u_prim_mubi4_sender__DOT__mubi_int;
    CData/*0:0*/ __PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__rst_sync;
    CData/*0:0*/ gen_rst_chk__DOT__u_prim_rst_sync__DOT____Vcellinp__g_scan_mux__DOT__u_scan_mux__sel_i;
    CData/*0:0*/ __PVT__gen_rst_chk__DOT__u_prim_rst_sync__DOT__u_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
    CData/*0:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__parent_rst_asserted;
    CData/*0:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__child_rst_asserted;
    CData/*0:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_parent_rst;
    CData/*0:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__sync_child_rst;
    CData/*5:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__state_d;
    CData/*0:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__timeout;
    CData/*0:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_inc;
    CData/*0:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt_clr;
    CData/*1:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__cnt;
    CData/*0:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__src_valid;
    CData/*0:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_parent_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
    CData/*0:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_child_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq;
    CData/*5:0*/ __PVT__gen_rst_chk__DOT__u_rst_chk__DOT__u_state_regs__DOT__state_raw;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_rstmgr_leaf_rst__Sz5_SCz2(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_rstmgr_leaf_rst__Sz5_SCz2();
    VL_UNCOPYABLE(Vsim_rstmgr_leaf_rst__Sz5_SCz2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
