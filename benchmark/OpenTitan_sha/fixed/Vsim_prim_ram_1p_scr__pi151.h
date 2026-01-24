// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_RAM_1P_SCR__PI151_H_
#define VERILATED_VSIM_PRIM_RAM_1P_SCR__PI151_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_ram_1p_scr__pi151 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(key_valid_i,0,0);
        VL_IN8(req_i,0,0);
        VL_OUT8(__PVT__gnt_o,0,0);
        VL_IN8(write_i,0,0);
        VL_IN8(addr_i,7,0);
        VL_IN8(intg_error_i,0,0);
        VL_OUT8(__PVT__rvalid_o,0,0);
        VL_OUT8(__PVT__rerror_o,1,0);
        VL_OUT8(cfg_rsp_o,0,0);
        VL_OUT8(__PVT__wr_collision_o,0,0);
        VL_OUT8(__PVT__write_pending_o,0,0);
        VL_OUT8(alert_o,0,0);
        CData/*3:0*/ __PVT__read_en;
        CData/*0:0*/ __PVT__read_en_b;
        CData/*3:0*/ __PVT__write_en_d;
        CData/*3:0*/ __PVT__write_en_q;
        CData/*0:0*/ __PVT__write_en_b;
        CData/*3:0*/ __PVT__write_pending_q;
        CData/*3:0*/ __PVT__addr_collision_d;
        CData/*3:0*/ __PVT__addr_collision_q;
        CData/*7:0*/ __PVT__waddr_scr_q;
        CData/*0:0*/ __PVT__intg_error_w_q;
        CData/*0:0*/ __PVT__macro_req;
        CData/*0:0*/ __PVT__macro_write;
        CData/*0:0*/ __PVT__rw_collision;
        CData/*7:0*/ __PVT__addr_mux;
        CData/*7:0*/ __PVT__raddr_q;
        CData/*3:0*/ __PVT__rvalid_q;
        CData/*0:0*/ __PVT__intg_error_r_q;
        CData/*0:0*/ __PVT__ram_alert;
        CData/*0:0*/ __Vlvbound_h2924589b__0;
        CData/*0:0*/ __Vlvbound_h2924589b__1;
        CData/*3:0*/ __PVT__u_write_pending_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        CData/*0:0*/ __PVT__u_prim_ram_1p_adv__DOT__rvalid_o;
        CData/*3:0*/ __PVT__u_prim_ram_1p_adv__DOT__req_d;
        CData/*0:0*/ __PVT__u_prim_ram_1p_adv__DOT__req_q_b;
        CData/*3:0*/ __PVT__u_prim_ram_1p_adv__DOT__write_d;
        CData/*0:0*/ __PVT__u_prim_ram_1p_adv__DOT__write_q_b;
        CData/*3:0*/ __PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
        CData/*3:0*/ __PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_d;
        CData/*0:0*/ __PVT__u_prim_ram_1p_adv__DOT__inst_req_q;
        CData/*0:0*/ __PVT__u_prim_ram_1p_adv__DOT__rvalid_inst;
        CData/*0:0*/ __PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths;
        CData/*7:0*/ __PVT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o;
        CData/*0:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i;
        CData/*0:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_data_reg__DOT__valid_q;
        CData/*3:0*/ __Vfunc_mubi4_or__5__out;
        CData/*3:0*/ __Vfunc_mubi4_and__6__out;
        CData/*3:0*/ __Vfunc_mubi4_and__7__out;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__8__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__8__val;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__9__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__9__a;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__9__b;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__10__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__10__a;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__10__b;
        CData/*3:0*/ __Vfunc_mubi4_or__11__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_or__11__a;
        CData/*3:0*/ __Vfunc_mubi4_or__11__b;
        CData/*3:0*/ __Vfunc_mubi4_or__11__a_in;
        CData/*3:0*/ __Vfunc_mubi4_or__11__b_in;
    };
    struct {
        CData/*3:0*/ __Vfunc_mubi4_or__11__out;
        CData/*3:0*/ __Vfunc_mubi4_or__12__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_or__12__a;
        CData/*3:0*/ __Vfunc_mubi4_or__12__b;
        CData/*3:0*/ __Vfunc_mubi4_or__12__a_in;
        CData/*3:0*/ __Vfunc_mubi4_or__12__b_in;
        CData/*3:0*/ __Vfunc_mubi4_or__12__out;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__13__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__13__val;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__14__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__14__a;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__14__b;
        CData/*3:0*/ __Vfunc_mubi4_or__15__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_or__15__a;
        CData/*3:0*/ __Vfunc_mubi4_or__15__b;
        CData/*3:0*/ __Vfunc_mubi4_or__15__a_in;
        CData/*3:0*/ __Vfunc_mubi4_or__15__b_in;
        CData/*3:0*/ __Vfunc_mubi4_or__15__out;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__16__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__16__val;
        CData/*3:0*/ __Vfunc_mubi4_and__19__out;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__20__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__20__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__22__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__22__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__23__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__23__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__24__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__24__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__25__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__25__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__26__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__26__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__27__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__27__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__28__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__28__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__29__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__29__val;
        CData/*3:0*/ __Vfunc_mubi4_and__37__out;
        CData/*3:0*/ __Vfunc_mubi4_and__39__out;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__43__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__43__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__44__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__44__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__45__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__45__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__46__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__46__val;
        CData/*7:0*/ __Vfunc_sbox4_8bit__48__state_out;
        CData/*7:0*/ __Vfunc_sbox4_8bit__103__state_out;
        CData/*7:0*/ __Vfunc_sbox4_8bit__122__state_out;
        CData/*7:0*/ __Vfunc_sbox4_8bit__141__state_out;
        CData/*7:0*/ __Vfunc_sbox4_8bit__143__state_out;
        CData/*7:0*/ __Vfunc_sbox4_8bit__145__state_out;
        CData/*3:0*/ __Vfunc_mubi4_or__153__out;
        CData/*3:0*/ __Vfunc_mubi4_and__154__out;
        CData/*3:0*/ __Vfunc_mubi4_and__155__out;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__156__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__156__val;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__157__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__157__a;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__157__b;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__158__Vfuncout;
    };
    struct {
        CData/*3:0*/ __Vfunc_mubi4_or_hi__158__a;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__158__b;
        CData/*3:0*/ __Vfunc_mubi4_or__159__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_or__159__a;
        CData/*3:0*/ __Vfunc_mubi4_or__159__b;
        CData/*3:0*/ __Vfunc_mubi4_or__159__a_in;
        CData/*3:0*/ __Vfunc_mubi4_or__159__b_in;
        CData/*3:0*/ __Vfunc_mubi4_or__159__out;
        CData/*3:0*/ __Vfunc_mubi4_or__160__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_or__160__a;
        CData/*3:0*/ __Vfunc_mubi4_or__160__b;
        CData/*3:0*/ __Vfunc_mubi4_or__160__a_in;
        CData/*3:0*/ __Vfunc_mubi4_or__160__b_in;
        CData/*3:0*/ __Vfunc_mubi4_or__160__out;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__161__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__161__val;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__162__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__162__a;
        CData/*3:0*/ __Vfunc_mubi4_or_hi__162__b;
        CData/*3:0*/ __Vfunc_mubi4_or__163__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_or__163__a;
        CData/*3:0*/ __Vfunc_mubi4_or__163__b;
        CData/*3:0*/ __Vfunc_mubi4_or__163__a_in;
        CData/*3:0*/ __Vfunc_mubi4_or__163__b_in;
        CData/*3:0*/ __Vfunc_mubi4_or__163__out;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__164__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__164__val;
        CData/*3:0*/ __Vfunc_mubi4_and__167__out;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__168__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__168__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__170__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__170__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__171__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__171__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__172__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__172__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__173__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__173__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__174__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__174__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__175__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__175__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__176__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__176__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__177__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__177__val;
        CData/*3:0*/ __Vfunc_mubi4_and__185__out;
        CData/*3:0*/ __Vfunc_mubi4_and__187__out;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__191__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__191__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__192__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__192__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__193__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__193__val;
        CData/*0:0*/ __Vfunc_mubi4_test_invalid__194__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_invalid__194__val;
        CData/*7:0*/ __Vfunc_sbox4_8bit__196__state_out;
        CData/*7:0*/ __Vfunc_sbox4_8bit__251__state_out;
        CData/*7:0*/ __Vfunc_sbox4_8bit__270__state_out;
        CData/*7:0*/ __Vfunc_sbox4_8bit__289__state_out;
        CData/*7:0*/ __Vfunc_sbox4_8bit__291__state_out;
        CData/*7:0*/ __Vfunc_sbox4_8bit__293__state_out;
        CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_446;
        VL_IN16(cfg_i,11,0);
    };
    struct {
        VL_INW(key_i,127,0,4);
        VL_INW(wdata_i,77,0,3);
        VL_INW(wmask_i,77,0,3);
        VL_OUTW(rdata_o,77,0,3);
        VL_OUT(__PVT__raddr_o,31,0);
        VlWide<3>/*77:0*/ __PVT__rdata;
        VlWide<3>/*77:0*/ __PVT__wdata_scr_q;
        VlWide<3>/*77:0*/ __PVT__wdata_q;
        VlWide<3>/*77:0*/ __PVT__wdata_scr;
        VlWide<3>/*77:0*/ __PVT__wmask_q;
        IData/*31:0*/ __PVT__simutil_get_scramble_key__Vstatic__valid;
        IData/*31:0*/ __PVT__simutil_get_scramble_nonce__Vstatic__valid;
        IData/*31:0*/ __PVT__p_forward_mux__DOT__unnamedblk1__DOT__k;
        VlWide<3>/*77:0*/ __PVT__u_prim_ram_1p_adv__DOT__rdata_sram;
        VlWide<3>/*77:0*/ u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o;
        IData/*31:0*/ __PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
        IData/*31:0*/ __PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
        IData/*31:0*/ __PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i;
        VlWide<3>/*77:0*/ u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_hd0174203__0;
        VlWide<3>/*77:0*/ __PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i;
        VL_IN64(nonce_i,63,0);
        QData/*63:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_i;
        QData/*63:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o;
        QData/*63:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0;
        QData/*63:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d;
        QData/*63:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__191__03a128__KET__;
        QData/*63:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi__BRA__127__03a64__KET__;
        QData/*63:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q;
        QData/*63:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle;
        QData/*63:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
        QData/*63:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
        QData/*63:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
        QData/*63:0*/ __PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
        QData/*63:0*/ gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__2;
        QData/*63:0*/ __Vfunc_sbox4_64bit__47__state_out;
        QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__49__state_out;
        QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__66__state_out;
        QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__67__state_out;
        QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__84__state_out;
        QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__85__state_out;
        QData/*63:0*/ __Vfunc_sbox4_64bit__102__state_out;
        QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__104__state_out;
        QData/*63:0*/ __Vfunc_sbox4_64bit__121__state_out;
        QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__123__state_out;
        QData/*63:0*/ __Vfunc_sbox4_64bit__140__state_out;
        QData/*63:0*/ __Vfunc_sbox4_64bit__142__state_out;
        QData/*63:0*/ __Vfunc_sbox4_64bit__144__state_out;
        QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__146__state_out;
        QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__147__state_out;
        QData/*63:0*/ __Vfunc_sbox4_64bit__195__state_out;
        QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__197__state_out;
        QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__214__state_out;
        QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__215__state_out;
        QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__232__state_out;
        QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__233__state_out;
        QData/*63:0*/ __Vfunc_sbox4_64bit__250__state_out;
        QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__252__state_out;
        QData/*63:0*/ __Vfunc_sbox4_64bit__269__state_out;
        QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__271__state_out;
        QData/*63:0*/ __Vfunc_sbox4_64bit__288__state_out;
        QData/*63:0*/ __Vfunc_sbox4_64bit__290__state_out;
        QData/*63:0*/ __Vfunc_sbox4_64bit__292__state_out;
        QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__294__state_out;
        QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__295__state_out;
    };
    struct {
        VlUnpacked<VlWide<3>/*77:0*/, 256> __PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_ram_1p_scr__pi151(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_ram_1p_scr__pi151();
    VL_UNCOPYABLE(Vsim_prim_ram_1p_scr__pi151);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
