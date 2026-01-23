// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_ram_1p_scr__pi151___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank__1(Vsim_prim_ram_1p_scr__pi151* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__2;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__2 = 0;
    QData/*63:0*/ gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__2;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__2 = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__169__Vfuncout;
    __Vfunc_mubi4_test_true_loose__169__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__169__val;
    __Vfunc_mubi4_test_true_loose__169__val = 0;
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
    CData/*31:0*/ __Vtemp_5;
    // Body
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
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__rw_collision) {
            vlSelfRef.__PVT__wdata_scr_q[0U] = vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i[0U];
            vlSelfRef.__PVT__wdata_scr_q[1U] = vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i[1U];
            vlSelfRef.__PVT__wdata_scr_q[2U] = vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i[2U];
        }
        if (vlSelfRef.__PVT__write_en_b) {
            vlSelfRef.__PVT__waddr_scr_q = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o;
            vlSelfRef.__PVT__intg_error_w_q = 0U;
            vlSelfRef.__PVT__wdata_q[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_wdata_o[0U];
            vlSelfRef.__PVT__wdata_q[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_wdata_o[1U];
            vlSelfRef.__PVT__wdata_q[2U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_wdata_o[2U];
            vlSelfRef.__PVT__wmask_q[0U] = 0xffffffffU;
            vlSelfRef.__PVT__wmask_q[1U] = 0xffffffffU;
            vlSelfRef.__PVT__wmask_q[2U] = 0x00003fffU;
        }
        if (vlSelfRef.__PVT__read_en_b) {
            vlSelfRef.__PVT__raddr_q = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_tag_addr_o;
        }
        vlSelfRef.__PVT__write_pending_q = vlSelfRef.__PVT__u_write_pending_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.__PVT__write_en_q = vlSelfRef.__PVT__write_en_d;
        vlSelfRef.__PVT__addr_collision_q = vlSelfRef.__PVT__addr_collision_d;
        vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q 
            = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_d;
        vlSelfRef.__PVT__rvalid_q = vlSelfRef.__PVT__read_en;
        if (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i) {
            vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q 
                = vlSelfRef.gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__2;
        }
    } else {
        vlSelfRef.__PVT__wdata_scr_q[0U] = 0U;
        vlSelfRef.__PVT__wdata_scr_q[1U] = 0U;
        vlSelfRef.__PVT__wdata_scr_q[2U] = 0U;
        vlSelfRef.__PVT__waddr_scr_q = 0U;
        vlSelfRef.__PVT__intg_error_w_q = 0U;
        vlSelfRef.__PVT__raddr_q = 0U;
        vlSelfRef.__PVT__write_pending_q = 9U;
        vlSelfRef.__PVT__write_en_q = 9U;
        vlSelfRef.__PVT__wdata_q[0U] = 0U;
        vlSelfRef.__PVT__wdata_q[1U] = 0U;
        vlSelfRef.__PVT__wdata_q[2U] = 0U;
        vlSelfRef.__PVT__addr_collision_q = 9U;
        vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q = 9U;
        vlSelfRef.__PVT__rvalid_q = 9U;
        vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q = 0ULL;
        vlSelfRef.__PVT__wmask_q[0U] = 0U;
        vlSelfRef.__PVT__wmask_q[1U] = 0U;
        vlSelfRef.__PVT__wmask_q[2U] = 0U;
    }
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_data_reg__DOT__valid_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i));
    vlSelfRef.__PVT__intg_error_r_q = 0U;
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__inst_req_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__req_q_b));
    __Vfunc_mubi4_test_true_loose__169__val = vlSelfRef.__PVT__addr_collision_q;
    __Vfunc_mubi4_test_true_loose__169__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__169__val));
    vlSelfRef.__PVT__wr_collision_o = __Vfunc_mubi4_test_true_loose__169__Vfuncout;
    __Vfunc_mubi4_test_true_loose__190__val = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
    __Vfunc_mubi4_test_true_loose__190__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__190__val));
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_o 
        = __Vfunc_mubi4_test_true_loose__190__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__233__state_in 
        = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
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
    vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i[0U] 
        = (vlSelfRef.__PVT__wdata_q[0U] ^ (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o));
    vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i[1U] 
        = (vlSelfRef.__PVT__wdata_q[1U] ^ (IData)((vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o 
                                                   >> 0x00000020U)));
    vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i[2U] 
        = (0x00003fffU & (vlSelfRef.__PVT__wdata_q[2U] 
                          ^ (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o)));
    __Vtemp_5 = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_loose__171__val 
                = vlSelfRef.__PVT__write_pending_q;
            vlSelfRef.__Vfunc_mubi4_test_true_loose__171__Vfuncout 
                = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__171__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__171__Vfuncout));
    if (__Vtemp_5) {
        vlSelfRef.__PVT__wdata_scr[0U] = vlSelfRef.__PVT__wdata_scr_q[0U];
        vlSelfRef.__PVT__wdata_scr[1U] = vlSelfRef.__PVT__wdata_scr_q[1U];
        vlSelfRef.__PVT__wdata_scr[2U] = vlSelfRef.__PVT__wdata_scr_q[2U];
    } else {
        vlSelfRef.__PVT__wdata_scr[0U] = vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i[0U];
        vlSelfRef.__PVT__wdata_scr[1U] = vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i[1U];
        vlSelfRef.__PVT__wdata_scr[2U] = vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i[2U];
    }
}

