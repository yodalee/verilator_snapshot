// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_REG_CDC__D5_RZ30_BZ7_H_
#define VERILATED_VSIM_PRIM_REG_CDC__D5_RZ30_BZ7_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_prim_flop_2sync__W1;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_reg_cdc__D5_Rz30_Bz7 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_prim_flop_2sync__W1* __PVT__u_src_to_dst_req__DOT__prim_flop_2sync;
    Vsim_prim_flop_2sync__W1* __PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__prim_flop_2sync;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_src_i,0,0);
    VL_IN8(rst_src_ni,0,0);
    VL_IN8(clk_dst_i,0,0);
    VL_IN8(rst_dst_ni,0,0);
    VL_IN8(src_regwen_i,0,0);
    VL_IN8(src_we_i,0,0);
    VL_IN8(src_re_i,0,0);
    VL_IN8(src_wd_i,4,0);
    VL_OUT8(src_busy_o,0,0);
    VL_OUT8(src_qs_o,4,0);
    VL_IN8(dst_ds_i,4,0);
    VL_IN8(dst_qs_i,4,0);
    VL_IN8(dst_update_i,0,0);
    VL_OUT8(dst_we_o,0,0);
    VL_OUT8(__PVT__dst_re_o,0,0);
    VL_OUT8(dst_regwen_o,0,0);
    VL_OUT8(dst_wd_o,4,0);
    CData/*0:0*/ __PVT__src_ack;
    CData/*0:0*/ __PVT__src_busy_q;
    CData/*4:0*/ __PVT__src_q;
    CData/*2:0*/ __PVT__txn_bits_q;
    CData/*0:0*/ __PVT__dst_to_src;
    CData/*0:0*/ __PVT__dst_req_from_src;
    CData/*0:0*/ __PVT__u_src_to_dst_req__DOT__src_level;
    CData/*0:0*/ __PVT__u_src_to_dst_req__DOT__dst_level_q;
    CData/*0:0*/ __PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level;
    CData/*0:0*/ __PVT__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__dst_level_q;
    CData/*0:0*/ __Vdly__u_arb__DOT__gen_passthru__DOT__u_dst_to_src_ack__DOT__src_level;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_reg_cdc__D5_Rz30_Bz7(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_reg_cdc__D5_Rz30_Bz7();
    VL_UNCOPYABLE(Vsim_prim_reg_cdc__D5_Rz30_Bz7);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
