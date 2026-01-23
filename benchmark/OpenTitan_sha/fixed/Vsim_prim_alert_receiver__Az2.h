// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_ALERT_RECEIVER__AZ2_H_
#define VERILATED_VSIM_PRIM_ALERT_RECEIVER__AZ2_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_prim_diff_decode__Az5;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_alert_receiver__Az2 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_prim_diff_decode__Az5* __PVT__u_decode_alert;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(init_trig_i,3,0);
        VL_IN8(ping_req_i,0,0);
        VL_OUT8(ping_ok_o,0,0);
        VL_OUT8(integ_fail_o,0,0);
        VL_OUT8(alert_o,0,0);
        VL_OUT8(alert_rx_o,3,0);
        VL_IN8(alert_tx_i,1,0);
        CData/*2:0*/ __PVT__state_d;
        CData/*2:0*/ __PVT__state_q;
        CData/*0:0*/ __PVT__ping_rise;
        CData/*0:0*/ __PVT__ping_tog_pd;
        CData/*0:0*/ __PVT__ack_pd;
        CData/*0:0*/ __PVT__ping_req_q;
        CData/*0:0*/ __PVT__ping_pending_d;
        CData/*0:0*/ __PVT__ping_pending_q;
        CData/*0:0*/ __PVT__send_init;
        CData/*0:0*/ __PVT__send_ping;
        CData/*1:0*/ __Vcellout__u_prim_generic_flop_ack__q_o;
        CData/*1:0*/ __Vcellout__u_prim_generic_flop_ping__q_o;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__0__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__0__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__1__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__1__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__2__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__2__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__3__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__3__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__4__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__4__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__5__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__5__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__6__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__6__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__7__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__7__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__8__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__8__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__9__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__9__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__10__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__10__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__11__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__11__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__12__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__12__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__13__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__13__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__14__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__14__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__15__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__15__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__16__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__16__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__17__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__17__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__18__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__18__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__19__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__19__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__20__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__20__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__21__Vfuncout;
    };
    struct {
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__21__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__22__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__22__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__23__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__23__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__24__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__24__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__25__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__25__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__26__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__26__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__27__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__27__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__28__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__28__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__29__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__29__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__30__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__30__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__31__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__31__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__32__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__32__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__33__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__33__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__34__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__34__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__35__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__35__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__36__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__36__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__37__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__37__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__38__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__38__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__39__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__39__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__40__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__40__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__41__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__41__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__42__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__42__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__43__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__43__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__44__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__44__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__45__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__45__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__46__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__46__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__47__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__47__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__48__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__48__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__49__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__49__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__50__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__50__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__51__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__51__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__52__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__52__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__53__Vfuncout;
    };
    struct {
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__53__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__54__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__54__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__55__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__55__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__56__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__56__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__57__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__57__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__58__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__58__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__59__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__59__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__60__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__60__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__61__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__61__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__62__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__62__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__63__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__63__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__64__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__64__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__65__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__65__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__66__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__66__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__67__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__67__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__68__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__68__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__69__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__69__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__70__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__70__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__71__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__71__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__72__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__72__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__73__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__73__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__74__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__74__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__75__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__75__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__76__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__76__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__77__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__77__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__78__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__78__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__79__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__79__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__80__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__80__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__81__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__81__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__82__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__82__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__83__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__83__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__84__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__84__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__85__Vfuncout;
    };
    struct {
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__85__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__86__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__86__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__87__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__87__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__88__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__88__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__89__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__89__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__90__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__90__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__91__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__91__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__92__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__92__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__93__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__93__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__94__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__94__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__95__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__95__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__96__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__96__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__97__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__97__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__98__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__98__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__99__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__99__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__100__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__100__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__101__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__101__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__102__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__102__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__103__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__103__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__104__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__104__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__105__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__105__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__106__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__106__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__107__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__107__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__108__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__108__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__109__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__109__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__110__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__110__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__111__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__111__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__112__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__112__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__113__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__113__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__114__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__114__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__115__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__115__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__116__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__116__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__117__Vfuncout;
    };
    struct {
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__117__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__118__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__118__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__119__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__119__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__120__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__120__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__121__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__121__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__122__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__122__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__123__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__123__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__124__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__124__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__125__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__125__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__126__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__126__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__127__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__127__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__128__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__128__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__129__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__129__val;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_alert_receiver__Az2(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_alert_receiver__Az2();
    VL_UNCOPYABLE(Vsim_prim_alert_receiver__Az2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