void Vsim_prim_ram_1p_scr__pi151___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank__0(Vsim_prim_ram_1p_scr__pi151* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0;
    u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0 = 0;
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
    // Body
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram[0U] = 0U;
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram[1U] = 0U;
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram[2U] = 0U;
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
        vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram[0U] 
            = vlSelfRef.u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[0U];
        vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram[1U] 
            = vlSelfRef.u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[1U];
        vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram[2U] 
            = vlSelfRef.u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[2U];
    }
    vlSelfRef.__PVT__rdata[0U] = (vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram[0U] 
                                  ^ (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o));
    vlSelfRef.__PVT__rdata[1U] = (vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram[1U] 
                                  ^ (IData)((vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o 
                                             >> 0x00000020U)));
    vlSelfRef.__PVT__rdata[2U] = (0x00003fffU & (vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram[2U] 
                                                 ^ (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o)));
    vlSelfRef.rdata_o[0U] = 0U;
    vlSelfRef.rdata_o[1U] = 0U;
    vlSelfRef.rdata_o[2U] = 0U;
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
            if ((1U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & vlSelfRef.__PVT__wdata_q[0U]);
                vlSelfRef.rdata_o[0U] = ((0xfffffffeU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | (IData)(vlSelfRef.__Vlvbound_h2924589b__0));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & vlSelfRef.__PVT__rdata[0U]);
                vlSelfRef.rdata_o[0U] = ((0xfffffffeU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | (IData)(vlSelfRef.__Vlvbound_h2924589b__1));
            }
            vlSelfRef.__PVT__p_forward_mux__DOT__unnamedblk1__DOT__k = 0x0000004eU;
            if ((2U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 1U));
                vlSelfRef.rdata_o[0U] = ((0xfffffffdU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 1U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 1U));
                vlSelfRef.rdata_o[0U] = ((0xfffffffdU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 1U));
            }
            if ((4U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 2U));
                vlSelfRef.rdata_o[0U] = ((0xfffffffbU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 2U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 2U));
                vlSelfRef.rdata_o[0U] = ((0xfffffffbU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 2U));
            }
            if ((8U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 3U));
                vlSelfRef.rdata_o[0U] = ((0xfffffff7U 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 3U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 3U));
                vlSelfRef.rdata_o[0U] = ((0xfffffff7U 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 3U));
            }
            if ((0x00000010U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 4U));
                vlSelfRef.rdata_o[0U] = ((0xffffffefU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 4U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 4U));
                vlSelfRef.rdata_o[0U] = ((0xffffffefU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 4U));
            }
            if ((0x00000020U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 5U));
                vlSelfRef.rdata_o[0U] = ((0xffffffdfU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 5U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 5U));
                vlSelfRef.rdata_o[0U] = ((0xffffffdfU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 5U));
            }
            if ((0x00000040U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 6U));
                vlSelfRef.rdata_o[0U] = ((0xffffffbfU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 6U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 6U));
                vlSelfRef.rdata_o[0U] = ((0xffffffbfU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 6U));
            }
            if ((0x00000080U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 7U));
                vlSelfRef.rdata_o[0U] = ((0xffffff7fU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 7U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 7U));
                vlSelfRef.rdata_o[0U] = ((0xffffff7fU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 7U));
            }
            if ((0x00000100U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 8U));
                vlSelfRef.rdata_o[0U] = ((0xfffffeffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 8U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 8U));
                vlSelfRef.rdata_o[0U] = ((0xfffffeffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 8U));
            }
            if ((0x00000200U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 9U));
                vlSelfRef.rdata_o[0U] = ((0xfffffdffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 9U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 9U));
                vlSelfRef.rdata_o[0U] = ((0xfffffdffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 9U));
            }
            if ((0x00000400U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x0000000aU));
                vlSelfRef.rdata_o[0U] = ((0xfffffbffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000000aU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x0000000aU));
                vlSelfRef.rdata_o[0U] = ((0xfffffbffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000000aU));
            }
            if ((0x00000800U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x0000000bU));
                vlSelfRef.rdata_o[0U] = ((0xfffff7ffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000000bU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x0000000bU));
                vlSelfRef.rdata_o[0U] = ((0xfffff7ffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000000bU));
            }
            if ((0x00001000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x0000000cU));
                vlSelfRef.rdata_o[0U] = ((0xffffefffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000000cU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x0000000cU));
                vlSelfRef.rdata_o[0U] = ((0xffffefffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000000cU));
            }
            if ((0x00002000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x0000000dU));
                vlSelfRef.rdata_o[0U] = ((0xffffdfffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000000dU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x0000000dU));
                vlSelfRef.rdata_o[0U] = ((0xffffdfffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000000dU));
            }
            if ((0x00004000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x0000000eU));
                vlSelfRef.rdata_o[0U] = ((0xffffbfffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000000eU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x0000000eU));
                vlSelfRef.rdata_o[0U] = ((0xffffbfffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000000eU));
            }
            if ((0x00008000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x0000000fU));
                vlSelfRef.rdata_o[0U] = ((0xffff7fffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000000fU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x0000000fU));
                vlSelfRef.rdata_o[0U] = ((0xffff7fffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000000fU));
            }
            if ((0x00010000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x00000010U));
                vlSelfRef.rdata_o[0U] = ((0xfffeffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000010U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x00000010U));
                vlSelfRef.rdata_o[0U] = ((0xfffeffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000010U));
            }
            if ((0x00020000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x00000011U));
                vlSelfRef.rdata_o[0U] = ((0xfffdffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000011U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x00000011U));
                vlSelfRef.rdata_o[0U] = ((0xfffdffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000011U));
            }
            if ((0x00040000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x00000012U));
                vlSelfRef.rdata_o[0U] = ((0xfffbffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000012U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x00000012U));
                vlSelfRef.rdata_o[0U] = ((0xfffbffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000012U));
            }
            if ((0x00080000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x00000013U));
                vlSelfRef.rdata_o[0U] = ((0xfff7ffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000013U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x00000013U));
                vlSelfRef.rdata_o[0U] = ((0xfff7ffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000013U));
            }
            if ((0x00100000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x00000014U));
                vlSelfRef.rdata_o[0U] = ((0xffefffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000014U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x00000014U));
                vlSelfRef.rdata_o[0U] = ((0xffefffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000014U));
            }
            if ((0x00200000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x00000015U));
                vlSelfRef.rdata_o[0U] = ((0xffdfffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000015U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x00000015U));
                vlSelfRef.rdata_o[0U] = ((0xffdfffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000015U));
            }
            if ((0x00400000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x00000016U));
                vlSelfRef.rdata_o[0U] = ((0xffbfffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000016U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x00000016U));
                vlSelfRef.rdata_o[0U] = ((0xffbfffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000016U));
            }
            if ((0x00800000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x00000017U));
                vlSelfRef.rdata_o[0U] = ((0xff7fffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000017U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x00000017U));
                vlSelfRef.rdata_o[0U] = ((0xff7fffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000017U));
            }
            if ((0x01000000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x00000018U));
                vlSelfRef.rdata_o[0U] = ((0xfeffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000018U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x00000018U));
                vlSelfRef.rdata_o[0U] = ((0xfeffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000018U));
            }
            if ((0x02000000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x00000019U));
                vlSelfRef.rdata_o[0U] = ((0xfdffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000019U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x00000019U));
                vlSelfRef.rdata_o[0U] = ((0xfdffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000019U));
            }
            if ((0x04000000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x0000001aU));
                vlSelfRef.rdata_o[0U] = ((0xfbffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000001aU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x0000001aU));
                vlSelfRef.rdata_o[0U] = ((0xfbffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000001aU));
            }
            if ((0x08000000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x0000001bU));
                vlSelfRef.rdata_o[0U] = ((0xf7ffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000001bU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x0000001bU));
                vlSelfRef.rdata_o[0U] = ((0xf7ffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000001bU));
            }
            if ((0x10000000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x0000001cU));
                vlSelfRef.rdata_o[0U] = ((0xefffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000001cU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x0000001cU));
                vlSelfRef.rdata_o[0U] = ((0xefffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000001cU));
            }
            if ((0x20000000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x0000001dU));
                vlSelfRef.rdata_o[0U] = ((0xdfffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000001dU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x0000001dU));
                vlSelfRef.rdata_o[0U] = ((0xdfffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000001dU));
            }
            if ((0x40000000U & vlSelfRef.__PVT__wmask_q[0U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[0U] 
                           >> 0x0000001eU));
                vlSelfRef.rdata_o[0U] = ((0xbfffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000001eU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[0U] 
                           >> 0x0000001eU));
                vlSelfRef.rdata_o[0U] = ((0xbfffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000001eU));
            }
            if ((vlSelfRef.__PVT__wmask_q[0U] >> 0x0000001fU)) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (vlSelfRef.__PVT__wdata_q[0U] >> 0x0000001fU);
                vlSelfRef.rdata_o[0U] = ((0x7fffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000001fU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (vlSelfRef.__PVT__rdata[0U] >> 0x0000001fU);
                vlSelfRef.rdata_o[0U] = ((0x7fffffffU 
                                          & vlSelfRef.rdata_o[0U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000001fU));
            }
            if ((1U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & vlSelfRef.__PVT__wdata_q[1U]);
                vlSelfRef.rdata_o[1U] = ((0xfffffffeU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | (IData)(vlSelfRef.__Vlvbound_h2924589b__0));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & vlSelfRef.__PVT__rdata[1U]);
                vlSelfRef.rdata_o[1U] = ((0xfffffffeU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | (IData)(vlSelfRef.__Vlvbound_h2924589b__1));
            }
            if ((2U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 1U));
                vlSelfRef.rdata_o[1U] = ((0xfffffffdU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 1U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 1U));
                vlSelfRef.rdata_o[1U] = ((0xfffffffdU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 1U));
            }
            if ((4U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 2U));
                vlSelfRef.rdata_o[1U] = ((0xfffffffbU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 2U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 2U));
                vlSelfRef.rdata_o[1U] = ((0xfffffffbU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 2U));
            }
            if ((8U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 3U));
                vlSelfRef.rdata_o[1U] = ((0xfffffff7U 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 3U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 3U));
                vlSelfRef.rdata_o[1U] = ((0xfffffff7U 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 3U));
            }
            if ((0x00000010U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 4U));
                vlSelfRef.rdata_o[1U] = ((0xffffffefU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 4U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 4U));
                vlSelfRef.rdata_o[1U] = ((0xffffffefU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 4U));
            }
            if ((0x00000020U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 5U));
                vlSelfRef.rdata_o[1U] = ((0xffffffdfU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 5U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 5U));
                vlSelfRef.rdata_o[1U] = ((0xffffffdfU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 5U));
            }
            if ((0x00000040U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 6U));
                vlSelfRef.rdata_o[1U] = ((0xffffffbfU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 6U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 6U));
                vlSelfRef.rdata_o[1U] = ((0xffffffbfU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 6U));
            }
            if ((0x00000080U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 7U));
                vlSelfRef.rdata_o[1U] = ((0xffffff7fU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 7U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 7U));
                vlSelfRef.rdata_o[1U] = ((0xffffff7fU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 7U));
            }
            if ((0x00000100U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 8U));
                vlSelfRef.rdata_o[1U] = ((0xfffffeffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 8U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 8U));
                vlSelfRef.rdata_o[1U] = ((0xfffffeffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 8U));
            }
            if ((0x00000200U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 9U));
                vlSelfRef.rdata_o[1U] = ((0xfffffdffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 9U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 9U));
                vlSelfRef.rdata_o[1U] = ((0xfffffdffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 9U));
            }
            if ((0x00000400U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x0000000aU));
                vlSelfRef.rdata_o[1U] = ((0xfffffbffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000000aU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x0000000aU));
                vlSelfRef.rdata_o[1U] = ((0xfffffbffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000000aU));
            }
            if ((0x00000800U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x0000000bU));
                vlSelfRef.rdata_o[1U] = ((0xfffff7ffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000000bU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x0000000bU));
                vlSelfRef.rdata_o[1U] = ((0xfffff7ffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000000bU));
            }
            if ((0x00001000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x0000000cU));
                vlSelfRef.rdata_o[1U] = ((0xffffefffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000000cU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x0000000cU));
                vlSelfRef.rdata_o[1U] = ((0xffffefffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000000cU));
            }
            if ((0x00002000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x0000000dU));
                vlSelfRef.rdata_o[1U] = ((0xffffdfffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000000dU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x0000000dU));
                vlSelfRef.rdata_o[1U] = ((0xffffdfffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000000dU));
            }
            if ((0x00004000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x0000000eU));
                vlSelfRef.rdata_o[1U] = ((0xffffbfffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000000eU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x0000000eU));
                vlSelfRef.rdata_o[1U] = ((0xffffbfffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000000eU));
            }
            if ((0x00008000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x0000000fU));
                vlSelfRef.rdata_o[1U] = ((0xffff7fffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000000fU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x0000000fU));
                vlSelfRef.rdata_o[1U] = ((0xffff7fffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000000fU));
            }
            if ((0x00010000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x00000010U));
                vlSelfRef.rdata_o[1U] = ((0xfffeffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000010U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x00000010U));
                vlSelfRef.rdata_o[1U] = ((0xfffeffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000010U));
            }
            if ((0x00020000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x00000011U));
                vlSelfRef.rdata_o[1U] = ((0xfffdffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000011U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x00000011U));
                vlSelfRef.rdata_o[1U] = ((0xfffdffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000011U));
            }
            if ((0x00040000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x00000012U));
                vlSelfRef.rdata_o[1U] = ((0xfffbffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000012U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x00000012U));
                vlSelfRef.rdata_o[1U] = ((0xfffbffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000012U));
            }
            if ((0x00080000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x00000013U));
                vlSelfRef.rdata_o[1U] = ((0xfff7ffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000013U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x00000013U));
                vlSelfRef.rdata_o[1U] = ((0xfff7ffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000013U));
            }
            if ((0x00100000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x00000014U));
                vlSelfRef.rdata_o[1U] = ((0xffefffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000014U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x00000014U));
                vlSelfRef.rdata_o[1U] = ((0xffefffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000014U));
            }
            if ((0x00200000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x00000015U));
                vlSelfRef.rdata_o[1U] = ((0xffdfffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000015U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x00000015U));
                vlSelfRef.rdata_o[1U] = ((0xffdfffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000015U));
            }
            if ((0x00400000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x00000016U));
                vlSelfRef.rdata_o[1U] = ((0xffbfffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000016U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x00000016U));
                vlSelfRef.rdata_o[1U] = ((0xffbfffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000016U));
            }
            if ((0x00800000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x00000017U));
                vlSelfRef.rdata_o[1U] = ((0xff7fffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000017U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x00000017U));
                vlSelfRef.rdata_o[1U] = ((0xff7fffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000017U));
            }
            if ((0x01000000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x00000018U));
                vlSelfRef.rdata_o[1U] = ((0xfeffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000018U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x00000018U));
                vlSelfRef.rdata_o[1U] = ((0xfeffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000018U));
            }
            if ((0x02000000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x00000019U));
                vlSelfRef.rdata_o[1U] = ((0xfdffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x00000019U));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x00000019U));
                vlSelfRef.rdata_o[1U] = ((0xfdffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x00000019U));
            }
            if ((0x04000000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x0000001aU));
                vlSelfRef.rdata_o[1U] = ((0xfbffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000001aU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x0000001aU));
                vlSelfRef.rdata_o[1U] = ((0xfbffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000001aU));
            }
            if ((0x08000000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x0000001bU));
                vlSelfRef.rdata_o[1U] = ((0xf7ffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000001bU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x0000001bU));
                vlSelfRef.rdata_o[1U] = ((0xf7ffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000001bU));
            }
            if ((0x10000000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x0000001cU));
                vlSelfRef.rdata_o[1U] = ((0xefffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000001cU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x0000001cU));
                vlSelfRef.rdata_o[1U] = ((0xefffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000001cU));
            }
            if ((0x20000000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x0000001dU));
                vlSelfRef.rdata_o[1U] = ((0xdfffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000001dU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x0000001dU));
                vlSelfRef.rdata_o[1U] = ((0xdfffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000001dU));
            }
            if ((0x40000000U & vlSelfRef.__PVT__wmask_q[1U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[1U] 
                           >> 0x0000001eU));
                vlSelfRef.rdata_o[1U] = ((0xbfffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000001eU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[1U] 
                           >> 0x0000001eU));
                vlSelfRef.rdata_o[1U] = ((0xbfffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000001eU));
            }
            if ((vlSelfRef.__PVT__wmask_q[1U] >> 0x0000001fU)) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (vlSelfRef.__PVT__wdata_q[1U] >> 0x0000001fU);
                vlSelfRef.rdata_o[1U] = ((0x7fffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                            << 0x0000001fU));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (vlSelfRef.__PVT__rdata[1U] >> 0x0000001fU);
                vlSelfRef.rdata_o[1U] = ((0x7fffffffU 
                                          & vlSelfRef.rdata_o[1U]) 
                                         | ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                            << 0x0000001fU));
            }
            if ((1U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & vlSelfRef.__PVT__wdata_q[2U]);
                vlSelfRef.rdata_o[2U] = ((0x00003ffeU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & (IData)(vlSelfRef.__Vlvbound_h2924589b__0)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & vlSelfRef.__PVT__rdata[2U]);
                vlSelfRef.rdata_o[2U] = ((0x00003ffeU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & (IData)(vlSelfRef.__Vlvbound_h2924589b__1)));
            }
            if ((2U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 1U));
                vlSelfRef.rdata_o[2U] = ((0x00003ffdU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 1U)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 1U));
                vlSelfRef.rdata_o[2U] = ((0x00003ffdU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 1U)));
            }
            if ((4U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 2U));
                vlSelfRef.rdata_o[2U] = ((0x00003ffbU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 2U)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 2U));
                vlSelfRef.rdata_o[2U] = ((0x00003ffbU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 2U)));
            }
            if ((8U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 3U));
                vlSelfRef.rdata_o[2U] = ((0x00003ff7U 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 3U)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 3U));
                vlSelfRef.rdata_o[2U] = ((0x00003ff7U 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 3U)));
            }
            if ((0x00000010U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 4U));
                vlSelfRef.rdata_o[2U] = ((0x00003fefU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 4U)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 4U));
                vlSelfRef.rdata_o[2U] = ((0x00003fefU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 4U)));
            }
            if ((0x00000020U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 5U));
                vlSelfRef.rdata_o[2U] = ((0x00003fdfU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 5U)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 5U));
                vlSelfRef.rdata_o[2U] = ((0x00003fdfU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 5U)));
            }
            if ((0x00000040U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 6U));
                vlSelfRef.rdata_o[2U] = ((0x00003fbfU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 6U)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 6U));
                vlSelfRef.rdata_o[2U] = ((0x00003fbfU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 6U)));
            }
            if ((0x00000080U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 7U));
                vlSelfRef.rdata_o[2U] = ((0x00003f7fU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 7U)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 7U));
                vlSelfRef.rdata_o[2U] = ((0x00003f7fU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 7U)));
            }
            if ((0x00000100U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 8U));
                vlSelfRef.rdata_o[2U] = ((0x00003effU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 8U)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 8U));
                vlSelfRef.rdata_o[2U] = ((0x00003effU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 8U)));
            }
            if ((0x00000200U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 9U));
                vlSelfRef.rdata_o[2U] = ((0x00003dffU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 9U)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 9U));
                vlSelfRef.rdata_o[2U] = ((0x00003dffU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 9U)));
            }
            if ((0x00000400U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 0x0000000aU));
                vlSelfRef.rdata_o[2U] = ((0x00003bffU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 0x0000000aU)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 0x0000000aU));
                vlSelfRef.rdata_o[2U] = ((0x00003bffU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 0x0000000aU)));
            }
            if ((0x00000800U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 0x0000000bU));
                vlSelfRef.rdata_o[2U] = ((0x000037ffU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 0x0000000bU)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 0x0000000bU));
                vlSelfRef.rdata_o[2U] = ((0x000037ffU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 0x0000000bU)));
            }
            if ((0x00001000U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 0x0000000cU));
                vlSelfRef.rdata_o[2U] = ((0x00002fffU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 0x0000000cU)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 0x0000000cU));
                vlSelfRef.rdata_o[2U] = ((0x00002fffU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 0x0000000cU)));
            }
            if ((0x00002000U & vlSelfRef.__PVT__wmask_q[2U])) {
                vlSelfRef.__Vlvbound_h2924589b__0 = 
                    (1U & (vlSelfRef.__PVT__wdata_q[2U] 
                           >> 0x0000000dU));
                vlSelfRef.rdata_o[2U] = ((0x00001fffU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__0) 
                                               << 0x0000000dU)));
            } else {
                vlSelfRef.__Vlvbound_h2924589b__1 = 
                    (1U & (vlSelfRef.__PVT__rdata[2U] 
                           >> 0x0000000dU));
                vlSelfRef.rdata_o[2U] = ((0x00001fffU 
                                          & vlSelfRef.rdata_o[2U]) 
                                         | (0x00003fffU 
                                            & ((IData)(vlSelfRef.__Vlvbound_h2924589b__1) 
                                               << 0x0000000dU)));
            }
        } else {
            vlSelfRef.rdata_o[0U] = vlSelfRef.__PVT__rdata[0U];
            vlSelfRef.rdata_o[1U] = vlSelfRef.__PVT__rdata[1U];
            vlSelfRef.rdata_o[2U] = vlSelfRef.__PVT__rdata[2U];
        }
    }
}
