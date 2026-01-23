// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_SYNC_REQACK_H_
#define VERILATED_VSIM_PRIM_SYNC_REQACK_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_prim_flop_2sync__W1;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_sync_reqack final : public VerilatedModule {
  public:
    // CELLS
    Vsim_prim_flop_2sync__W1* __PVT__gen_nrz_hs_protocol__DOT__req_sync;
    Vsim_prim_flop_2sync__W1* __PVT__gen_nrz_hs_protocol__DOT__ack_sync;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_src_i,0,0);
    VL_IN8(rst_src_ni,0,0);
    VL_IN8(clk_dst_i,0,0);
    VL_IN8(rst_dst_ni,0,0);
    VL_IN8(req_chk_i,0,0);
    VL_IN8(src_req_i,0,0);
    VL_OUT8(src_ack_o,0,0);
    VL_OUT8(dst_req_o,0,0);
    VL_IN8(dst_ack_i,0,0);
    CData/*0:0*/ __PVT__gen_nrz_hs_protocol__DOT__src_fsm_ns;
    CData/*0:0*/ __PVT__gen_nrz_hs_protocol__DOT__src_fsm_cs;
    CData/*0:0*/ __PVT__gen_nrz_hs_protocol__DOT__dst_fsm_ns;
    CData/*0:0*/ __PVT__gen_nrz_hs_protocol__DOT__dst_fsm_cs;
    CData/*0:0*/ __PVT__gen_nrz_hs_protocol__DOT__src_req_q;
    CData/*0:0*/ __PVT__gen_nrz_hs_protocol__DOT__dst_ack_q;
    CData/*0:0*/ __PVT__gen_nrz_hs_protocol__DOT__src_handshake;
    CData/*0:0*/ __PVT__gen_nrz_hs_protocol__DOT__dst_handshake;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_sync_reqack(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_sync_reqack();
    VL_UNCOPYABLE(Vsim_prim_sync_reqack);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
