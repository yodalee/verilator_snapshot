// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_ALERT_SENDER__IZ2_H_
#define VERILATED_VSIM_PRIM_ALERT_SENDER__IZ2_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_prim_diff_decode__Az5;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_alert_sender__Iz2 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_prim_diff_decode__Az5* __PVT__u_decode_ping;
    Vsim_prim_diff_decode__Az5* __PVT__u_decode_ack;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(alert_test_i,0,0);
    VL_IN8(alert_req_i,0,0);
    VL_OUT8(alert_ack_o,0,0);
    VL_OUT8(__PVT__alert_state_o,0,0);
    VL_IN8(alert_rx_i,3,0);
    VL_OUT8(alert_tx_o,1,0);
    CData/*2:0*/ __PVT__state_d;
    CData/*2:0*/ __PVT__state_q;
    CData/*0:0*/ __PVT__alert_pd;
    CData/*0:0*/ __PVT__alert_nd;
    CData/*0:0*/ __PVT__alert_set_d;
    CData/*0:0*/ __PVT__alert_set_q;
    CData/*0:0*/ __PVT__alert_clr;
    CData/*0:0*/ __PVT__alert_test_set_q;
    CData/*0:0*/ __PVT__ping_set_q;
    CData/*0:0*/ __PVT__ping_clr;
    CData/*0:0*/ __PVT__alert_test_trigger;
    CData/*0:0*/ __PVT__ping_trigger;
    CData/*0:0*/ __PVT__alert_trigger;
    CData/*1:0*/ __Vcellout__u_prim_flop_alert__q_o;
    CData/*0:0*/ __PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_alert_sender__Iz2(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_alert_sender__Iz2();
    VL_UNCOPYABLE(Vsim_prim_alert_sender__Iz2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
