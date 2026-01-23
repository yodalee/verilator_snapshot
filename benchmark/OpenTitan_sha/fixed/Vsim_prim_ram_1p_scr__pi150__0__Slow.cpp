// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_ram_1p_scr__pi150___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__tag_bank__0(Vsim_prim_ram_1p_scr__pi150* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi150___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__tag_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0;
    u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0 = 0;
    QData/*63:0*/ gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__2;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__2 = 0;
    QData/*63:0*/ gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__2;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__2 = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__21__Vfuncout;
    __Vfunc_mubi4_test_true_loose__21__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__21__val;
    __Vfunc_mubi4_test_true_loose__21__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__34__Vfuncout;
    __Vfunc_mubi4_test_true_strict__34__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__34__val;
    __Vfunc_mubi4_test_true_strict__34__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__35__Vfuncout;
    __Vfunc_mubi4_and_hi__35__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__35__a;
    __Vfunc_mubi4_and_hi__35__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__35__b;
    __Vfunc_mubi4_and_hi__35__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__36__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__36__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__36__val;
    __Vfunc_mubi4_bool_to_mubi__36__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__37__Vfuncout;
    __Vfunc_mubi4_and__37__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__37__a;
    __Vfunc_mubi4_and__37__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__37__b;
    __Vfunc_mubi4_and__37__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__37__a_in;
    __Vfunc_mubi4_and__37__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__37__b_in;
    __Vfunc_mubi4_and__37__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__42__Vfuncout;
    __Vfunc_mubi4_test_true_loose__42__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__42__val;
    __Vfunc_mubi4_test_true_loose__42__val = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__85__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__85__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__85__state_in;
    __Vfunc_prince_mult_prime_64bit__85__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__86__Vfuncout;
    __Vfunc_prince_nibble_red16__86__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__86__vect;
    __Vfunc_prince_nibble_red16__86__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__87__Vfuncout;
    __Vfunc_prince_nibble_red16__87__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__87__vect;
    __Vfunc_prince_nibble_red16__87__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__88__Vfuncout;
    __Vfunc_prince_nibble_red16__88__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__88__vect;
    __Vfunc_prince_nibble_red16__88__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__89__Vfuncout;
    __Vfunc_prince_nibble_red16__89__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__89__vect;
    __Vfunc_prince_nibble_red16__89__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__90__Vfuncout;
    __Vfunc_prince_nibble_red16__90__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__90__vect;
    __Vfunc_prince_nibble_red16__90__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__91__Vfuncout;
    __Vfunc_prince_nibble_red16__91__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__91__vect;
    __Vfunc_prince_nibble_red16__91__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__92__Vfuncout;
    __Vfunc_prince_nibble_red16__92__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__92__vect;
    __Vfunc_prince_nibble_red16__92__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__93__Vfuncout;
    __Vfunc_prince_nibble_red16__93__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__93__vect;
    __Vfunc_prince_nibble_red16__93__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__94__Vfuncout;
    __Vfunc_prince_nibble_red16__94__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__94__vect;
    __Vfunc_prince_nibble_red16__94__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__95__Vfuncout;
    __Vfunc_prince_nibble_red16__95__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__95__vect;
    __Vfunc_prince_nibble_red16__95__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__96__Vfuncout;
    __Vfunc_prince_nibble_red16__96__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__96__vect;
    __Vfunc_prince_nibble_red16__96__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__97__Vfuncout;
    __Vfunc_prince_nibble_red16__97__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__97__vect;
    __Vfunc_prince_nibble_red16__97__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__98__Vfuncout;
    __Vfunc_prince_nibble_red16__98__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__98__vect;
    __Vfunc_prince_nibble_red16__98__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__99__Vfuncout;
    __Vfunc_prince_nibble_red16__99__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__99__vect;
    __Vfunc_prince_nibble_red16__99__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__100__Vfuncout;
    __Vfunc_prince_nibble_red16__100__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__100__vect;
    __Vfunc_prince_nibble_red16__100__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__101__Vfuncout;
    __Vfunc_prince_nibble_red16__101__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__101__vect;
    __Vfunc_prince_nibble_red16__101__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__102__Vfuncout;
    __Vfunc_sbox4_64bit__102__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__102__state_in;
    __Vfunc_sbox4_64bit__102__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__103__Vfuncout;
    __Vfunc_sbox4_8bit__103__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__103__state_in;
    __Vfunc_sbox4_8bit__103__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__104__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__104__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__104__state_in;
    __Vfunc_prince_mult_prime_64bit__104__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__105__Vfuncout;
    __Vfunc_prince_nibble_red16__105__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__105__vect;
    __Vfunc_prince_nibble_red16__105__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__106__Vfuncout;
    __Vfunc_prince_nibble_red16__106__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__106__vect;
    __Vfunc_prince_nibble_red16__106__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__107__Vfuncout;
    __Vfunc_prince_nibble_red16__107__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__107__vect;
    __Vfunc_prince_nibble_red16__107__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__108__Vfuncout;
    __Vfunc_prince_nibble_red16__108__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__108__vect;
    __Vfunc_prince_nibble_red16__108__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__109__Vfuncout;
    __Vfunc_prince_nibble_red16__109__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__109__vect;
    __Vfunc_prince_nibble_red16__109__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__110__Vfuncout;
    __Vfunc_prince_nibble_red16__110__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__110__vect;
    __Vfunc_prince_nibble_red16__110__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__111__Vfuncout;
    __Vfunc_prince_nibble_red16__111__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__111__vect;
    __Vfunc_prince_nibble_red16__111__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__112__Vfuncout;
    __Vfunc_prince_nibble_red16__112__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__112__vect;
    __Vfunc_prince_nibble_red16__112__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__113__Vfuncout;
    __Vfunc_prince_nibble_red16__113__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__113__vect;
    __Vfunc_prince_nibble_red16__113__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__114__Vfuncout;
    __Vfunc_prince_nibble_red16__114__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__114__vect;
    __Vfunc_prince_nibble_red16__114__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__115__Vfuncout;
    __Vfunc_prince_nibble_red16__115__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__115__vect;
    __Vfunc_prince_nibble_red16__115__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__116__Vfuncout;
    __Vfunc_prince_nibble_red16__116__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__116__vect;
    __Vfunc_prince_nibble_red16__116__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__117__Vfuncout;
    __Vfunc_prince_nibble_red16__117__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__117__vect;
    __Vfunc_prince_nibble_red16__117__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__118__Vfuncout;
    __Vfunc_prince_nibble_red16__118__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__118__vect;
    __Vfunc_prince_nibble_red16__118__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__119__Vfuncout;
    __Vfunc_prince_nibble_red16__119__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__119__vect;
    __Vfunc_prince_nibble_red16__119__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__120__Vfuncout;
    __Vfunc_prince_nibble_red16__120__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__120__vect;
    __Vfunc_prince_nibble_red16__120__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__121__Vfuncout;
    __Vfunc_sbox4_64bit__121__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__121__state_in;
    __Vfunc_sbox4_64bit__121__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__122__Vfuncout;
    __Vfunc_sbox4_8bit__122__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__122__state_in;
    __Vfunc_sbox4_8bit__122__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__123__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__123__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__123__state_in;
    __Vfunc_prince_mult_prime_64bit__123__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__124__Vfuncout;
    __Vfunc_prince_nibble_red16__124__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__124__vect;
    __Vfunc_prince_nibble_red16__124__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__125__Vfuncout;
    __Vfunc_prince_nibble_red16__125__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__125__vect;
    __Vfunc_prince_nibble_red16__125__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__126__Vfuncout;
    __Vfunc_prince_nibble_red16__126__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__126__vect;
    __Vfunc_prince_nibble_red16__126__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__127__Vfuncout;
    __Vfunc_prince_nibble_red16__127__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__127__vect;
    __Vfunc_prince_nibble_red16__127__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__128__Vfuncout;
    __Vfunc_prince_nibble_red16__128__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__128__vect;
    __Vfunc_prince_nibble_red16__128__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__129__Vfuncout;
    __Vfunc_prince_nibble_red16__129__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__129__vect;
    __Vfunc_prince_nibble_red16__129__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__130__Vfuncout;
    __Vfunc_prince_nibble_red16__130__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__130__vect;
    __Vfunc_prince_nibble_red16__130__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__131__Vfuncout;
    __Vfunc_prince_nibble_red16__131__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__131__vect;
    __Vfunc_prince_nibble_red16__131__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__132__Vfuncout;
    __Vfunc_prince_nibble_red16__132__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__132__vect;
    __Vfunc_prince_nibble_red16__132__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__133__Vfuncout;
    __Vfunc_prince_nibble_red16__133__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__133__vect;
    __Vfunc_prince_nibble_red16__133__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__134__Vfuncout;
    __Vfunc_prince_nibble_red16__134__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__134__vect;
    __Vfunc_prince_nibble_red16__134__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__135__Vfuncout;
    __Vfunc_prince_nibble_red16__135__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__135__vect;
    __Vfunc_prince_nibble_red16__135__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__136__Vfuncout;
    __Vfunc_prince_nibble_red16__136__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__136__vect;
    __Vfunc_prince_nibble_red16__136__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__137__Vfuncout;
    __Vfunc_prince_nibble_red16__137__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__137__vect;
    __Vfunc_prince_nibble_red16__137__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__138__Vfuncout;
    __Vfunc_prince_nibble_red16__138__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__138__vect;
    __Vfunc_prince_nibble_red16__138__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__139__Vfuncout;
    __Vfunc_prince_nibble_red16__139__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__139__vect;
    __Vfunc_prince_nibble_red16__139__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__140__Vfuncout;
    __Vfunc_sbox4_64bit__140__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__140__state_in;
    __Vfunc_sbox4_64bit__140__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__141__Vfuncout;
    __Vfunc_sbox4_8bit__141__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__141__state_in;
    __Vfunc_sbox4_8bit__141__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__146__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__146__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__146__state_in;
    __Vfunc_prince_shiftrows_64bit__146__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__147__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__147__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__147__state_in;
    __Vfunc_prince_shiftrows_64bit__147__state_in = 0;
    // Body
    __Vfunc_mubi4_test_true_loose__21__val = vlSelfRef.__PVT__addr_collision_q;
    __Vfunc_mubi4_test_true_loose__21__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__21__val));
    vlSelfRef.__PVT__wr_collision_o = __Vfunc_mubi4_test_true_loose__21__Vfuncout;
    __Vfunc_mubi4_test_true_loose__42__val = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
    __Vfunc_mubi4_test_true_loose__42__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__42__val));
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_o 
        = __Vfunc_mubi4_test_true_loose__42__Vfuncout;
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram = 0U;
    __Vfunc_mubi4_and_hi__35__b = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
    __Vfunc_mubi4_bool_to_mubi__36__val = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__inst_req_q;
    __Vfunc_mubi4_bool_to_mubi__36__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__36__val)
                                                 ? 6U
                                                 : 9U);
    __Vfunc_mubi4_and_hi__35__a = __Vfunc_mubi4_bool_to_mubi__36__Vfuncout;
    __Vfunc_mubi4_and__37__b = __Vfunc_mubi4_and_hi__35__b;
    __Vfunc_mubi4_and__37__a = __Vfunc_mubi4_and_hi__35__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__37__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14855731366524508792ull);
    __Vfunc_mubi4_and__37__a_in = __Vfunc_mubi4_and__37__a;
    __Vfunc_mubi4_and__37__b_in = __Vfunc_mubi4_and__37__b;
    vlSelfRef.__Vfunc_mubi4_and__37__out = ((0x0cU 
                                             & (IData)(vlSelfRef.__Vfunc_mubi4_and__37__out)) 
                                            | ((2U 
                                                & ((IData)(__Vfunc_mubi4_and__37__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__37__b_in))) 
                                               | (1U 
                                                  & ((IData)(__Vfunc_mubi4_and__37__a_in) 
                                                     | (IData)(__Vfunc_mubi4_and__37__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__37__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__37__out)) 
                                            | (((2U 
                                                 & (((IData)(__Vfunc_mubi4_and__37__a_in) 
                                                     | (IData)(__Vfunc_mubi4_and__37__b_in)) 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (((IData)(__Vfunc_mubi4_and__37__a_in) 
                                                       & (IData)(__Vfunc_mubi4_and__37__b_in)) 
                                                      >> 2U))) 
                                               << 2U));
    __Vfunc_mubi4_and__37__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__37__out;
    __Vfunc_mubi4_and_hi__35__Vfuncout = __Vfunc_mubi4_and__37__Vfuncout;
    __Vfunc_mubi4_test_true_strict__34__val = __Vfunc_mubi4_and_hi__35__Vfuncout;
    __Vfunc_mubi4_test_true_strict__34__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__34__val));
    u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0 
        = __Vfunc_mubi4_test_true_strict__34__Vfuncout;
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_inst 
        = u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0;
    if (vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_inst) {
        vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram 
            = vlSelfRef.u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o;
    }
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
        = (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[3U])) 
            << 0x00000020U) | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[2U])));
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d 
        = (((QData)((IData)((1U & (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0)))) 
            << 0x0000003fU) | ((0x7ffffffffffffffeULL 
                                & (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
                                   >> 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & VL_REDXOR_64(
                                                                             (0x8000000000000002ULL 
                                                                              & vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0)))))));
    __Vfunc_prince_mult_prime_64bit__85__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q;
    vlSelf->__Vfunc_prince_mult_prime_64bit__85__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1808626267249137219ull);
    __Vfunc_prince_nibble_red16__86__vect = (0xe7bdU 
                                             & (IData)(__Vfunc_prince_mult_prime_64bit__85__state_in));
    __Vfunc_prince_nibble_red16__86__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__86__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__86__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__86__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__86__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__86__Vfuncout)));
    __Vfunc_prince_nibble_red16__87__vect = (0xde7bU 
                                             & (IData)(__Vfunc_prince_mult_prime_64bit__85__state_in));
    __Vfunc_prince_nibble_red16__87__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__87__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__87__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__87__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__87__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__87__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__88__vect = (0xbde7U 
                                             & (IData)(__Vfunc_prince_mult_prime_64bit__85__state_in));
    __Vfunc_prince_nibble_red16__88__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__88__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__88__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__88__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__88__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__88__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__89__vect = (0x7bdeU 
                                             & (IData)(__Vfunc_prince_mult_prime_64bit__85__state_in));
    __Vfunc_prince_nibble_red16__89__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__89__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__89__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__89__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__89__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__89__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__90__vect = (0x7bdeU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__85__state_in 
                                                        >> 0x10U)));
    __Vfunc_prince_nibble_red16__90__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__90__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__90__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__90__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__90__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__90__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__91__vect = (0xe7bdU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__85__state_in 
                                                        >> 0x10U)));
    __Vfunc_prince_nibble_red16__91__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__91__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__91__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__91__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__91__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__91__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__92__vect = (0xde7bU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__85__state_in 
                                                        >> 0x10U)));
    __Vfunc_prince_nibble_red16__92__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__92__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__92__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__92__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__92__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__92__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__93__vect = (0xbde7U 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__85__state_in 
                                                        >> 0x10U)));
    __Vfunc_prince_nibble_red16__93__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__93__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__93__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__93__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__93__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__93__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__94__vect = (0x7bdeU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__85__state_in 
                                                        >> 0x20U)));
    __Vfunc_prince_nibble_red16__94__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__94__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__94__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__94__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__94__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__94__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__95__vect = (0xe7bdU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__85__state_in 
                                                        >> 0x20U)));
    __Vfunc_prince_nibble_red16__95__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__95__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__95__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__95__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__95__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__95__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__96__vect = (0xde7bU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__85__state_in 
                                                        >> 0x20U)));
    __Vfunc_prince_nibble_red16__96__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__96__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__96__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__96__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__96__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__96__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__97__vect = (0xbde7U 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__85__state_in 
                                                        >> 0x20U)));
    __Vfunc_prince_nibble_red16__97__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__97__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__97__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__97__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__97__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__97__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__98__vect = (0xe7bdU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__85__state_in 
                                                        >> 0x30U)));
    __Vfunc_prince_nibble_red16__98__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__98__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__98__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__98__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__98__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__98__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__99__vect = (0xde7bU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__85__state_in 
                                                        >> 0x30U)));
    __Vfunc_prince_nibble_red16__99__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__99__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__99__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__99__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__99__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__99__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__100__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__85__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__100__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__100__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__100__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__100__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__100__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__100__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__101__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__85__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__101__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__101__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__101__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__101__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__101__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__101__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__85__Vfuncout = vlSelfRef.__Vfunc_prince_mult_prime_64bit__85__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
        = __Vfunc_prince_mult_prime_64bit__85__Vfuncout;
    __Vfunc_sbox4_64bit__102__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle;
    vlSelf->__Vfunc_sbox4_64bit__102__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8844495761589105464ull);
    __Vfunc_sbox4_8bit__103__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__102__state_in));
    vlSelf->__Vfunc_sbox4_8bit__103__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11086123785196216885ull);
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__103__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__103__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__103__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__103__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__102__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__102__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__103__Vfuncout)));
    __Vfunc_sbox4_8bit__103__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__102__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__103__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11086123785196216885ull);
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__103__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__103__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__103__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__103__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__102__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__102__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__103__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__103__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__102__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__103__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11086123785196216885ull);
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__103__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__103__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__103__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__103__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__102__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__102__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__103__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__103__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__102__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__103__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11086123785196216885ull);
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__103__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__103__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__103__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__103__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__102__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__102__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__103__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__103__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__102__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__103__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11086123785196216885ull);
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__103__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__103__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__103__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__103__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__102__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__102__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__103__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__103__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__102__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__103__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11086123785196216885ull);
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__103__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__103__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__103__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__103__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__102__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__102__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__103__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__103__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__102__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__103__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11086123785196216885ull);
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__103__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__103__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__103__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__103__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__102__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__102__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__103__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__103__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__102__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__103__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11086123785196216885ull);
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__103__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__103__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__103__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__103__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__103__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__103__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__102__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__102__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__103__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__102__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__102__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
        = __Vfunc_sbox4_64bit__102__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__146__state_in = 
        (0x64a51195e0e3610dULL ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
                                  ^ (((QData)((IData)(
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[1U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[0U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__146__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8575498453550628926ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                       >> 0x18U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                           >> 0x30U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(__Vfunc_prince_shiftrows_64bit__146__state_in) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                        >> 0x10U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                            >> 0x28U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                           >> 0x38U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                        >> 8U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                            >> 0x20U))))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__146__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__146__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__146__state_out;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__2 
        = __Vfunc_prince_shiftrows_64bit__146__Vfuncout;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd 
        = gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__2;
    __Vfunc_prince_mult_prime_64bit__104__state_in 
        = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_prince_mult_prime_64bit__104__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1030806305156365621ull);
    __Vfunc_prince_nibble_red16__105__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__104__state_in));
    __Vfunc_prince_nibble_red16__105__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__105__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__105__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__105__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__105__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__105__Vfuncout)));
    __Vfunc_prince_nibble_red16__106__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__104__state_in));
    __Vfunc_prince_nibble_red16__106__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__106__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__106__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__106__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__106__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__106__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__107__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__104__state_in));
    __Vfunc_prince_nibble_red16__107__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__107__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__107__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__107__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__107__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__107__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__108__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__104__state_in));
    __Vfunc_prince_nibble_red16__108__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__108__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__108__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__108__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__108__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__108__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__109__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__104__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__109__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__109__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__109__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__109__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__109__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__109__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__110__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__104__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__110__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__110__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__110__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__110__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__110__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__110__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__111__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__104__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__111__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__111__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__111__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__111__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__111__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__111__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__112__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__104__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__112__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__112__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__112__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__112__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__112__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__112__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__113__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__104__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__113__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__113__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__113__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__113__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__113__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__113__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__114__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__104__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__114__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__114__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__114__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__114__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__114__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__114__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__115__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__104__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__115__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__115__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__115__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__115__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__115__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__115__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__116__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__104__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__116__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__116__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__116__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__116__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__116__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__116__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__117__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__104__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__117__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__117__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__117__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__117__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__117__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__117__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__118__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__104__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__118__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__118__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__118__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__118__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__118__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__118__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__119__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__104__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__119__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__119__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__119__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__119__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__119__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__119__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__120__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__104__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__120__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__120__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__120__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__120__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__120__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__120__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__104__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__104__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__104__Vfuncout;
    __Vfunc_sbox4_64bit__121__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_sbox4_64bit__121__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12509990812898507945ull);
    __Vfunc_sbox4_8bit__122__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__121__state_in));
    vlSelf->__Vfunc_sbox4_8bit__122__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13955544823421608229ull);
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__122__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__122__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__122__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__122__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__121__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__121__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__122__Vfuncout)));
    __Vfunc_sbox4_8bit__122__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__121__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__122__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13955544823421608229ull);
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__122__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__122__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__122__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__122__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__121__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__121__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__122__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__122__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__121__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__122__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13955544823421608229ull);
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__122__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__122__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__122__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__122__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__121__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__121__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__122__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__122__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__121__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__122__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13955544823421608229ull);
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__122__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__122__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__122__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__122__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__121__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__121__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__122__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__122__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__121__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__122__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13955544823421608229ull);
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__122__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__122__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__122__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__122__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__121__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__121__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__122__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__122__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__121__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__122__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13955544823421608229ull);
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__122__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__122__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__122__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__122__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__121__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__121__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__122__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__122__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__121__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__122__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13955544823421608229ull);
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__122__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__122__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__122__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__122__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__121__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__121__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__122__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__122__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__121__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__122__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13955544823421608229ull);
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__122__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__122__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__122__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__122__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__122__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__122__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__121__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__121__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__122__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__121__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__121__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__127__03a64__KET__ 
        = __Vfunc_sbox4_64bit__121__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__147__state_in = 
        (0xd3b5a399ca0c2399ULL ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__127__03a64__KET__ 
                                  ^ (((QData)((IData)(
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[3U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[2U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__147__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13786785226206739233ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                       >> 0x18U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                           >> 0x30U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(__Vfunc_prince_shiftrows_64bit__147__state_in) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                        >> 0x10U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                            >> 0x28U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                           >> 0x38U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                        >> 8U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                            >> 0x20U))))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__147__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__147__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__147__state_out;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__2 
        = __Vfunc_prince_shiftrows_64bit__147__Vfuncout;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd 
        = gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__2;
    __Vfunc_prince_mult_prime_64bit__123__state_in 
        = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_prince_mult_prime_64bit__123__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6595144532429695883ull);
    __Vfunc_prince_nibble_red16__124__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__123__state_in));
    __Vfunc_prince_nibble_red16__124__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__124__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__124__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__124__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__124__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__124__Vfuncout)));
    __Vfunc_prince_nibble_red16__125__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__123__state_in));
    __Vfunc_prince_nibble_red16__125__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__125__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__125__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__125__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__125__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__125__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__126__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__123__state_in));
    __Vfunc_prince_nibble_red16__126__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__126__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__126__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__126__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__126__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__126__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__127__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__123__state_in));
    __Vfunc_prince_nibble_red16__127__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__127__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__127__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__127__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__127__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__127__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__128__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__123__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__128__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__128__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__128__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__128__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__128__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__128__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__129__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__123__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__129__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__129__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__129__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__129__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__129__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__129__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__130__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__123__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__130__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__130__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__130__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__130__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__130__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__130__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__131__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__123__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__131__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__131__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__131__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__131__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__131__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__131__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__132__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__123__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__132__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__132__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__132__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__132__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__132__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__132__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__133__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__123__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__133__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__133__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__133__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__133__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__133__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__133__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__134__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__123__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__134__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__134__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__134__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__134__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__134__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__134__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__135__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__123__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__135__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__135__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__135__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__135__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__135__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__135__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__136__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__123__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__136__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__136__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__136__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__136__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__136__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__136__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__137__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__123__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__137__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__137__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__137__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__137__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__137__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__137__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__138__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__123__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__138__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__138__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__138__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__138__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__138__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__138__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__139__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__123__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__139__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__139__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__139__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__139__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__139__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__139__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__123__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__123__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__123__Vfuncout;
    __Vfunc_sbox4_64bit__140__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_sbox4_64bit__140__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14153911650615011522ull);
    __Vfunc_sbox4_8bit__141__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__140__state_in));
    vlSelf->__Vfunc_sbox4_8bit__141__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17485288499815986015ull);
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__141__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__141__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__141__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__141__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__140__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__140__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__141__Vfuncout)));
    __Vfunc_sbox4_8bit__141__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__140__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__141__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17485288499815986015ull);
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__141__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__141__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__141__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__141__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__140__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__140__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__141__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__141__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__140__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__141__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17485288499815986015ull);
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__141__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__141__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__141__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__141__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__140__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__140__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__141__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__141__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__140__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__141__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17485288499815986015ull);
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__141__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__141__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__141__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__141__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__140__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__140__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__141__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__141__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__140__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__141__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17485288499815986015ull);
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__141__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__141__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__141__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__141__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__140__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__140__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__141__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__141__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__140__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__141__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17485288499815986015ull);
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__141__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__141__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__141__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__141__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__140__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__140__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__141__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__141__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__140__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__141__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17485288499815986015ull);
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__141__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__141__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__141__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__141__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__140__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__140__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__141__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__141__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__140__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__141__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17485288499815986015ull);
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__141__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__141__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__141__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__141__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__141__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__141__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__140__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__140__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__141__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__140__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__140__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__191__03a128__KET__ 
        = __Vfunc_sbox4_64bit__140__Vfuncout;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o 
        = (0xc0ac29b7c97c50ddULL ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__191__03a128__KET__ 
                                    ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d 
                                       ^ (((QData)((IData)(
                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[0U]))))));
    vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i 
        = (0x0fffffffU & (vlSelfRef.__PVT__wdata_q 
                          ^ (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o)));
    vlSelfRef.__PVT__rdata = (0x0fffffffU & (vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram 
                                             ^ (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o)));
    vlSelfRef.__PVT__wdata_scr = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_loose__23__val 
                    = vlSelfRef.__PVT__write_pending_q;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__23__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__23__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__23__Vfuncout))
                                   ? vlSelfRef.__PVT__wdata_scr_q
                                   : vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i);
    vlSelfRef.rdata_o = 0U;
    vlSelfRef.__PVT__rvalid_o = 0U;
    if (((~ (IData)(vlSelfRef.__PVT__intg_error_r_q)) 
         & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__24__val 
                        = vlSelfRef.__PVT__rvalid_q;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__24__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__24__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__24__Vfuncout)))) {
        vlSelfRef.__PVT__rvalid_o = 1U;
        if (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__25__val 
                        = vlSelfRef.__PVT__addr_collision_q;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__25__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__25__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__25__Vfuncout))) {
            if ((1U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & vlSelfRef.__PVT__wdata_q);
                vlSelfRef.rdata_o = ((0x0ffffffeU & vlSelfRef.rdata_o) 
                                     | (IData)(vlSelfRef.__Vlvbound_hbd56077c__0));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & vlSelfRef.__PVT__rdata);
                vlSelfRef.rdata_o = ((0x0ffffffeU & vlSelfRef.rdata_o) 
                                     | (IData)(vlSelfRef.__Vlvbound_hbd56077c__1));
            }
            vlSelfRef.__PVT__p_forward_mux__DOT__unnamedblk1__DOT__k = 0x0000001cU;
            if ((2U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 1U));
                vlSelfRef.rdata_o = ((0x0ffffffdU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 1U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 1U));
                vlSelfRef.rdata_o = ((0x0ffffffdU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 1U));
            }
            if ((4U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 2U));
                vlSelfRef.rdata_o = ((0x0ffffffbU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 2U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 2U));
                vlSelfRef.rdata_o = ((0x0ffffffbU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 2U));
            }
            if ((8U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 3U));
                vlSelfRef.rdata_o = ((0x0ffffff7U & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 3U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 3U));
                vlSelfRef.rdata_o = ((0x0ffffff7U & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 3U));
            }
            if ((0x00000010U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 4U));
                vlSelfRef.rdata_o = ((0x0fffffefU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 4U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 4U));
                vlSelfRef.rdata_o = ((0x0fffffefU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 4U));
            }
            if ((0x00000020U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 5U));
                vlSelfRef.rdata_o = ((0x0fffffdfU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 5U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 5U));
                vlSelfRef.rdata_o = ((0x0fffffdfU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 5U));
            }
            if ((0x00000040U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 6U));
                vlSelfRef.rdata_o = ((0x0fffffbfU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 6U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 6U));
                vlSelfRef.rdata_o = ((0x0fffffbfU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 6U));
            }
            if ((0x00000080U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 7U));
                vlSelfRef.rdata_o = ((0x0fffff7fU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 7U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 7U));
                vlSelfRef.rdata_o = ((0x0fffff7fU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 7U));
            }
            if ((0x00000100U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 8U));
                vlSelfRef.rdata_o = ((0x0ffffeffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 8U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 8U));
                vlSelfRef.rdata_o = ((0x0ffffeffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 8U));
            }
            if ((0x00000200U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 9U));
                vlSelfRef.rdata_o = ((0x0ffffdffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 9U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 9U));
                vlSelfRef.rdata_o = ((0x0ffffdffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 9U));
            }
            if ((0x00000400U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x0aU));
                vlSelfRef.rdata_o = ((0x0ffffbffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000000aU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x0aU));
                vlSelfRef.rdata_o = ((0x0ffffbffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000000aU));
            }
            if ((0x00000800U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x0bU));
                vlSelfRef.rdata_o = ((0x0ffff7ffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000000bU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x0bU));
                vlSelfRef.rdata_o = ((0x0ffff7ffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000000bU));
            }
            if ((0x00001000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x0cU));
                vlSelfRef.rdata_o = ((0x0fffefffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000000cU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x0cU));
                vlSelfRef.rdata_o = ((0x0fffefffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000000cU));
            }
            if ((0x00002000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x0dU));
                vlSelfRef.rdata_o = ((0x0fffdfffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000000dU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x0dU));
                vlSelfRef.rdata_o = ((0x0fffdfffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000000dU));
            }
            if ((0x00004000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x0eU));
                vlSelfRef.rdata_o = ((0x0fffbfffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000000eU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x0eU));
                vlSelfRef.rdata_o = ((0x0fffbfffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000000eU));
            }
            if ((0x00008000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x0fU));
                vlSelfRef.rdata_o = ((0x0fff7fffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000000fU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x0fU));
                vlSelfRef.rdata_o = ((0x0fff7fffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000000fU));
            }
            if ((0x00010000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x10U));
                vlSelfRef.rdata_o = ((0x0ffeffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000010U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x10U));
                vlSelfRef.rdata_o = ((0x0ffeffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000010U));
            }
            if ((0x00020000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x11U));
                vlSelfRef.rdata_o = ((0x0ffdffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000011U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x11U));
                vlSelfRef.rdata_o = ((0x0ffdffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000011U));
            }
            if ((0x00040000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x12U));
                vlSelfRef.rdata_o = ((0x0ffbffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000012U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x12U));
                vlSelfRef.rdata_o = ((0x0ffbffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000012U));
            }
            if ((0x00080000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x13U));
                vlSelfRef.rdata_o = ((0x0ff7ffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000013U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x13U));
                vlSelfRef.rdata_o = ((0x0ff7ffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000013U));
            }
            if ((0x00100000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x14U));
                vlSelfRef.rdata_o = ((0x0fefffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000014U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x14U));
                vlSelfRef.rdata_o = ((0x0fefffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000014U));
            }
            if ((0x00200000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x15U));
                vlSelfRef.rdata_o = ((0x0fdfffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000015U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x15U));
                vlSelfRef.rdata_o = ((0x0fdfffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000015U));
            }
            if ((0x00400000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x16U));
                vlSelfRef.rdata_o = ((0x0fbfffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000016U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x16U));
                vlSelfRef.rdata_o = ((0x0fbfffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000016U));
            }
            if ((0x00800000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x17U));
                vlSelfRef.rdata_o = ((0x0f7fffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000017U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x17U));
                vlSelfRef.rdata_o = ((0x0f7fffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000017U));
            }
            if ((0x01000000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x18U));
                vlSelfRef.rdata_o = ((0x0effffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000018U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x18U));
                vlSelfRef.rdata_o = ((0x0effffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000018U));
            }
            if ((0x02000000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x19U));
                vlSelfRef.rdata_o = ((0x0dffffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000019U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x19U));
                vlSelfRef.rdata_o = ((0x0dffffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000019U));
            }
            if ((0x04000000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x1aU));
                vlSelfRef.rdata_o = ((0x0bffffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000001aU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x1aU));
                vlSelfRef.rdata_o = ((0x0bffffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000001aU));
            }
            if ((0x08000000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x1bU));
                vlSelfRef.rdata_o = ((0x07ffffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000001bU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x1bU));
                vlSelfRef.rdata_o = ((0x07ffffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000001bU));
            }
        } else {
            vlSelfRef.rdata_o = vlSelfRef.__PVT__rdata;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_ram_1p_scr__pi150___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__tag_bank__0(Vsim_prim_ram_1p_scr__pi150* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi150___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__tag_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0;
    u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0 = 0;
    QData/*63:0*/ gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__2;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__2 = 0;
    QData/*63:0*/ gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__2;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__2 = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__169__Vfuncout;
    __Vfunc_mubi4_test_true_loose__169__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__169__val;
    __Vfunc_mubi4_test_true_loose__169__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__182__Vfuncout;
    __Vfunc_mubi4_test_true_strict__182__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__182__val;
    __Vfunc_mubi4_test_true_strict__182__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__183__Vfuncout;
    __Vfunc_mubi4_and_hi__183__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__183__a;
    __Vfunc_mubi4_and_hi__183__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__183__b;
    __Vfunc_mubi4_and_hi__183__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__184__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__184__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__184__val;
    __Vfunc_mubi4_bool_to_mubi__184__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__185__Vfuncout;
    __Vfunc_mubi4_and__185__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__185__a;
    __Vfunc_mubi4_and__185__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__185__b;
    __Vfunc_mubi4_and__185__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__185__a_in;
    __Vfunc_mubi4_and__185__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__185__b_in;
    __Vfunc_mubi4_and__185__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__190__Vfuncout;
    __Vfunc_mubi4_test_true_loose__190__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__190__val;
    __Vfunc_mubi4_test_true_loose__190__val = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__233__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__233__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__233__state_in;
    __Vfunc_prince_mult_prime_64bit__233__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__234__Vfuncout;
    __Vfunc_prince_nibble_red16__234__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__234__vect;
    __Vfunc_prince_nibble_red16__234__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__235__Vfuncout;
    __Vfunc_prince_nibble_red16__235__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__235__vect;
    __Vfunc_prince_nibble_red16__235__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__236__Vfuncout;
    __Vfunc_prince_nibble_red16__236__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__236__vect;
    __Vfunc_prince_nibble_red16__236__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__237__Vfuncout;
    __Vfunc_prince_nibble_red16__237__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__237__vect;
    __Vfunc_prince_nibble_red16__237__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__238__Vfuncout;
    __Vfunc_prince_nibble_red16__238__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__238__vect;
    __Vfunc_prince_nibble_red16__238__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__239__Vfuncout;
    __Vfunc_prince_nibble_red16__239__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__239__vect;
    __Vfunc_prince_nibble_red16__239__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__240__Vfuncout;
    __Vfunc_prince_nibble_red16__240__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__240__vect;
    __Vfunc_prince_nibble_red16__240__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__241__Vfuncout;
    __Vfunc_prince_nibble_red16__241__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__241__vect;
    __Vfunc_prince_nibble_red16__241__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__242__Vfuncout;
    __Vfunc_prince_nibble_red16__242__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__242__vect;
    __Vfunc_prince_nibble_red16__242__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__243__Vfuncout;
    __Vfunc_prince_nibble_red16__243__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__243__vect;
    __Vfunc_prince_nibble_red16__243__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__244__Vfuncout;
    __Vfunc_prince_nibble_red16__244__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__244__vect;
    __Vfunc_prince_nibble_red16__244__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__245__Vfuncout;
    __Vfunc_prince_nibble_red16__245__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__245__vect;
    __Vfunc_prince_nibble_red16__245__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__246__Vfuncout;
    __Vfunc_prince_nibble_red16__246__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__246__vect;
    __Vfunc_prince_nibble_red16__246__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__247__Vfuncout;
    __Vfunc_prince_nibble_red16__247__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__247__vect;
    __Vfunc_prince_nibble_red16__247__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__248__Vfuncout;
    __Vfunc_prince_nibble_red16__248__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__248__vect;
    __Vfunc_prince_nibble_red16__248__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__249__Vfuncout;
    __Vfunc_prince_nibble_red16__249__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__249__vect;
    __Vfunc_prince_nibble_red16__249__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__250__Vfuncout;
    __Vfunc_sbox4_64bit__250__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__250__state_in;
    __Vfunc_sbox4_64bit__250__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__251__Vfuncout;
    __Vfunc_sbox4_8bit__251__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__251__state_in;
    __Vfunc_sbox4_8bit__251__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__252__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__252__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__252__state_in;
    __Vfunc_prince_mult_prime_64bit__252__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__253__Vfuncout;
    __Vfunc_prince_nibble_red16__253__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__253__vect;
    __Vfunc_prince_nibble_red16__253__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__254__Vfuncout;
    __Vfunc_prince_nibble_red16__254__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__254__vect;
    __Vfunc_prince_nibble_red16__254__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__255__Vfuncout;
    __Vfunc_prince_nibble_red16__255__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__255__vect;
    __Vfunc_prince_nibble_red16__255__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__256__Vfuncout;
    __Vfunc_prince_nibble_red16__256__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__256__vect;
    __Vfunc_prince_nibble_red16__256__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__257__Vfuncout;
    __Vfunc_prince_nibble_red16__257__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__257__vect;
    __Vfunc_prince_nibble_red16__257__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__258__Vfuncout;
    __Vfunc_prince_nibble_red16__258__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__258__vect;
    __Vfunc_prince_nibble_red16__258__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__259__Vfuncout;
    __Vfunc_prince_nibble_red16__259__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__259__vect;
    __Vfunc_prince_nibble_red16__259__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__260__Vfuncout;
    __Vfunc_prince_nibble_red16__260__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__260__vect;
    __Vfunc_prince_nibble_red16__260__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__261__Vfuncout;
    __Vfunc_prince_nibble_red16__261__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__261__vect;
    __Vfunc_prince_nibble_red16__261__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__262__Vfuncout;
    __Vfunc_prince_nibble_red16__262__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__262__vect;
    __Vfunc_prince_nibble_red16__262__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__263__Vfuncout;
    __Vfunc_prince_nibble_red16__263__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__263__vect;
    __Vfunc_prince_nibble_red16__263__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__264__Vfuncout;
    __Vfunc_prince_nibble_red16__264__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__264__vect;
    __Vfunc_prince_nibble_red16__264__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__265__Vfuncout;
    __Vfunc_prince_nibble_red16__265__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__265__vect;
    __Vfunc_prince_nibble_red16__265__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__266__Vfuncout;
    __Vfunc_prince_nibble_red16__266__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__266__vect;
    __Vfunc_prince_nibble_red16__266__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__267__Vfuncout;
    __Vfunc_prince_nibble_red16__267__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__267__vect;
    __Vfunc_prince_nibble_red16__267__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__268__Vfuncout;
    __Vfunc_prince_nibble_red16__268__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__268__vect;
    __Vfunc_prince_nibble_red16__268__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__269__Vfuncout;
    __Vfunc_sbox4_64bit__269__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__269__state_in;
    __Vfunc_sbox4_64bit__269__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__270__Vfuncout;
    __Vfunc_sbox4_8bit__270__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__270__state_in;
    __Vfunc_sbox4_8bit__270__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__271__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__271__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__271__state_in;
    __Vfunc_prince_mult_prime_64bit__271__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__272__Vfuncout;
    __Vfunc_prince_nibble_red16__272__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__272__vect;
    __Vfunc_prince_nibble_red16__272__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__273__Vfuncout;
    __Vfunc_prince_nibble_red16__273__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__273__vect;
    __Vfunc_prince_nibble_red16__273__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__274__Vfuncout;
    __Vfunc_prince_nibble_red16__274__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__274__vect;
    __Vfunc_prince_nibble_red16__274__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__275__Vfuncout;
    __Vfunc_prince_nibble_red16__275__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__275__vect;
    __Vfunc_prince_nibble_red16__275__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__276__Vfuncout;
    __Vfunc_prince_nibble_red16__276__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__276__vect;
    __Vfunc_prince_nibble_red16__276__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__277__Vfuncout;
    __Vfunc_prince_nibble_red16__277__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__277__vect;
    __Vfunc_prince_nibble_red16__277__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__278__Vfuncout;
    __Vfunc_prince_nibble_red16__278__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__278__vect;
    __Vfunc_prince_nibble_red16__278__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__279__Vfuncout;
    __Vfunc_prince_nibble_red16__279__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__279__vect;
    __Vfunc_prince_nibble_red16__279__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__280__Vfuncout;
    __Vfunc_prince_nibble_red16__280__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__280__vect;
    __Vfunc_prince_nibble_red16__280__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__281__Vfuncout;
    __Vfunc_prince_nibble_red16__281__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__281__vect;
    __Vfunc_prince_nibble_red16__281__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__282__Vfuncout;
    __Vfunc_prince_nibble_red16__282__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__282__vect;
    __Vfunc_prince_nibble_red16__282__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__283__Vfuncout;
    __Vfunc_prince_nibble_red16__283__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__283__vect;
    __Vfunc_prince_nibble_red16__283__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__284__Vfuncout;
    __Vfunc_prince_nibble_red16__284__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__284__vect;
    __Vfunc_prince_nibble_red16__284__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__285__Vfuncout;
    __Vfunc_prince_nibble_red16__285__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__285__vect;
    __Vfunc_prince_nibble_red16__285__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__286__Vfuncout;
    __Vfunc_prince_nibble_red16__286__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__286__vect;
    __Vfunc_prince_nibble_red16__286__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__287__Vfuncout;
    __Vfunc_prince_nibble_red16__287__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__287__vect;
    __Vfunc_prince_nibble_red16__287__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__288__Vfuncout;
    __Vfunc_sbox4_64bit__288__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__288__state_in;
    __Vfunc_sbox4_64bit__288__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__289__Vfuncout;
    __Vfunc_sbox4_8bit__289__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__289__state_in;
    __Vfunc_sbox4_8bit__289__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__294__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__294__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__294__state_in;
    __Vfunc_prince_shiftrows_64bit__294__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__295__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__295__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__295__state_in;
    __Vfunc_prince_shiftrows_64bit__295__state_in = 0;
    // Body
    __Vfunc_mubi4_test_true_loose__169__val = vlSelfRef.__PVT__addr_collision_q;
    __Vfunc_mubi4_test_true_loose__169__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__169__val));
    vlSelfRef.__PVT__wr_collision_o = __Vfunc_mubi4_test_true_loose__169__Vfuncout;
    __Vfunc_mubi4_test_true_loose__190__val = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
    __Vfunc_mubi4_test_true_loose__190__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__190__val));
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_o 
        = __Vfunc_mubi4_test_true_loose__190__Vfuncout;
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram = 0U;
    __Vfunc_mubi4_and_hi__183__b = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
    __Vfunc_mubi4_bool_to_mubi__184__val = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__inst_req_q;
    __Vfunc_mubi4_bool_to_mubi__184__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__184__val)
                                                  ? 6U
                                                  : 9U);
    __Vfunc_mubi4_and_hi__183__a = __Vfunc_mubi4_bool_to_mubi__184__Vfuncout;
    __Vfunc_mubi4_and__185__b = __Vfunc_mubi4_and_hi__183__b;
    __Vfunc_mubi4_and__185__a = __Vfunc_mubi4_and_hi__183__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__185__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12387177630082018862ull);
    __Vfunc_mubi4_and__185__a_in = __Vfunc_mubi4_and__185__a;
    __Vfunc_mubi4_and__185__b_in = __Vfunc_mubi4_and__185__b;
    vlSelfRef.__Vfunc_mubi4_and__185__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__185__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__185__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__185__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__185__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__185__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__185__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__185__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__185__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__185__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__185__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__185__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__185__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__185__out;
    __Vfunc_mubi4_and_hi__183__Vfuncout = __Vfunc_mubi4_and__185__Vfuncout;
    __Vfunc_mubi4_test_true_strict__182__val = __Vfunc_mubi4_and_hi__183__Vfuncout;
    __Vfunc_mubi4_test_true_strict__182__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__182__val));
    u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0 
        = __Vfunc_mubi4_test_true_strict__182__Vfuncout;
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_inst 
        = u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0;
    if (vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_inst) {
        vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram 
            = vlSelfRef.u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o;
    }
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
        = (((QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[3U])) 
            << 0x00000020U) | (QData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[2U])));
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d 
        = (((QData)((IData)((1U & (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0)))) 
            << 0x0000003fU) | ((0x7ffffffffffffffeULL 
                                & (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
                                   >> 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & VL_REDXOR_64(
                                                                             (0x8000000000000002ULL 
                                                                              & vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0)))))));
    __Vfunc_prince_mult_prime_64bit__233__state_in 
        = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q;
    vlSelf->__Vfunc_prince_mult_prime_64bit__233__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5374005605584039117ull);
    __Vfunc_prince_nibble_red16__234__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__233__state_in));
    __Vfunc_prince_nibble_red16__234__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__234__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__234__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__234__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__234__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__234__Vfuncout)));
    __Vfunc_prince_nibble_red16__235__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__233__state_in));
    __Vfunc_prince_nibble_red16__235__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__235__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__235__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__235__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__235__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__235__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__236__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__233__state_in));
    __Vfunc_prince_nibble_red16__236__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__236__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__236__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__236__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__236__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__236__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__237__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__233__state_in));
    __Vfunc_prince_nibble_red16__237__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__237__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__237__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__237__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__237__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__237__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__238__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__233__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__238__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__238__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__238__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__238__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__238__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__238__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__239__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__233__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__239__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__239__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__239__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__239__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__239__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__239__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__240__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__233__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__240__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__240__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__240__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__240__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__240__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__240__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__241__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__233__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__241__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__241__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__241__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__241__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__241__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__241__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__242__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__233__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__242__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__242__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__242__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__242__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__242__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__242__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__243__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__233__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__243__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__243__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__243__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__243__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__243__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__243__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__244__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__233__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__244__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__244__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__244__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__244__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__244__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__244__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__245__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__233__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__245__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__245__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__245__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__245__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__245__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__245__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__246__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__233__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__246__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__246__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__246__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__246__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__246__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__246__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__247__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__233__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__247__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__247__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__247__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__247__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__247__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__247__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__248__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__233__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__248__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__248__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__248__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__248__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__248__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__248__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__249__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__233__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__249__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__249__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__249__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__249__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__249__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__249__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__233__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__233__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
        = __Vfunc_prince_mult_prime_64bit__233__Vfuncout;
    __Vfunc_sbox4_64bit__250__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle;
    vlSelf->__Vfunc_sbox4_64bit__250__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7921348577880156019ull);
    __Vfunc_sbox4_8bit__251__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__250__state_in));
    vlSelf->__Vfunc_sbox4_8bit__251__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17570115088923238058ull);
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__251__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__251__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__251__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__251__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__250__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__250__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__251__Vfuncout)));
    __Vfunc_sbox4_8bit__251__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__250__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__251__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17570115088923238058ull);
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__251__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__251__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__251__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__251__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__250__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__250__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__251__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__251__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__250__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__251__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17570115088923238058ull);
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__251__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__251__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__251__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__251__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__250__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__250__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__251__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__251__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__250__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__251__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17570115088923238058ull);
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__251__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__251__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__251__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__251__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__250__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__250__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__251__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__251__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__250__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__251__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17570115088923238058ull);
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__251__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__251__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__251__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__251__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__250__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__250__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__251__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__251__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__250__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__251__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17570115088923238058ull);
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__251__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__251__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__251__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__251__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__250__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__250__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__251__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__251__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__250__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__251__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17570115088923238058ull);
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__251__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__251__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__251__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__251__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__250__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__250__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__251__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__251__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__250__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__251__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17570115088923238058ull);
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__251__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__251__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__251__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__251__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__251__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__251__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__250__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__250__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__251__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__250__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__250__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
        = __Vfunc_sbox4_64bit__250__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__294__state_in = 
        (0x64a51195e0e3610dULL ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
                                  ^ (((QData)((IData)(
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[1U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[0U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__294__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3770104670746483762ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                       >> 0x18U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                           >> 0x30U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(__Vfunc_prince_shiftrows_64bit__294__state_in) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                        >> 0x10U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                            >> 0x28U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                           >> 0x38U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                        >> 8U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                            >> 0x20U))))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__294__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__294__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__294__state_out;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__2 
        = __Vfunc_prince_shiftrows_64bit__294__Vfuncout;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd 
        = gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__2;
    __Vfunc_prince_mult_prime_64bit__252__state_in 
        = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_prince_mult_prime_64bit__252__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7540494109409760447ull);
    __Vfunc_prince_nibble_red16__253__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__252__state_in));
    __Vfunc_prince_nibble_red16__253__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__253__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__253__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__253__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__253__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__253__Vfuncout)));
    __Vfunc_prince_nibble_red16__254__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__252__state_in));
    __Vfunc_prince_nibble_red16__254__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__254__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__254__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__254__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__254__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__254__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__255__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__252__state_in));
    __Vfunc_prince_nibble_red16__255__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__255__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__255__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__255__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__255__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__255__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__256__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__252__state_in));
    __Vfunc_prince_nibble_red16__256__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__256__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__256__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__256__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__256__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__256__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__257__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__252__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__257__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__257__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__257__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__257__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__257__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__257__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__258__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__252__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__258__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__258__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__258__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__258__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__258__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__258__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__259__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__252__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__259__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__259__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__259__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__259__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__259__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__259__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__260__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__252__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__260__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__260__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__260__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__260__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__260__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__260__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__261__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__252__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__261__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__261__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__261__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__261__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__261__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__261__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__262__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__252__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__262__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__262__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__262__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__262__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__262__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__262__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__263__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__252__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__263__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__263__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__263__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__263__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__263__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__263__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__264__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__252__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__264__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__264__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__264__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__264__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__264__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__264__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__265__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__252__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__265__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__265__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__265__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__265__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__265__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__265__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__266__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__252__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__266__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__266__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__266__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__266__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__266__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__266__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__267__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__252__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__267__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__267__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__267__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__267__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__267__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__267__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__268__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__252__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__268__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__268__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__268__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__268__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__268__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__268__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__252__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__252__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__252__Vfuncout;
    __Vfunc_sbox4_64bit__269__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_sbox4_64bit__269__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8898271799276761960ull);
    __Vfunc_sbox4_8bit__270__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__269__state_in));
    vlSelf->__Vfunc_sbox4_8bit__270__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9219045553475487609ull);
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__270__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__270__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__270__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__270__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__269__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__269__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__270__Vfuncout)));
    __Vfunc_sbox4_8bit__270__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__269__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__270__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9219045553475487609ull);
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__270__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__270__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__270__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__270__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__269__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__269__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__270__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__270__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__269__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__270__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9219045553475487609ull);
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__270__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__270__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__270__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__270__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__269__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__269__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__270__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__270__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__269__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__270__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9219045553475487609ull);
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__270__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__270__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__270__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__270__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__269__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__269__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__270__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__270__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__269__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__270__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9219045553475487609ull);
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__270__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__270__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__270__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__270__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__269__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__269__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__270__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__270__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__269__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__270__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9219045553475487609ull);
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__270__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__270__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__270__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__270__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__269__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__269__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__270__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__270__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__269__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__270__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9219045553475487609ull);
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__270__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__270__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__270__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__270__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__269__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__269__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__270__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__270__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__269__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__270__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9219045553475487609ull);
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__270__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__270__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__270__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__270__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__270__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__270__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__269__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__269__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__270__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__269__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__269__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__127__03a64__KET__ 
        = __Vfunc_sbox4_64bit__269__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__295__state_in = 
        (0xd3b5a399ca0c2399ULL ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__127__03a64__KET__ 
                                  ^ (((QData)((IData)(
                                                      vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[3U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[2U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__295__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4266987662004239475ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                       >> 0x18U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                           >> 0x30U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(__Vfunc_prince_shiftrows_64bit__295__state_in) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                        >> 0x10U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                            >> 0x28U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                           >> 0x38U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                        >> 8U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                            >> 0x20U))))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__295__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__295__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__295__state_out;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__2 
        = __Vfunc_prince_shiftrows_64bit__295__Vfuncout;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd 
        = gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__2;
    __Vfunc_prince_mult_prime_64bit__271__state_in 
        = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_prince_mult_prime_64bit__271__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1799304093432713757ull);
    __Vfunc_prince_nibble_red16__272__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__271__state_in));
    __Vfunc_prince_nibble_red16__272__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__272__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__272__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__272__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__272__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__272__Vfuncout)));
    __Vfunc_prince_nibble_red16__273__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__271__state_in));
    __Vfunc_prince_nibble_red16__273__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__273__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__273__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__273__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__273__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__273__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__274__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__271__state_in));
    __Vfunc_prince_nibble_red16__274__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__274__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__274__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__274__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__274__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__274__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__275__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__271__state_in));
    __Vfunc_prince_nibble_red16__275__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__275__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__275__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__275__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__275__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__275__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__276__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__271__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__276__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__276__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__276__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__276__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__276__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__276__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__277__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__271__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__277__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__277__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__277__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__277__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__277__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__277__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__278__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__271__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__278__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__278__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__278__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__278__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__278__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__278__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__279__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__271__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__279__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__279__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__279__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__279__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__279__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__279__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__280__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__271__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__280__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__280__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__280__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__280__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__280__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__280__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__281__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__271__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__281__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__281__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__281__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__281__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__281__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__281__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__282__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__271__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__282__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__282__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__282__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__282__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__282__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__282__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__283__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__271__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__283__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__283__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__283__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__283__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__283__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__283__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__284__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__271__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__284__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__284__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__284__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__284__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__284__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__284__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__285__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__271__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__285__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__285__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__285__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__285__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__285__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__285__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__286__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__271__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__286__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__286__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__286__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__286__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__286__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__286__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__287__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__271__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__287__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__287__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__287__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__287__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__287__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__287__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__271__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__271__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__271__Vfuncout;
    __Vfunc_sbox4_64bit__288__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_sbox4_64bit__288__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13759240269941913042ull);
    __Vfunc_sbox4_8bit__289__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__288__state_in));
    vlSelf->__Vfunc_sbox4_8bit__289__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16191283028430275826ull);
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__289__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__289__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__289__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__289__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__288__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__288__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__289__Vfuncout)));
    __Vfunc_sbox4_8bit__289__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__288__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__289__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16191283028430275826ull);
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__289__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__289__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__289__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__289__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__288__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__288__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__289__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__289__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__288__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__289__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16191283028430275826ull);
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__289__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__289__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__289__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__289__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__288__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__288__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__289__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__289__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__288__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__289__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16191283028430275826ull);
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__289__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__289__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__289__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__289__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__288__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__288__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__289__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__289__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__288__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__289__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16191283028430275826ull);
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__289__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__289__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__289__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__289__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__288__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__288__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__289__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__289__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__288__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__289__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16191283028430275826ull);
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__289__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__289__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__289__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__289__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__288__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__288__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__289__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__289__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__288__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__289__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16191283028430275826ull);
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__289__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__289__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__289__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__289__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__288__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__288__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__289__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__289__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__288__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__289__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16191283028430275826ull);
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__289__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__289__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__289__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__289__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__289__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__289__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__288__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__288__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__289__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__288__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__288__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__191__03a128__KET__ 
        = __Vfunc_sbox4_64bit__288__Vfuncout;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o 
        = (0xc0ac29b7c97c50ddULL ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__191__03a128__KET__ 
                                    ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d 
                                       ^ (((QData)((IData)(
                                                           vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[0U]))))));
    vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i 
        = (0x0fffffffU & (vlSelfRef.__PVT__wdata_q 
                          ^ (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o)));
    vlSelfRef.__PVT__rdata = (0x0fffffffU & (vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram 
                                             ^ (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o)));
    vlSelfRef.__PVT__wdata_scr = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_loose__171__val 
                    = vlSelfRef.__PVT__write_pending_q;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__171__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__171__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__171__Vfuncout))
                                   ? vlSelfRef.__PVT__wdata_scr_q
                                   : vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i);
    vlSelfRef.rdata_o = 0U;
    vlSelfRef.__PVT__rvalid_o = 0U;
    if (((~ (IData)(vlSelfRef.__PVT__intg_error_r_q)) 
         & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__172__val 
                        = vlSelfRef.__PVT__rvalid_q;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__172__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__172__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__172__Vfuncout)))) {
        vlSelfRef.__PVT__rvalid_o = 1U;
        if (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__173__val 
                        = vlSelfRef.__PVT__addr_collision_q;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__173__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__173__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__173__Vfuncout))) {
            if ((1U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & vlSelfRef.__PVT__wdata_q);
                vlSelfRef.rdata_o = ((0x0ffffffeU & vlSelfRef.rdata_o) 
                                     | (IData)(vlSelfRef.__Vlvbound_hbd56077c__0));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & vlSelfRef.__PVT__rdata);
                vlSelfRef.rdata_o = ((0x0ffffffeU & vlSelfRef.rdata_o) 
                                     | (IData)(vlSelfRef.__Vlvbound_hbd56077c__1));
            }
            vlSelfRef.__PVT__p_forward_mux__DOT__unnamedblk1__DOT__k = 0x0000001cU;
            if ((2U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 1U));
                vlSelfRef.rdata_o = ((0x0ffffffdU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 1U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 1U));
                vlSelfRef.rdata_o = ((0x0ffffffdU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 1U));
            }
            if ((4U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 2U));
                vlSelfRef.rdata_o = ((0x0ffffffbU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 2U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 2U));
                vlSelfRef.rdata_o = ((0x0ffffffbU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 2U));
            }
            if ((8U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 3U));
                vlSelfRef.rdata_o = ((0x0ffffff7U & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 3U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 3U));
                vlSelfRef.rdata_o = ((0x0ffffff7U & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 3U));
            }
            if ((0x00000010U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 4U));
                vlSelfRef.rdata_o = ((0x0fffffefU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 4U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 4U));
                vlSelfRef.rdata_o = ((0x0fffffefU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 4U));
            }
            if ((0x00000020U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 5U));
                vlSelfRef.rdata_o = ((0x0fffffdfU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 5U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 5U));
                vlSelfRef.rdata_o = ((0x0fffffdfU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 5U));
            }
            if ((0x00000040U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 6U));
                vlSelfRef.rdata_o = ((0x0fffffbfU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 6U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 6U));
                vlSelfRef.rdata_o = ((0x0fffffbfU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 6U));
            }
            if ((0x00000080U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 7U));
                vlSelfRef.rdata_o = ((0x0fffff7fU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 7U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 7U));
                vlSelfRef.rdata_o = ((0x0fffff7fU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 7U));
            }
            if ((0x00000100U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 8U));
                vlSelfRef.rdata_o = ((0x0ffffeffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 8U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 8U));
                vlSelfRef.rdata_o = ((0x0ffffeffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 8U));
            }
            if ((0x00000200U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 9U));
                vlSelfRef.rdata_o = ((0x0ffffdffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 9U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 9U));
                vlSelfRef.rdata_o = ((0x0ffffdffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 9U));
            }
            if ((0x00000400U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x0aU));
                vlSelfRef.rdata_o = ((0x0ffffbffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000000aU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x0aU));
                vlSelfRef.rdata_o = ((0x0ffffbffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000000aU));
            }
            if ((0x00000800U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x0bU));
                vlSelfRef.rdata_o = ((0x0ffff7ffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000000bU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x0bU));
                vlSelfRef.rdata_o = ((0x0ffff7ffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000000bU));
            }
            if ((0x00001000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x0cU));
                vlSelfRef.rdata_o = ((0x0fffefffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000000cU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x0cU));
                vlSelfRef.rdata_o = ((0x0fffefffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000000cU));
            }
            if ((0x00002000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x0dU));
                vlSelfRef.rdata_o = ((0x0fffdfffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000000dU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x0dU));
                vlSelfRef.rdata_o = ((0x0fffdfffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000000dU));
            }
            if ((0x00004000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x0eU));
                vlSelfRef.rdata_o = ((0x0fffbfffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000000eU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x0eU));
                vlSelfRef.rdata_o = ((0x0fffbfffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000000eU));
            }
            if ((0x00008000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x0fU));
                vlSelfRef.rdata_o = ((0x0fff7fffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000000fU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x0fU));
                vlSelfRef.rdata_o = ((0x0fff7fffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000000fU));
            }
            if ((0x00010000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x10U));
                vlSelfRef.rdata_o = ((0x0ffeffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000010U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x10U));
                vlSelfRef.rdata_o = ((0x0ffeffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000010U));
            }
            if ((0x00020000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x11U));
                vlSelfRef.rdata_o = ((0x0ffdffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000011U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x11U));
                vlSelfRef.rdata_o = ((0x0ffdffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000011U));
            }
            if ((0x00040000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x12U));
                vlSelfRef.rdata_o = ((0x0ffbffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000012U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x12U));
                vlSelfRef.rdata_o = ((0x0ffbffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000012U));
            }
            if ((0x00080000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x13U));
                vlSelfRef.rdata_o = ((0x0ff7ffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000013U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x13U));
                vlSelfRef.rdata_o = ((0x0ff7ffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000013U));
            }
            if ((0x00100000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x14U));
                vlSelfRef.rdata_o = ((0x0fefffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000014U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x14U));
                vlSelfRef.rdata_o = ((0x0fefffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000014U));
            }
            if ((0x00200000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x15U));
                vlSelfRef.rdata_o = ((0x0fdfffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000015U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x15U));
                vlSelfRef.rdata_o = ((0x0fdfffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000015U));
            }
            if ((0x00400000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x16U));
                vlSelfRef.rdata_o = ((0x0fbfffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000016U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x16U));
                vlSelfRef.rdata_o = ((0x0fbfffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000016U));
            }
            if ((0x00800000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x17U));
                vlSelfRef.rdata_o = ((0x0f7fffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000017U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x17U));
                vlSelfRef.rdata_o = ((0x0f7fffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000017U));
            }
            if ((0x01000000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x18U));
                vlSelfRef.rdata_o = ((0x0effffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000018U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x18U));
                vlSelfRef.rdata_o = ((0x0effffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000018U));
            }
            if ((0x02000000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x19U));
                vlSelfRef.rdata_o = ((0x0dffffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x00000019U));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x19U));
                vlSelfRef.rdata_o = ((0x0dffffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x00000019U));
            }
            if ((0x04000000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x1aU));
                vlSelfRef.rdata_o = ((0x0bffffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000001aU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x1aU));
                vlSelfRef.rdata_o = ((0x0bffffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000001aU));
            }
            if ((0x08000000U & vlSelfRef.__PVT__wmask_q)) {
                vlSelfRef.__Vlvbound_hbd56077c__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q 
                           >> 0x1bU));
                vlSelfRef.rdata_o = ((0x07ffffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__0) 
                                        << 0x0000001bU));
            } else {
                vlSelfRef.__Vlvbound_hbd56077c__1 = 
                    (1U & (vlSelfRef.__PVT__rdata >> 0x1bU));
                vlSelfRef.rdata_o = ((0x07ffffffU & vlSelfRef.rdata_o) 
                                     | ((IData)(vlSelfRef.__Vlvbound_hbd56077c__1) 
                                        << 0x0000001bU));
            }
        } else {
            vlSelfRef.rdata_o = vlSelfRef.__PVT__rdata;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_ram_1p_scr__pi150___ctor_var_reset(Vsim_prim_ram_1p_scr__pi150* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi150___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->key_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2554449903903783363ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->key_i, __VscopeHash, 508736851691575815ull);
    vlSelf->nonce_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12793522246440044599ull);
    vlSelf->req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16841108072821397437ull);
    vlSelf->__PVT__gnt_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11825630704627518037ull);
    vlSelf->write_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14267976221009115519ull);
    vlSelf->addr_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5910257723895866083ull);
    vlSelf->wdata_i = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 5130823727116858121ull);
    vlSelf->wmask_i = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 5737669952226558944ull);
    vlSelf->intg_error_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17723302310408741657ull);
    vlSelf->rdata_o = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 8843381805826685208ull);
    vlSelf->__PVT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5222259403380551583ull);
    vlSelf->__PVT__rerror_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14334590790564366192ull);
    vlSelf->__PVT__raddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10901368841800972275ull);
    vlSelf->cfg_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7672092679754833055ull);
    vlSelf->cfg_rsp_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11080024274387644575ull);
    vlSelf->__PVT__wr_collision_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3220015821489420144ull);
    vlSelf->__PVT__write_pending_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4661867832062443884ull);
    vlSelf->alert_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17611755471748740803ull);
    vlSelf->__PVT__read_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13081553017976621511ull);
    vlSelf->__PVT__read_en_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10422830046416651651ull);
    vlSelf->__PVT__write_en_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12074744463855139713ull);
    vlSelf->__PVT__write_en_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10987818293512581737ull);
    vlSelf->__PVT__write_en_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6753204102032868724ull);
    vlSelf->__PVT__write_pending_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6208687807329459943ull);
    vlSelf->__PVT__addr_collision_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15744145308086469687ull);
    vlSelf->__PVT__addr_collision_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3296179964489615361ull);
    vlSelf->__PVT__waddr_scr_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1506814118336270283ull);
    vlSelf->__PVT__intg_error_w_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6082633621491456492ull);
    vlSelf->__PVT__macro_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2275297341808146864ull);
    vlSelf->__PVT__macro_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 258983068709854359ull);
    vlSelf->__PVT__rw_collision = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8169191197210623683ull);
    vlSelf->__PVT__addr_mux = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14466141134425341780ull);
    vlSelf->__PVT__raddr_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16157391964225347848ull);
    vlSelf->__PVT__rdata = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 10065165116613087284ull);
    vlSelf->__PVT__wdata_scr_q = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 1528382553123496065ull);
    vlSelf->__PVT__wdata_q = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 3076996247779096886ull);
    vlSelf->__PVT__wdata_scr = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 18132785329269427143ull);
    vlSelf->__PVT__rvalid_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13004780265056195327ull);
    vlSelf->__PVT__intg_error_r_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18254190186217706863ull);
    vlSelf->__PVT__wmask_q = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 3262878038625398528ull);
    vlSelf->__PVT__ram_alert = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7019119403260658752ull);
    vlSelf->__PVT__simutil_get_scramble_key__Vstatic__valid = 0;
    vlSelf->__PVT__simutil_get_scramble_nonce__Vstatic__valid = 0;
    vlSelf->__PVT__p_forward_mux__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->__Vlvbound_hbd56077c__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8025600564098036963ull);
    vlSelf->__Vlvbound_hbd56077c__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2279131136832625330ull);
    vlSelf->__PVT__u_write_pending_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1686541914934084742ull);
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11990681263754240621ull);
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__req_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9857051670465375556ull);
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__req_q_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10047892861603075343ull);
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__write_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13788675426185434382ull);
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__write_q_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7352570975608439870ull);
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11296080265889698160ull);
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13556075312996311416ull);
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__rdata_sram = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 8487149537639075731ull);
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__inst_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10508558234265652414ull);
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__rvalid_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5843668696833365158ull);
    vlSelf->u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 683434570283444517ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 11867700257714392484ull);
    }
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid = 0;
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid = 0;
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16496720300848432334ull);
    vlSelf->u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_hd9457a55__0 = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 13506857153686500586ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12300756108668534973ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9384349989197221120ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11640488074969657152ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1697860759064261685ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__191__03a128__KET__ = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9086906080258652214ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__127__03a64__KET__ = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 561246980035001372ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14292297760436797287ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5489624325829249498ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17070259222878505098ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17200104450561772435ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_data_reg__DOT__valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4543453478011306563ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15490436288450014904ull);
    vlSelf->__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2738622305124688037ull);
    vlSelf->gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1499326895124629780ull);
    vlSelf->__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 4633301624582437483ull);
    vlSelf->__Vfunc_mubi4_or__5__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17633108909802805593ull);
    vlSelf->__Vfunc_mubi4_and__6__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15134286001702857314ull);
    vlSelf->__Vfunc_mubi4_and__7__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2687498546261607798ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__8__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5165233203139583538ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__8__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10711541497139573607ull);
    vlSelf->__Vfunc_mubi4_or_hi__9__Vfuncout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16869985556855558037ull);
    vlSelf->__Vfunc_mubi4_or_hi__9__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13167968174737680716ull);
    vlSelf->__Vfunc_mubi4_or_hi__9__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15984955695894438306ull);
    vlSelf->__Vfunc_mubi4_or_hi__10__Vfuncout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5277984622541313772ull);
    vlSelf->__Vfunc_mubi4_or_hi__10__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3768160275014393444ull);
    vlSelf->__Vfunc_mubi4_or_hi__10__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 871940668760356766ull);
    vlSelf->__Vfunc_mubi4_or__11__Vfuncout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7976690763261006202ull);
    vlSelf->__Vfunc_mubi4_or__11__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6963162035614899822ull);
    vlSelf->__Vfunc_mubi4_or__11__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18414802163948000977ull);
    vlSelf->__Vfunc_mubi4_or__11__a_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11019442115770655984ull);
    vlSelf->__Vfunc_mubi4_or__11__b_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 44386496413208557ull);
    vlSelf->__Vfunc_mubi4_or__11__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8874432121593641388ull);
    vlSelf->__Vfunc_mubi4_or__12__Vfuncout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14612014985458137409ull);
    vlSelf->__Vfunc_mubi4_or__12__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8583887576267377431ull);
    vlSelf->__Vfunc_mubi4_or__12__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15450151963314516362ull);
    vlSelf->__Vfunc_mubi4_or__12__a_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4335081986878779586ull);
    vlSelf->__Vfunc_mubi4_or__12__b_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2630644311228013296ull);
    vlSelf->__Vfunc_mubi4_or__12__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9906660831606033521ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__13__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 521392839145800525ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__13__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2821164723975010421ull);
    vlSelf->__Vfunc_mubi4_or_hi__14__Vfuncout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 957201296197458450ull);
    vlSelf->__Vfunc_mubi4_or_hi__14__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14945962060847053023ull);
    vlSelf->__Vfunc_mubi4_or_hi__14__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15286730530146352915ull);
    vlSelf->__Vfunc_mubi4_or__15__Vfuncout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15297479617139169075ull);
    vlSelf->__Vfunc_mubi4_or__15__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14541515581740809595ull);
    vlSelf->__Vfunc_mubi4_or__15__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16682883893210001537ull);
    vlSelf->__Vfunc_mubi4_or__15__a_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 441428660660952705ull);
    vlSelf->__Vfunc_mubi4_or__15__b_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15395237550821398390ull);
    vlSelf->__Vfunc_mubi4_or__15__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13350577630819461753ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__16__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11064534814090289524ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__16__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9856553256894963410ull);
    vlSelf->__Vfunc_mubi4_and__19__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6444611244061159716ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__20__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2039746376390745767ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__20__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2231087333623764650ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__22__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6728592638949961293ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__22__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17058077632780204238ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__23__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15522013715663603736ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__23__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14275546277611251263ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__24__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13944224993413238922ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__24__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15420465296129946499ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__25__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15204736001137904801ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__25__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5183729801285786432ull);
    vlSelf->__Vfunc_mubi4_test_invalid__26__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14043066627006839913ull);
    vlSelf->__Vfunc_mubi4_test_invalid__26__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7960909114581954276ull);
    vlSelf->__Vfunc_mubi4_test_invalid__27__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7486446612736599958ull);
    vlSelf->__Vfunc_mubi4_test_invalid__27__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1529880212191065642ull);
    vlSelf->__Vfunc_mubi4_test_invalid__28__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15924186576742148782ull);
    vlSelf->__Vfunc_mubi4_test_invalid__28__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3299724876826207876ull);
    vlSelf->__Vfunc_mubi4_test_invalid__29__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3698851093740220574ull);
    vlSelf->__Vfunc_mubi4_test_invalid__29__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10606523029909073255ull);
    vlSelf->__Vfunc_mubi4_and__37__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14855731366524508792ull);
    vlSelf->__Vfunc_mubi4_and__39__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4991511454419142817ull);
    vlSelf->__Vfunc_mubi4_test_invalid__43__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8991606443249413220ull);
    vlSelf->__Vfunc_mubi4_test_invalid__43__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 157700651211185613ull);
    vlSelf->__Vfunc_mubi4_test_invalid__44__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8564973065810773633ull);
    vlSelf->__Vfunc_mubi4_test_invalid__44__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5208190553361293525ull);
    vlSelf->__Vfunc_mubi4_test_invalid__45__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5984348746335558946ull);
    vlSelf->__Vfunc_mubi4_test_invalid__45__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18412382190552829732ull);
    vlSelf->__Vfunc_mubi4_test_invalid__46__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5568508473264236634ull);
    vlSelf->__Vfunc_mubi4_test_invalid__46__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15021140018681045840ull);
    vlSelf->__Vfunc_sbox4_64bit__47__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17303182115230987573ull);
    vlSelf->__Vfunc_sbox4_8bit__48__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7679029556148552234ull);
    vlSelf->__Vfunc_prince_mult_prime_64bit__49__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16279631978864432789ull);
    vlSelf->__Vfunc_prince_shiftrows_64bit__66__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7025455518623451416ull);
    vlSelf->__Vfunc_prince_mult_prime_64bit__67__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 912268833323024985ull);
    vlSelf->__Vfunc_prince_shiftrows_64bit__84__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6430578171276866696ull);
    vlSelf->__Vfunc_prince_mult_prime_64bit__85__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1808626267249137219ull);
    vlSelf->__Vfunc_sbox4_64bit__102__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8844495761589105464ull);
    vlSelf->__Vfunc_sbox4_8bit__103__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11086123785196216885ull);
    vlSelf->__Vfunc_prince_mult_prime_64bit__104__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1030806305156365621ull);
    vlSelf->__Vfunc_sbox4_64bit__121__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12509990812898507945ull);
    vlSelf->__Vfunc_sbox4_8bit__122__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13955544823421608229ull);
    vlSelf->__Vfunc_prince_mult_prime_64bit__123__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6595144532429695883ull);
    vlSelf->__Vfunc_sbox4_64bit__140__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14153911650615011522ull);
    vlSelf->__Vfunc_sbox4_8bit__141__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17485288499815986015ull);
    vlSelf->__Vfunc_sbox4_64bit__142__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15787392234278068979ull);
    vlSelf->__Vfunc_sbox4_8bit__143__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10073798536625110473ull);
    vlSelf->__Vfunc_sbox4_64bit__144__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12884579020363852773ull);
    vlSelf->__Vfunc_sbox4_8bit__145__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11921267177162336562ull);
    vlSelf->__Vfunc_prince_shiftrows_64bit__146__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8575498453550628926ull);
    vlSelf->__Vfunc_prince_shiftrows_64bit__147__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13786785226206739233ull);
    vlSelf->__Vfunc_mubi4_or__153__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2512649759359138508ull);
    vlSelf->__Vfunc_mubi4_and__154__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3747185609983227123ull);
    vlSelf->__Vfunc_mubi4_and__155__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 36203437967164770ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__156__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2695901242510128342ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__156__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14883657439091826880ull);
    vlSelf->__Vfunc_mubi4_or_hi__157__Vfuncout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14982111889939393692ull);
    vlSelf->__Vfunc_mubi4_or_hi__157__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2490093490258989151ull);
    vlSelf->__Vfunc_mubi4_or_hi__157__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 642542090622131131ull);
    vlSelf->__Vfunc_mubi4_or_hi__158__Vfuncout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8478003351642586778ull);
    vlSelf->__Vfunc_mubi4_or_hi__158__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17703188686275357304ull);
    vlSelf->__Vfunc_mubi4_or_hi__158__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16439870535878459436ull);
    vlSelf->__Vfunc_mubi4_or__159__Vfuncout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16976039194489328451ull);
    vlSelf->__Vfunc_mubi4_or__159__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2174657866380338238ull);
    vlSelf->__Vfunc_mubi4_or__159__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3308068391951058453ull);
    vlSelf->__Vfunc_mubi4_or__159__a_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15793663583058857964ull);
    vlSelf->__Vfunc_mubi4_or__159__b_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9222021115435741955ull);
    vlSelf->__Vfunc_mubi4_or__159__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7334049637758771734ull);
    vlSelf->__Vfunc_mubi4_or__160__Vfuncout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8053298850840200849ull);
    vlSelf->__Vfunc_mubi4_or__160__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8438843463004155789ull);
    vlSelf->__Vfunc_mubi4_or__160__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11163976652963250206ull);
    vlSelf->__Vfunc_mubi4_or__160__a_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12853786380899659087ull);
    vlSelf->__Vfunc_mubi4_or__160__b_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15153396071178948489ull);
    vlSelf->__Vfunc_mubi4_or__160__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8852126469304839467ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__161__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1407527410915653186ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__161__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7149477703258033147ull);
    vlSelf->__Vfunc_mubi4_or_hi__162__Vfuncout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8252835138937372636ull);
    vlSelf->__Vfunc_mubi4_or_hi__162__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11942167186099798238ull);
    vlSelf->__Vfunc_mubi4_or_hi__162__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8563978456813614135ull);
    vlSelf->__Vfunc_mubi4_or__163__Vfuncout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5581224136948674559ull);
    vlSelf->__Vfunc_mubi4_or__163__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14304865180557500985ull);
    vlSelf->__Vfunc_mubi4_or__163__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12020942135830275905ull);
    vlSelf->__Vfunc_mubi4_or__163__a_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16962147383318023071ull);
    vlSelf->__Vfunc_mubi4_or__163__b_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4279490518491880087ull);
    vlSelf->__Vfunc_mubi4_or__163__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9107294336439562233ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__164__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16259438393986823426ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__164__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17398576526211520544ull);
    vlSelf->__Vfunc_mubi4_and__167__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13041767180930751024ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__168__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12842043123771513158ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__168__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10769811317938764514ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__170__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 903717359833728405ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__170__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5038567976364321465ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__171__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15647917812721769117ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__171__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13273998527777406952ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__172__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15158726436508290759ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__172__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13206687487414310181ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__173__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13628625404714510705ull);
    vlSelf->__Vfunc_mubi4_test_true_loose__173__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16663010936342080946ull);
    vlSelf->__Vfunc_mubi4_test_invalid__174__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5418923514493553976ull);
    vlSelf->__Vfunc_mubi4_test_invalid__174__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6369740834582863079ull);
    vlSelf->__Vfunc_mubi4_test_invalid__175__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15037861347439243000ull);
    vlSelf->__Vfunc_mubi4_test_invalid__175__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10097510049252621800ull);
    vlSelf->__Vfunc_mubi4_test_invalid__176__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3325722439683189689ull);
    vlSelf->__Vfunc_mubi4_test_invalid__176__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11436913417488607717ull);
    vlSelf->__Vfunc_mubi4_test_invalid__177__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12187275537094022252ull);
    vlSelf->__Vfunc_mubi4_test_invalid__177__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10022314672163544540ull);
    vlSelf->__Vfunc_mubi4_and__185__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12387177630082018862ull);
    vlSelf->__Vfunc_mubi4_and__187__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12218878922283897933ull);
    vlSelf->__Vfunc_mubi4_test_invalid__191__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2689727129545793886ull);
    vlSelf->__Vfunc_mubi4_test_invalid__191__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14801937453262005984ull);
    vlSelf->__Vfunc_mubi4_test_invalid__192__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17007524932702488226ull);
    vlSelf->__Vfunc_mubi4_test_invalid__192__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6436474140901913171ull);
    vlSelf->__Vfunc_mubi4_test_invalid__193__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12371291997235877040ull);
    vlSelf->__Vfunc_mubi4_test_invalid__193__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 749351724830959892ull);
    vlSelf->__Vfunc_mubi4_test_invalid__194__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2949995076974950894ull);
    vlSelf->__Vfunc_mubi4_test_invalid__194__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11807184017412872797ull);
    vlSelf->__Vfunc_sbox4_64bit__195__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18017555614946268854ull);
    vlSelf->__Vfunc_sbox4_8bit__196__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5037398798108402370ull);
    vlSelf->__Vfunc_prince_mult_prime_64bit__197__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7517435610243671728ull);
    vlSelf->__Vfunc_prince_shiftrows_64bit__214__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15588802703304089901ull);
    vlSelf->__Vfunc_prince_mult_prime_64bit__215__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16556319749810299468ull);
    vlSelf->__Vfunc_prince_shiftrows_64bit__232__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10863495727792652611ull);
    vlSelf->__Vfunc_prince_mult_prime_64bit__233__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5374005605584039117ull);
    vlSelf->__Vfunc_sbox4_64bit__250__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7921348577880156019ull);
    vlSelf->__Vfunc_sbox4_8bit__251__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17570115088923238058ull);
    vlSelf->__Vfunc_prince_mult_prime_64bit__252__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7540494109409760447ull);
    vlSelf->__Vfunc_sbox4_64bit__269__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8898271799276761960ull);
    vlSelf->__Vfunc_sbox4_8bit__270__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9219045553475487609ull);
    vlSelf->__Vfunc_prince_mult_prime_64bit__271__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1799304093432713757ull);
    vlSelf->__Vfunc_sbox4_64bit__288__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13759240269941913042ull);
    vlSelf->__Vfunc_sbox4_8bit__289__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16191283028430275826ull);
    vlSelf->__Vfunc_sbox4_64bit__290__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5223939097849392769ull);
    vlSelf->__Vfunc_sbox4_8bit__291__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5287474869636317450ull);
    vlSelf->__Vfunc_sbox4_64bit__292__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12354160199816962680ull);
    vlSelf->__Vfunc_sbox4_8bit__293__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10408350584060559920ull);
    vlSelf->__Vfunc_prince_shiftrows_64bit__294__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3770104670746483762ull);
    vlSelf->__Vfunc_prince_shiftrows_64bit__295__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4266987662004239475ull);
}
