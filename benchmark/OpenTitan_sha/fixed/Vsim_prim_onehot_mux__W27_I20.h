// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_ONEHOT_MUX__W27_I20_H_
#define VERILATED_VSIM_PRIM_ONEHOT_MUX__W27_I20_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_onehot_mux__W27_I20 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_1264;
        CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_1265;
        VL_IN(sel_i,31,0);
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__1__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__1__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__2__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__2__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__3__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__3__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__4__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__4__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__5__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__5__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__6__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__6__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__7__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__7__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__8__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__8__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__9__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__9__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__10__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__10__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__11__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__11__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__12__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__12__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__13__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__13__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__14__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__14__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__15__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__15__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__16__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__16__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__17__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__17__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__18__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__18__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__19__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__19__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__20__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__20__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__21__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__21__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__22__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__22__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__23__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__23__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__24__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__24__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__25__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__25__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__26__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__26__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__27__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__27__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__28__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__28__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
    };
    struct {
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__29__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__29__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__30__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__30__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__31__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__31__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__32__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__32__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__33__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__33__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__34__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__34__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__35__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__35__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__36__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__36__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__37__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__37__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__38__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i;
        IData/*31:0*/ __PVT__g_in_mux_outer__BRA__38__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o;
        VL_OUT64(out_o,38,0);
        VL_IN64(in_i[32],38,0);
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_onehot_mux__W27_I20(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_onehot_mux__W27_I20();
    VL_UNCOPYABLE(Vsim_prim_onehot_mux__W27_I20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
