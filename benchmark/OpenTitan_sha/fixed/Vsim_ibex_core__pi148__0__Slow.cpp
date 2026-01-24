// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlUnpacked<IData/*31:0*/, 128> Vsim__ConstPool__TABLE_he8dc87d6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h5df9fcbf_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_hf8601f55_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h99e708d5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h395e6778_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_he85dd9ee_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h133834bd_0;

VL_ATTR_COLD void Vsim_ibex_core__pi148___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core__0(Vsim_ibex_core__pi148* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_ibex_core__pi148___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_107;
    if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_107 = 0;
    CData/*0:0*/ id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_hc04a6b80__0;
    id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_hc04a6b80__0 = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__permission_check = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_multdiv_fast.sv:208: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.ex_block_i.gen_multdiv_fast.multdiv_i.gen_mult_single_cycle: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_multdiv_fast.sv", 208, "");
            }
        }
    }
    vlSelfRef.rvfi_ext_pre_mip = 0U;
    vlSelfRef.rvfi_ext_pre_mip = ((0xfffffff7U & vlSelfRef.rvfi_ext_pre_mip) 
                                  | (8U & (vlSelfRef.__PVT__rvfi_ext_stage_pre_mip
                                           [2U] >> 0x0000000eU)));
    vlSelfRef.rvfi_ext_pre_mip = ((0xffffff7fU & vlSelfRef.rvfi_ext_pre_mip) 
                                  | (0x00000080U & 
                                     (vlSelfRef.__PVT__rvfi_ext_stage_pre_mip
                                      [2U] >> 9U)));
    vlSelfRef.rvfi_ext_pre_mip = ((0xfffff7ffU & vlSelfRef.rvfi_ext_pre_mip) 
                                  | (0x00000800U & 
                                     (vlSelfRef.__PVT__rvfi_ext_stage_pre_mip
                                      [2U] >> 4U)));
    vlSelfRef.rvfi_ext_pre_mip = ((0x8000ffffU & vlSelfRef.rvfi_ext_pre_mip) 
                                  | (0x7fff0000U & 
                                     (vlSelfRef.__PVT__rvfi_ext_stage_pre_mip
                                      [2U] << 0x00000010U)));
    vlSelfRef.rvfi_ext_post_mip = 0U;
    vlSelfRef.rvfi_ext_post_mip = ((0xfffffff7U & vlSelfRef.rvfi_ext_post_mip) 
                                   | (8U & (vlSelfRef.__PVT__rvfi_ext_stage_post_mip
                                            [1U] >> 0x0000000eU)));
    vlSelfRef.rvfi_ext_post_mip = ((0xffffff7fU & vlSelfRef.rvfi_ext_post_mip) 
                                   | (0x00000080U & 
                                      (vlSelfRef.__PVT__rvfi_ext_stage_post_mip
                                       [1U] >> 9U)));
    vlSelfRef.rvfi_ext_post_mip = ((0xfffff7ffU & vlSelfRef.rvfi_ext_post_mip) 
                                   | (0x00000800U & 
                                      (vlSelfRef.__PVT__rvfi_ext_stage_post_mip
                                       [1U] >> 4U)));
    vlSelfRef.rvfi_ext_post_mip = ((0x8000ffffU & vlSelfRef.rvfi_ext_post_mip) 
                                   | (0x7fff0000U & 
                                      (vlSelfRef.__PVT__rvfi_ext_stage_post_mip
                                       [1U] << 0x00000010U)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__round_robin_way_ic1 
        = ((2U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__round_robin_way_q) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__round_robin_way_q) 
                                   >> 1U)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_en = 0U;
    vlSelfRef.__PVT__rvfi_stage_order_d = ((IData)(vlSelfRef.__PVT__dummy_instr_id)
                                            ? vlSelfRef.__PVT__rvfi_stage_order
                                           [0U] : (1ULL 
                                                   + 
                                                   vlSelfRef.__PVT__rvfi_stage_order
                                                   [0U]));
    vlSelfRef.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q;
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_d 
        = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_q;
    vlSelfRef.rvfi_ext_mhpmcounters[0U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcounters
        [1U][0U];
    vlSelfRef.rvfi_ext_mhpmcounters[1U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcounters
        [1U][1U];
    vlSelfRef.rvfi_ext_mhpmcounters[2U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcounters
        [1U][2U];
    vlSelfRef.rvfi_ext_mhpmcounters[3U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcounters
        [1U][3U];
    vlSelfRef.rvfi_ext_mhpmcounters[4U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcounters
        [1U][4U];
    vlSelfRef.rvfi_ext_mhpmcounters[5U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcounters
        [1U][5U];
    vlSelfRef.rvfi_ext_mhpmcounters[6U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcounters
        [1U][6U];
    vlSelfRef.rvfi_ext_mhpmcounters[7U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcounters
        [1U][7U];
    vlSelfRef.rvfi_ext_mhpmcounters[8U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcounters
        [1U][8U];
    vlSelfRef.rvfi_ext_mhpmcounters[9U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcounters
        [1U][9U];
    vlSelfRef.rvfi_ext_mhpmcountersh[0U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcountersh
        [1U][0U];
    vlSelfRef.rvfi_ext_mhpmcountersh[1U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcountersh
        [1U][1U];
    vlSelfRef.rvfi_ext_mhpmcountersh[2U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcountersh
        [1U][2U];
    vlSelfRef.rvfi_ext_mhpmcountersh[3U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcountersh
        [1U][3U];
    vlSelfRef.rvfi_ext_mhpmcountersh[4U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcountersh
        [1U][4U];
    vlSelfRef.rvfi_ext_mhpmcountersh[5U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcountersh
        [1U][5U];
    vlSelfRef.rvfi_ext_mhpmcountersh[6U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcountersh
        [1U][6U];
    vlSelfRef.rvfi_ext_mhpmcountersh[7U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcountersh
        [1U][7U];
    vlSelfRef.rvfi_ext_mhpmcountersh[8U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcountersh
        [1U][8U];
    vlSelfRef.rvfi_ext_mhpmcountersh[9U] = vlSelfRef.__PVT__rvfi_ext_stage_mhpmcountersh
        [1U][9U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_req_addr[0U] = (QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_req_addr[1U] = (QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U))));
    vlSelfRef.__VdfgRegularize_h2dc7b7d1_0_2 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))));
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[1U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[2U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[3U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[4U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[5U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[6U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[7U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[8U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[9U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0x0000000aU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0x0000000bU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0x0000000cU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0x0000000dU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0x0000000eU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0x0000000fU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[1U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[2U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[3U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[4U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[5U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[6U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[7U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[8U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[9U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0x0000000aU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0x0000000bU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0x0000000cU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0x0000000dU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0x0000000eU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0x0000000fU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__rvfi_instr_new_wb = ((IData)(vlSelfRef.__PVT__gen_rvfi_wb_stage__DOT__rvfi_instr_new_wb_q) 
                                          | (vlSelfRef.__PVT__rvfi_stage_valid
                                             [0U] & 
                                             vlSelfRef.__PVT__rvfi_stage_trap
                                             [0U]));
    vlSelfRef.__PVT__csr_pmp_addr[0U] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[1U] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[2U] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[3U] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[4U] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[5U] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[6U] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[7U] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[8U] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[9U] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[0x0000000aU] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                                  << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[0x0000000bU] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                                  << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[0x0000000cU] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                                  << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[0x0000000dU] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                                  << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[0x0000000eU] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                                  << 2U);
    vlSelfRef.__PVT__csr_pmp_addr[0x0000000fU] = ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                                  << 2U);
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_58 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_56 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_28 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_30 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_32 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_34 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_36 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_38 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_40 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_42 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_44 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_46 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_48 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_50 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_52 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_54 
        = (IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_49 
        = (IData)((7U == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_36 
        = (IData)((3U == (7U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_23 
        = (IData)((1U == (3U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q))));
    vlSelfRef.__PVT__id_stage_i__DOT__outstanding_store_wb_i 
        = ((IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
           & (1U == (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)));
    vlSelfRef.crash_dump_o[0U] = vlSelfRef.__PVT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
    vlSelfRef.crash_dump_o[1U] = vlSelfRef.__PVT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
    vlSelfRef.crash_dump_o[2U] = (IData)((((QData)((IData)(
                                                           (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                            << 1U))) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__addr_last_q))));
    vlSelfRef.crash_dump_o[3U] = (IData)(((((QData)((IData)(
                                                            (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                             << 1U))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__addr_last_q))) 
                                          >> 0x00000020U));
    vlSelfRef.crash_dump_o[4U] = vlSelfRef.__PVT__pc_id;
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_65 
        = ((3U != (3U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_data_q))) 
           | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_err_q));
    vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_34 = (((
                                                   (4U 
                                                    & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                       >> 0x0000000bU)) 
                                                   | ((2U 
                                                       & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                          >> 0x00000017U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                            >> 0x0000001dU)))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                        >> 0x0000001eU)) 
                                                    | (1U 
                                                       & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                          >> 0x00000017U))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_76 
        = (IData)(((((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                     >> 3U) & (~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q) 
                                  >> 3U))) & (~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                 >> 7U))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_89 
        = (1U & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                  >> 2U) & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q) 
                                >> 2U)) & (~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                              >> 5U)))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_100 
        = (1U & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                  >> 1U) & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q) 
                                >> 1U)) & (~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                              >> 3U)))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_112 
        = (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                 & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q)) 
                    & (~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                          >> 1U)))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_59 
        = (3U & ((1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_q
                        [3U] >> 2U)) + ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q) 
                                        >> 6U)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_46 
        = (3U & ((1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_q
                        [2U] >> 2U)) + ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q) 
                                        >> 4U)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_33 
        = (3U & ((1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_q
                        [1U] >> 2U)) + ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q) 
                                        >> 2U)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_19 
        = (3U & ((1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_q
                        [0U] >> 2U)) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_77 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_done_q__BRA__3__KET__) 
           & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_hold_q__BRA__3__KET__)) 
              & ((3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q) 
                        >> 6U)) == (3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_q) 
                                          >> 6U)))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_90 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_done_q__BRA__2__KET__) 
           & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_hold_q__BRA__2__KET__)) 
              & ((3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q) 
                        >> 4U)) == (3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_q) 
                                          >> 4U)))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_101 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_done_q__BRA__1__KET__) 
           & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_hold_q__BRA__1__KET__)) 
              & ((3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q) 
                        >> 2U)) == (3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_q) 
                                          >> 2U)))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_113 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_done_q__BRA__0__KET__) 
           & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_hold_q__BRA__0__KET__)) 
              & ((3U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q)) 
                 == (3U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_q)))));
    if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_107 
        = ((~ (((((2U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                         >> 6U)) | (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                          >> 5U))) 
                 << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                  >> 2U)) | (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                   >> 1U)))) 
               | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q))) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q));
    __Vtableidx9 = vlSelfRef.__PVT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
    vlSelfRef.cs_registers_i__DOT____VdfgExtracted_hb748c870__0 
        = Vsim__ConstPool__TABLE_he8dc87d6_0[__Vtableidx9];
    vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter[3U] 
        = (QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter[4U] 
        = (QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[2U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__2__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[3U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__3__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__mhpmcounter[2U] 
        = (vlSelfRef.__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
           + (QData)((IData)(((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                                  >> 2U)) & (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q)))));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0U] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[1U] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[2U] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[3U] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[4U] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[5U] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[6U] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[7U] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[8U] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[9U] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0x0000000aU] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0x0000000bU] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0x0000000cU] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0x0000000dU] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0x0000000eU] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0x0000000fU] 
        = ((0x00000080U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                           << 2U)) | (0x0000001fU & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[0U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[1U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[2U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[3U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[4U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[5U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[6U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[7U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[8U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[9U] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[0x0000000aU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[0x0000000bU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[0x0000000cU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[0x0000000dU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[0x0000000eU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__cs_registers_i__DOT__pmp_addr_rdata[0x0000000fU] 
        = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_write_req = 0U;
    vlSelfRef.wb_stage_i__DOT____VdfgRegularize_h7ee5efe3_0_0 
        = ((IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q) 
           & (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_75 
        = (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
            >> 3U) & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q) 
                       >> 7U) & ((~ (IData)(((0U != 
                                              (0xc0U 
                                               & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q))) 
                                             | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_done_q__BRA__3__KET__)))) 
                                 & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                        >> 3U)) & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_q__BRA__3__KET__)))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_88 
        = (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
            >> 2U) & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q) 
                       >> 5U) & ((~ (IData)(((0U != 
                                              (0x30U 
                                               & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q))) 
                                             | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_done_q__BRA__2__KET__)))) 
                                 & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                        >> 2U)) & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_q__BRA__2__KET__)))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_99 
        = (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
            >> 1U) & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q) 
                       >> 3U) & ((~ (IData)(((0U != 
                                              (0x0cU 
                                               & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q))) 
                                             | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_done_q__BRA__1__KET__)))) 
                                 & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                        >> 1U)) & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_q__BRA__1__KET__)))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_111 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
           & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q) 
               >> 1U) & ((~ ((0U != (3U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q))) 
                             | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_done_q__BRA__0__KET__))) 
                         & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q)) 
                            & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_q__BRA__0__KET__)))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fb_fill_level = 0U;
    if ((1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
               & (~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q))))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fb_fill_level 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fb_fill_level)));
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                >> 1U) & (~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q) 
                             >> 1U))))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fb_fill_level 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fb_fill_level)));
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                >> 2U) & (~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q) 
                             >> 2U))))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fb_fill_level 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fb_fill_level)));
    }
    if ((IData)((((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                  >> 3U) & (~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q) 
                               >> 3U))))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fb_fill_level 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fb_fill_level)));
    }
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__lookup_valid_ic1) 
           & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_in_ic1) 
              >> 3U));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__lookup_valid_ic1) 
           & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_in_ic1) 
              >> 2U));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__lookup_valid_ic1) 
           & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_in_ic1) 
              >> 1U));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__0__KET__ 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__lookup_valid_ic1) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_in_ic1));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_58 
        = (3U & ((1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_q
                        [3U] >> 2U)) + ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_q) 
                                        >> 6U)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_45 
        = (3U & ((1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_q
                        [2U] >> 2U)) + ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_q) 
                                        >> 4U)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_32 
        = (3U & ((1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_q
                        [1U] >> 2U)) + ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_q) 
                                        >> 2U)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_18 
        = (3U & ((1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_q
                        [0U] >> 2U)) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_q)));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_1 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? 0ULL : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                            << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_46 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_43 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_40 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_37 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_34 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_31 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_28 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_25 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_22 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_19 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_16 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_13 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_10 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_7 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_4 
        = ((1U == (3U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_177 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_176 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_175 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_174 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_173 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_172 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_171 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_170 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_169 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_168 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_167 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_166 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_165 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_164 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_163 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_162 
        = (((((((((1U & ((0x18U != (0x18U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                         | (~ (0x7fffffffU == (0x7fffffffU 
                                               & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                  << 3U) | ((1U & ((0x18U != (0x18U 
                                              & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                   | (~ (0x3fffffffU 
                                         == (0x3fffffffU 
                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                            << 2U)) | (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                               | (~ 
                                                  (0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                        << 1U) | (1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x0fffffffU 
                                                         == 
                                                         (0x0fffffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
               << 0x0000000cU) | (((((1U & ((0x18U 
                                             != (0x18U 
                                                 & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                            | (~ (0x07ffffffU 
                                                  == 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                     << 3U) | ((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x03ffffffU 
                                                       == 
                                                       (0x03ffffffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                               << 2U)) 
                                   | (((1U & ((0x18U 
                                               != (0x18U 
                                                   & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                              | (~ 
                                                 (0x01ffffffU 
                                                  == 
                                                  (0x01ffffffU 
                                                   & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                       << 1U) | (1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x00ffffffU 
                                                        == 
                                                        (0x00ffffffU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                  << 8U)) | ((((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (0x007fffffU 
                                                         == 
                                                         (0x007fffffU 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x003fffffU 
                                                           == 
                                                           (0x003fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | (((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x001fffffU 
                                                           == 
                                                           (0x001fffffU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x000fffffU 
                                                            == 
                                                            (0x000fffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                              << 4U) 
                                             | ((((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0007ffffU 
                                                          == 
                                                          (0x0007ffffU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 3U) 
                                                 | ((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0003ffffU 
                                                            == 
                                                            (0x0003ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 2U)) 
                                                | (((1U 
                                                     & ((0x18U 
                                                         != 
                                                         (0x18U 
                                                          & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                        | (~ 
                                                           (0x0001ffffU 
                                                            == 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                         | (~ 
                                                            (0x0000ffffU 
                                                             == 
                                                             (0x0000ffffU 
                                                              & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))) 
            << 0x00000010U) | (((((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x00003fffU 
                                                    == 
                                                    (0x00003fffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x00001fffU 
                                                   == 
                                                   (0x00001fffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x00000fffU 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 0x0000000cU) | 
                                (((((1U & ((0x18U != 
                                            (0x18U 
                                             & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                           | (~ (0x000007ffU 
                                                 == 
                                                 (0x000007ffU 
                                                  & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                    << 3U) | ((1U & 
                                               ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                | (~ 
                                                   (0x000003ffU 
                                                    == 
                                                    (0x000003ffU 
                                                     & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                              << 2U)) 
                                  | (((1U & ((0x18U 
                                              != (0x18U 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                             | (~ (0x000001ffU 
                                                   == 
                                                   (0x000001ffU 
                                                    & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                      << 1U) | (1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                   | (~ 
                                                      (0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                 << 8U)) | ((((((1U 
                                                 & ((0x18U 
                                                     != 
                                                     (0x18U 
                                                      & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                    | (~ 
                                                       (0x0000007fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                << 3U) 
                                               | ((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000003fU 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 2U)) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                      | (~ 
                                                         (0x0000001fU 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (0x0000000fU 
                                                           == 
                                                           (0x0000000fU 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))) 
                                             << 4U) 
                                            | ((((1U 
                                                  & ((0x18U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                     | (~ 
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                 << 3U) 
                                                | ((1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))) 
                                                       | (~ 
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (((~ vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                       | (0x18U 
                                                          != 
                                                          (0x18U 
                                                           & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))) 
                                                      << 1U)) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 3U))))))));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelfRef.__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0x0000000fU) : ((0U == (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__priv_lvl_q)) 
                                        & (vlSelfRef.__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                           >> 0x0000000cU))));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
        = (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q)
                  ? ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelfRef.__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)) : (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = (((((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__3__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
              & (vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__3__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                 == (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                     << 1U))) << 3U) | (((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__2__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                         & (vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__2__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                                            == (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                << 1U))) 
                                        << 2U)) | (
                                                   (((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                                     & (vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                                                        == 
                                                        (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                         << 1U))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                                      & (vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                                                         == 
                                                         (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                          << 1U)))));
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__outstanding_load_wb_i 
        = ((IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
           & (0U == (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl[0U] = vlSelfRef.__PVT__cs_registers_i__DOT__priv_lvl_q;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl[1U] = vlSelfRef.__PVT__cs_registers_i__DOT__priv_lvl_q;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl[2U] = 
        (3U & ((2U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                ? ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                   >> 2U) : (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__priv_lvl_q)));
    vlSelfRef.__PVT__cs_registers_i__DOT__mip = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT____Vcellout__u_msip0__q) 
                                                  << 0x00000011U) 
                                                 | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_intr_timer_sync.q_o) 
                                                     << 0x00000010U) 
                                                    | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q) 
                                                       << 0x0000000fU)));
    vlSelfRef.__PVT__csr_pmp_cfg[0U] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[1U] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[2U] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[3U] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[4U] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[5U] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[6U] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[7U] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[8U] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[9U] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[0x0000000aU] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[0x0000000bU] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[0x0000000cU] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[0x0000000dU] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[0x0000000eU] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__csr_pmp_cfg[0x0000000fU] = vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q) 
           & (IData)(vlSelfRef.__PVT__instr_fetch_err));
    vlSelfRef.id_stage_i__DOT____VdfgRegularize_h5aca553c_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__instr_fetch_err)) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__imd_val_q_ex[0U] = vlSelfRef.__PVT__id_stage_i__DOT__imd_val_q
        [0U];
    vlSelfRef.__PVT__imd_val_q_ex[1U] = vlSelfRef.__PVT__id_stage_i__DOT__imd_val_q
        [1U];
    id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_hc04a6b80__0 
        = (0U != (((2U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                 >> 0x0000000cU))) 
                   << 2U) | (((1U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                            >> 0x0000000cU))) 
                              << 1U) | (0U == (3U & 
                                               (vlSelfRef.__PVT__instr_rdata_id 
                                                >> 0x0000000cU))))));
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__imm_i_type_o 
        = (((- (IData)((vlSelfRef.__PVT__instr_rdata_id 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.__PVT__instr_rdata_id >> 0x00000014U));
    vlSelfRef.__PVT__id_stage_i__DOT__rf_rd_b_wb_match_o 
        = (((0x0000001fU & (vlSelfRef.__PVT__instr_rdata_id 
                            >> 0x00000014U)) == (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (0x0000001fU & (vlSelfRef.__PVT__instr_rdata_id 
                                    >> 0x00000014U))));
    vlSelfRef.__PVT__id_stage_i__DOT__rf_write_wb_i 
        = ((IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
           & ((IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q) 
              | (0U == (IData)(vlSelfRef.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q))));
    vlSelfRef.__PVT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlSelfRef.__PVT__lsu_addr_incr_req = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
        vlSelfRef.__PVT__lsu_addr_incr_req = ((1U & 
                                               (~ (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                              || (IData)(vlSelfRef.__PVT__load_store_unit_i__DOT__handle_misaligned_q));
    }
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i 
        = ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__id_fsm_q)) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_req_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__debug_req_en) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__haltreq));
    vlSelfRef.__PVT__new_nmi_int = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_irq_pending_q) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_0_2));
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[0U] 
        = vlSelfRef.__PVT__csr_pmp_addr[0U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[1U] 
        = vlSelfRef.__PVT__csr_pmp_addr[1U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[2U] 
        = vlSelfRef.__PVT__csr_pmp_addr[2U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[3U] 
        = vlSelfRef.__PVT__csr_pmp_addr[3U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[4U] 
        = vlSelfRef.__PVT__csr_pmp_addr[4U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[5U] 
        = vlSelfRef.__PVT__csr_pmp_addr[5U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[6U] 
        = vlSelfRef.__PVT__csr_pmp_addr[6U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[7U] 
        = vlSelfRef.__PVT__csr_pmp_addr[7U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[8U] 
        = vlSelfRef.__PVT__csr_pmp_addr[8U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[9U] 
        = vlSelfRef.__PVT__csr_pmp_addr[9U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[0x0000000aU] 
        = vlSelfRef.__PVT__csr_pmp_addr[0x0000000aU];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[0x0000000bU] 
        = vlSelfRef.__PVT__csr_pmp_addr[0x0000000bU];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[0x0000000cU] 
        = vlSelfRef.__PVT__csr_pmp_addr[0x0000000cU];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[0x0000000dU] 
        = vlSelfRef.__PVT__csr_pmp_addr[0x0000000dU];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[0x0000000eU] 
        = vlSelfRef.__PVT__csr_pmp_addr[0x0000000eU];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_addr_o[0x0000000fU] 
        = vlSelfRef.__PVT__csr_pmp_addr[0x0000000fU];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[0U] 
        = vlSelfRef.__PVT__csr_pmp_addr[0U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[1U] 
        = vlSelfRef.__PVT__csr_pmp_addr[1U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[2U] 
        = vlSelfRef.__PVT__csr_pmp_addr[2U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[3U] 
        = vlSelfRef.__PVT__csr_pmp_addr[3U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[4U] 
        = vlSelfRef.__PVT__csr_pmp_addr[4U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[5U] 
        = vlSelfRef.__PVT__csr_pmp_addr[5U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[6U] 
        = vlSelfRef.__PVT__csr_pmp_addr[6U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[7U] 
        = vlSelfRef.__PVT__csr_pmp_addr[7U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[8U] 
        = vlSelfRef.__PVT__csr_pmp_addr[8U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[9U] 
        = vlSelfRef.__PVT__csr_pmp_addr[9U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[0x0000000aU] 
        = vlSelfRef.__PVT__csr_pmp_addr[0x0000000aU];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[0x0000000bU] 
        = vlSelfRef.__PVT__csr_pmp_addr[0x0000000bU];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[0x0000000cU] 
        = vlSelfRef.__PVT__csr_pmp_addr[0x0000000cU];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[0x0000000dU] 
        = vlSelfRef.__PVT__csr_pmp_addr[0x0000000dU];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[0x0000000eU] 
        = vlSelfRef.__PVT__csr_pmp_addr[0x0000000eU];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[0x0000000fU] 
        = vlSelfRef.__PVT__csr_pmp_addr[0x0000000fU];
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_complete_instr 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_q) 
           & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_65));
    vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_35 = (((
                                                   ((((2U 
                                                       & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                          >> 2U)) 
                                                      | (1U 
                                                         & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                            >> 0x0000001bU))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                            >> 0x00000011U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                              >> 0x00000014U))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                            >> 0x00000015U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                              >> 0x00000011U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                             >> 7U)) 
                                                         | (1U 
                                                            & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                               >> 6U))))) 
                                                  << 7U) 
                                                 | ((0x00000040U 
                                                     & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                        >> 0x0000000aU)) 
                                                    | ((0x00000020U 
                                                        & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                           >> 0x0000000eU)) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_34))));
    vlSelfRef.__PVT__if_stage_i__DOT__stall_dummy_instr 
        = (((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
            >> 2U) & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q) 
                      == ((IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_34) 
                          & (3U | (0x0000001cU & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                                  >> 1U))))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_56 
        = ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_59) 
           > (3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                    >> 6U)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_43 
        = ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_46) 
           > (3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                    >> 4U)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_30 
        = ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_33) 
           > (3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                    >> 2U)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_16 
        = ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_19) 
           > (3U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_78 
        = ((~ (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_77)) 
           & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
              >> 3U));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_91 
        = (1U & ((~ (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_90)) 
                 & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                    >> 2U)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_102 
        = (1U & ((~ (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_101)) 
                 & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                    >> 1U)));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_114 
        = (1U & ((~ (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_113)) 
                 & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__3__KET__ 
        = (1U & (~ (0U != ((IData)(if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_107) 
                           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_q__BRA__15__03a12__KET__)))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__2__KET__ 
        = (1U & (~ (0U != ((IData)(if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_107) 
                           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_q__BRA__11__03a8__KET__)))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__1__KET__ 
        = (1U & (~ (0U != ((IData)(if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_107) 
                           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_q__BRA__7__03a4__KET__)))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__0__KET__ 
        = (1U & (~ (0U != ((IData)(if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_107) 
                           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_q__BRA__3__03a0__KET__)))));
    if ((2U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q)))) {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_en = 1U;
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_d 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_q)));
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_write_req = 1U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q))) {
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_q) {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_en = 1U;
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_d = 0U;
        }
    }
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_118 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__ecc_correction_write_q) 
           | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_write_req));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_ecc_wdata__DOT__unused_tag_ecc_output 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_write_req)) 
                 & (~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__ecc_correction_write_q))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_req 
        = ((((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_75) 
             << 3U) | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_88) 
                       << 2U)) | (((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_99) 
                                   << 1U) | (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_111)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_off 
        = ((((2U & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_58) 
                    << 1U)) | (1U & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_45))) 
            << 2U) | ((2U & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_32) 
                             << 1U)) | (1U & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_18))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_1;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0x0000000fU] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_46;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0x0000000eU] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_43;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0x0000000dU] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_40;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0x0000000cU] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_37;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0x0000000bU] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_34;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0x0000000aU] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_31;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[9U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_28;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[8U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_25;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[7U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_22;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[6U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_19;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[5U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_16;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[4U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_13;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[3U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_10;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[2U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_7;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[1U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_4;
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0x0000000fU] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_177;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_144 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_46 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_177);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0x0000000eU] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_176;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_138 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_43 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_176);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0x0000000dU] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_175;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_132 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_40 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_175);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0x0000000cU] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_174;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_126 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_37 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_174);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0x0000000bU] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_173;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_120 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_34 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_173);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0x0000000aU] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_172;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_114 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_31 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_172);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_171;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_108 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_28 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_171);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_170;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_102 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_25 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_170);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_169;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_96 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_22 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_169);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_168;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_90 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_19 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_168);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_167;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_84 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_16 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_167);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_166;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_78 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_13 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_166);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_165;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_72 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_10 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_165);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_164;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_66 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_7 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_164);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_163;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_60 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_4 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_163);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_162;
    vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_49 
        = ((IData)((vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_1 
                    >> 2U)) & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_162);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__priv_mode_i[0U] 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__priv_mode_i[1U] 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__priv_mode_i[2U] 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [2U];
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i 
        = (vlSelfRef.__PVT__cs_registers_i__DOT__mip 
           & vlSelfRef.__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[0U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[1U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[1U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[2U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[2U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[3U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[3U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[4U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[4U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[5U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[5U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[6U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[6U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[7U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[7U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[8U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[8U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[9U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[9U];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[0x0000000aU] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0000000aU];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[0x0000000bU] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0000000bU];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[0x0000000cU] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0000000cU];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[0x0000000dU] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0000000dU];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[0x0000000eU] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0000000eU];
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[0x0000000fU] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0000000fU];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[0U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[1U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[1U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[2U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[2U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[3U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[3U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[4U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[4U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[5U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[5U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[6U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[6U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[7U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[7U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[8U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[8U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[9U] 
        = vlSelfRef.__PVT__csr_pmp_cfg[9U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[0x0000000aU] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0000000aU];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[0x0000000bU] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0000000bU];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[0x0000000cU] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0000000cU];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[0x0000000dU] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0000000dU];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[0x0000000eU] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0000000eU];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[0x0000000fU] 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0000000fU];
    vlSelfRef.__PVT__id_stage_i__DOT__imd_val_q_ex_o[0U] 
        = vlSelfRef.__PVT__imd_val_q_ex[0U];
    vlSelfRef.__PVT__id_stage_i__DOT__imd_val_q_ex_o[1U] 
        = vlSelfRef.__PVT__imd_val_q_ex[1U];
    vlSelfRef.__PVT__ex_block_i__DOT__imd_val_q_i[0U] 
        = vlSelfRef.__PVT__imd_val_q_ex[0U];
    vlSelfRef.__PVT__ex_block_i__DOT__imd_val_q_i[1U] 
        = vlSelfRef.__PVT__imd_val_q_ex[1U];
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[0U] 
        = vlSelfRef.__PVT__imd_val_q_ex[0U];
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[1U] 
        = vlSelfRef.__PVT__imd_val_q_ex[1U];
    vlSelfRef.__PVT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.__PVT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(
                                                      vlSelfRef.__PVT__imd_val_q_ex
                                                      [0U])) 
                                      << 1U)));
        }
    } else {
        vlSelfRef.__PVT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(vlSelfRef.__PVT__imd_val_q_ex
                                               [0U])) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q[0U] 
        = (IData)(vlSelfRef.__PVT__imd_val_q_ex[0U]);
    vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q[1U] 
        = (IData)(vlSelfRef.__PVT__imd_val_q_ex[1U]);
    vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_4 = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_rd_b_wb_match_o) 
                                                & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_write_wb_i));
    vlSelfRef.__PVT__rvfi_intr_d = ((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                                     ? (IData)(vlSelfRef.__PVT__rvfi_set_trap_pc_q)
                                     : (IData)(vlSelfRef.__PVT__rvfi_intr_q));
    vlSelfRef.__PVT__id_stage_i__DOT__jump_in_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__jump_set_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__branch_in_dec = 0U;
    vlSelfRef.__PVT__icache_inval = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlSelfRef.__PVT__csr_access = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__lsu_we = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__ebrk_insn = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x0000007fU & vlSelfRef.__PVT__instr_rdata_id);
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x00000020U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((0U == (7U & (vlSelfRef.__PVT__instr_rdata_id 
                                          >> 0x0000000cU)))) {
                            if ((0U == (vlSelfRef.__PVT__instr_rdata_id 
                                        >> 0x14U))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__ecall_insn_dec = 1U;
                            } else if ((1U == (vlSelfRef.__PVT__instr_rdata_id 
                                               >> 0x14U))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__ebrk_insn = 1U;
                            } else if ((0x0302U == 
                                        (vlSelfRef.__PVT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__mret_insn_dec = 1U;
                            } else if ((0x07b2U == 
                                        (vlSelfRef.__PVT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__dret_insn_dec = 1U;
                            } else if ((0x0105U == 
                                        (vlSelfRef.__PVT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__wfi_insn_dec = 1U;
                            } else {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((0x0105U 
                                                         == 
                                                         (vlSelfRef.__PVT__instr_rdata_id 
                                                          >> 0x14U)) 
                                                        << 4U) 
                                                       | (((0x07b2U 
                                                            == 
                                                            (vlSelfRef.__PVT__instr_rdata_id 
                                                             >> 0x14U)) 
                                                           << 3U) 
                                                          | ((0x0302U 
                                                              == 
                                                              (vlSelfRef.__PVT__instr_rdata_id 
                                                               >> 0x14U)) 
                                                             << 2U))) 
                                                      | (((1U 
                                                           == 
                                                           (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x14U)) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (vlSelfRef.__PVT__instr_rdata_id 
                                                             >> 0x14U)))))))) {
                                if ((0U != ((((0x0105U 
                                               == (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                              << 4U) 
                                             | (((0x07b2U 
                                                  == 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                                 << 3U) 
                                                | ((0x0302U 
                                                    == 
                                                    (vlSelfRef.__PVT__instr_rdata_id 
                                                     >> 0x00000014U)) 
                                                   << 2U))) 
                                            | (((1U 
                                                 == 
                                                 (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x00000014U)) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000014U)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:594: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '12'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     12,
                                                     (vlSelfRef.__PVT__instr_rdata_id 
                                                      >> 0x14U));
                                        Verilated::runFlushCallbacks();
                                        VL_STOP_MT("verilogSourceFiles/ibex_decoder.sv", 594, "");
                                    }
                                }
                            }
                            if ((IData)((0U != (0x000f8f80U 
                                                & vlSelfRef.__PVT__instr_rdata_id)))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x0cU))) 
                                                       << 2U) 
                                                      | (((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.__PVT__instr_rdata_id 
                                                               >> 0x0cU))) 
                                                          << 1U) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.__PVT__instr_rdata_id 
                                                                >> 0x0cU))))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.__PVT__instr_rdata_id 
                                                >> 0x0000000cU))) 
                                             << 2U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.__PVT__instr_rdata_id 
                                                     >> 0x0000000cU))) 
                                                << 1U) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__instr_rdata_id 
                                                      >> 0x0000000cU))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:630: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     2,
                                                     (3U 
                                                      & (vlSelfRef.__PVT__instr_rdata_id 
                                                         >> 0x0cU)));
                                        Verilated::runFlushCallbacks();
                                        VL_STOP_MT("verilogSourceFiles/ibex_decoder.sv", 630, "");
                                    }
                                }
                            }
                            vlSelfRef.__PVT__csr_access = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                                          >> 0x0000000eU)))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            }
                            if ((1U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                              >> 0x0cU)))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.__PVT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelfRef.__PVT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                            } else {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                = vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            vlSelfRef.__PVT__id_stage_i__DOT__jump_in_dec = 1U;
                            if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                vlSelfRef.__PVT__id_stage_i__DOT__jump_set_dec = 1U;
                            } else {
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__jump_in_dec = 1U;
                        if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__jump_set_dec = 1U;
                        } else {
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelfRef.__PVT__instr_rdata_id 
                                          >> 0x0000000cU)))) {
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                        vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__branch_in_dec = 1U;
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                        = ((1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                                     >> 0x0000000eU))) 
                           && (1U & (vlSelfRef.__PVT__instr_rdata_id 
                                     >> 0x0000000dU)));
                    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelfRef.__PVT__instr_rdata_id 
                                       >> 0x00000018U)) 
                                | (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                         >> 0x0000000cU))))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    } else if ((vlSelfRef.__PVT__instr_rdata_id 
                                >> 0x0000001fU)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x40000000U & vlSelfRef.__PVT__instr_rdata_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((0x20000000U & vlSelfRef.__PVT__instr_rdata_id)
                                ? ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                          >> 0x0000001cU)) 
                                   || ((0x08000000U 
                                        & vlSelfRef.__PVT__instr_rdata_id)
                                        ? ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000001aU)) 
                                           || ((1U 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000019U)) 
                                               || ((0x00004000U 
                                                    & vlSelfRef.__PVT__instr_rdata_id)
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x0000000cU))))
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x0000000cU)))))))
                                        : ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000001aU)) 
                                           || ((1U 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000019U)) 
                                               || ((1U 
                                                    & (vlSelfRef.__PVT__instr_rdata_id 
                                                       >> 0x0000000dU)) 
                                                   || (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__instr_rdata_id 
                                                           >> 0x0000000cU))))))))
                                : ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                          >> 0x0000001cU)) 
                                   || ((0x08000000U 
                                        & vlSelfRef.__PVT__instr_rdata_id)
                                        ? ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000001aU)) 
                                           || ((1U 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000019U)) 
                                               || ((0x00004000U 
                                                    & vlSelfRef.__PVT__instr_rdata_id)
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    && (1U 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x0000000cU))))
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x0000000cU)))))))
                                        : ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000001aU)) 
                                           || ((1U 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x00000019U)) 
                                               || ((1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000eU))) 
                                                   && ((1U 
                                                        & (vlSelfRef.__PVT__instr_rdata_id 
                                                           >> 0x0000000dU)) 
                                                       || (1U 
                                                           & (vlSelfRef.__PVT__instr_rdata_id 
                                                              >> 0x0000000cU)))))))));
                    } else if ((0x20000000U & vlSelfRef.__PVT__instr_rdata_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                      >> 0x0000001cU)) 
                               || ((0x08000000U & vlSelfRef.__PVT__instr_rdata_id)
                                    ? ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                              >> 0x0000001aU)) 
                                       || ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x00000019U)) 
                                           || (1U & 
                                               ((0x00004000U 
                                                 & vlSelfRef.__PVT__instr_rdata_id)
                                                 ? 
                                                ((1U 
                                                  & (vlSelfRef.__PVT__instr_rdata_id 
                                                     >> 0x0000000dU)) 
                                                 && (1U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000cU)))
                                                 : 
                                                ((0x00002000U 
                                                  & vlSelfRef.__PVT__instr_rdata_id)
                                                  ? 
                                                 (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000000cU)
                                                  : 
                                                 (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU)))))))
                                    : ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                              >> 0x0000001aU)) 
                                       || ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x00000019U)) 
                                           || (1U & 
                                               ((0x00004000U 
                                                 & vlSelfRef.__PVT__instr_rdata_id)
                                                 ? 
                                                ((1U 
                                                  & (vlSelfRef.__PVT__instr_rdata_id 
                                                     >> 0x0000000dU)) 
                                                 && (1U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0000000cU)))
                                                 : 
                                                ((0x00002000U 
                                                  & vlSelfRef.__PVT__instr_rdata_id)
                                                  ? 
                                                 (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000000cU)
                                                  : 
                                                 (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU)))))))));
                    } else if ((0x10000000U & vlSelfRef.__PVT__instr_rdata_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x08000000U & vlSelfRef.__PVT__instr_rdata_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                      >> 0x0000001aU)) 
                               || ((0x02000000U & vlSelfRef.__PVT__instr_rdata_id)
                                    ? ((1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                                                 >> 0x0000000eU))) 
                                       && ((1U & (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000dU))) 
                                           && (1U & 
                                               (~ (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU)))))
                                    : ((0x00004000U 
                                        & vlSelfRef.__PVT__instr_rdata_id)
                                        ? ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000000dU)) 
                                           && (1U & 
                                               (~ (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU))))
                                        : ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000000dU)) 
                                           || (1U & 
                                               (~ (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU)))))));
                    } else if ((0x04000000U & vlSelfRef.__PVT__instr_rdata_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x02000000U & vlSelfRef.__PVT__instr_rdata_id)) {
                        if ((0x00004000U & vlSelfRef.__PVT__instr_rdata_id)) {
                            if ((0x00002000U & vlSelfRef.__PVT__instr_rdata_id)) {
                                if ((0x00001000U & vlSelfRef.__PVT__instr_rdata_id)) {
                                    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                } else {
                                    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.__PVT__instr_rdata_id)) {
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x00002000U & vlSelfRef.__PVT__instr_rdata_id)) {
                            if ((0x00001000U & vlSelfRef.__PVT__instr_rdata_id)) {
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x00001000U & vlSelfRef.__PVT__instr_rdata_id)) {
                            vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        } else {
                            vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator = 0U;
                            vlSelfRef.__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        }
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    }
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (~ VL_ONEHOT_I((((2U == (3U 
                                                   & (vlSelfRef.__PVT__instr_rdata_id 
                                                      >> 0x0cU))) 
                                           << 2U) | 
                                          (((1U == 
                                             (3U & 
                                              (vlSelfRef.__PVT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (3U & 
                                               (vlSelfRef.__PVT__instr_rdata_id 
                                                >> 0x0cU))))))))) {
                    if (id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_hc04a6b80__0) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:306: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(3U & (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0cU)));
                            Verilated::runFlushCallbacks();
                            VL_STOP_MT("verilogSourceFiles/ibex_decoder.sv", 306, "");
                        }
                    }
                }
                vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                vlSelfRef.__PVT__id_stage_i__DOT__lsu_req_dec = 1U;
                vlSelfRef.__PVT__id_stage_i__DOT__lsu_we = 1U;
                if ((0x00004000U & vlSelfRef.__PVT__instr_rdata_id)) {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((0U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                  >> 0x0cU)))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 2U;
                } else if ((1U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 1U;
                } else if ((2U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 0U;
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                    = ((0x00004000U & vlSelfRef.__PVT__instr_rdata_id)
                        ? ((1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                                     >> 0x0000000dU))) 
                           && ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                      >> 0x0000000cU)) 
                               && ((1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                                             >> 0x0000001aU))) 
                                   && ((vlSelfRef.__PVT__instr_rdata_id 
                                        >> 0x0000001fU) 
                                       || (1U & ((0x40000000U 
                                                  & vlSelfRef.__PVT__instr_rdata_id)
                                                  ? 
                                                 ((0x20000000U 
                                                   & vlSelfRef.__PVT__instr_rdata_id)
                                                   ? 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000001cU)
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.__PVT__instr_rdata_id 
                                                       >> 0x0000001cU)) 
                                                   || ((1U 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__instr_rdata_id 
                                                            >> 0x0000001bU))) 
                                                       && (0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.__PVT__instr_rdata_id 
                                                               >> 0x00000019U))))))
                                                  : 
                                                 ((0x20000000U 
                                                   & vlSelfRef.__PVT__instr_rdata_id)
                                                   ? 
                                                  (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000001cU)
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.__PVT__instr_rdata_id 
                                                       >> 0x0000001cU)) 
                                                   || (1U 
                                                       & ((0x08000000U 
                                                           & vlSelfRef.__PVT__instr_rdata_id)
                                                           ? 
                                                          (vlSelfRef.__PVT__instr_rdata_id 
                                                           >> 0x0000001aU)
                                                           : 
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.__PVT__instr_rdata_id 
                                                               >> 0x00000019U)))))))))))))
                        : ((1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                                     >> 0x0000000dU))) 
                           && ((1U & (vlSelfRef.__PVT__instr_rdata_id 
                                      >> 0x0000000cU)) 
                               && ((vlSelfRef.__PVT__instr_rdata_id 
                                    >> 0x0000001fU) 
                                   || (1U & ((0x40000000U 
                                              & vlSelfRef.__PVT__instr_rdata_id)
                                              ? ((0x20000000U 
                                                  & vlSelfRef.__PVT__instr_rdata_id)
                                                  ? 
                                                 ((1U 
                                                   & (vlSelfRef.__PVT__instr_rdata_id 
                                                      >> 0x0000001cU)) 
                                                  || ((1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__instr_rdata_id 
                                                           >> 0x0000001bU))) 
                                                      && ((1U 
                                                           & (vlSelfRef.__PVT__instr_rdata_id 
                                                              >> 0x0000001aU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.__PVT__instr_rdata_id 
                                                                  >> 0x00000019U)) 
                                                              || ((0x01000000U 
                                                                   & vlSelfRef.__PVT__instr_rdata_id)
                                                                   ? 
                                                                  ((1U 
                                                                    & (vlSelfRef.__PVT__instr_rdata_id 
                                                                       >> 0x00000016U)) 
                                                                   || ((1U 
                                                                        & (vlSelfRef.__PVT__instr_rdata_id 
                                                                           >> 0x00000015U)) 
                                                                       && (1U 
                                                                           & (vlSelfRef.__PVT__instr_rdata_id 
                                                                              >> 0x00000014U))))
                                                                   : 
                                                                  ((1U 
                                                                    & (vlSelfRef.__PVT__instr_rdata_id 
                                                                       >> 0x00000017U)) 
                                                                   || (1U 
                                                                       & ((0x00400000U 
                                                                           & vlSelfRef.__PVT__instr_rdata_id)
                                                                           ? 
                                                                          (vlSelfRef.__PVT__instr_rdata_id 
                                                                           >> 0x00000015U)
                                                                           : 
                                                                          ((1U 
                                                                            & (vlSelfRef.__PVT__instr_rdata_id 
                                                                               >> 0x00000015U)) 
                                                                           && (1U 
                                                                               & (vlSelfRef.__PVT__instr_rdata_id 
                                                                                >> 0x00000014U)))))))))))
                                                  : 
                                                 ((1U 
                                                   & (vlSelfRef.__PVT__instr_rdata_id 
                                                      >> 0x0000001cU)) 
                                                  || (1U 
                                                      & (~ 
                                                         (vlSelfRef.__PVT__instr_rdata_id 
                                                          >> 0x0000001bU)))))
                                              : ((0x20000000U 
                                                  & vlSelfRef.__PVT__instr_rdata_id)
                                                  ? 
                                                 (vlSelfRef.__PVT__instr_rdata_id 
                                                  >> 0x0000001cU)
                                                  : 
                                                 ((1U 
                                                   & (vlSelfRef.__PVT__instr_rdata_id 
                                                      >> 0x0000001cU)) 
                                                  || (1U 
                                                      & ((0x08000000U 
                                                          & vlSelfRef.__PVT__instr_rdata_id)
                                                          ? 
                                                         (vlSelfRef.__PVT__instr_rdata_id 
                                                          >> 0x0000001aU)
                                                          : 
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__instr_rdata_id 
                                                              >> 0x00000019U)))))))))))));
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.__PVT__instr_rdata_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.__PVT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0000000cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:566: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.__PVT__instr_rdata_id 
                                                   >> 0x0cU)));
                                Verilated::runFlushCallbacks();
                                VL_STOP_MT("verilogSourceFiles/ibex_decoder.sv", 566, "");
                            }
                        }
                    }
                    if ((0U == (7U & (vlSelfRef.__PVT__instr_rdata_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelfRef.__PVT__instr_rdata_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__jump_in_dec = 1U;
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                        if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                            vlSelfRef.__PVT__id_stage_i__DOT__jump_set_dec = 1U;
                            vlSelfRef.__PVT__icache_inval = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (~ VL_ONEHOT_I((((2U == (3U & 
                                               (vlSelfRef.__PVT__instr_rdata_id 
                                                >> 0x0cU))) 
                                       << 2U) | (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__PVT__instr_rdata_id 
                                                       >> 0x0cU))) 
                                                  << 1U) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.__PVT__instr_rdata_id 
                                                        >> 0x0cU))))))))) {
                if (id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_hc04a6b80__0) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:323: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     2,(3U & (vlSelfRef.__PVT__instr_rdata_id 
                                              >> 0x0cU)));
                        Verilated::runFlushCallbacks();
                        VL_STOP_MT("verilogSourceFiles/ibex_decoder.sv", 323, "");
                    }
                }
            }
            vlSelfRef.__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
            vlSelfRef.__PVT__id_stage_i__DOT__lsu_req_dec = 1U;
            vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 0U;
            vlSelfRef.__PVT__id_stage_i__DOT__lsu_sign_ext 
                = (1U & (~ (vlSelfRef.__PVT__instr_rdata_id 
                            >> 0x0000000eU)));
            if ((0U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                              >> 0x0cU)))) {
                vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 2U;
            } else if ((1U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                     >> 0x0cU)))) {
                vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 1U;
            } else if ((2U == (3U & (vlSelfRef.__PVT__instr_rdata_id 
                                     >> 0x0cU)))) {
                vlSelfRef.__PVT__id_stage_i__DOT__lsu_type = 0U;
                if ((0x00004000U & vlSelfRef.__PVT__instr_rdata_id)) {
                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.__PVT__illegal_c_insn_id) {
        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlSelfRef.__PVT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlSelfRef.__PVT__id_stage_i__DOT__lsu_we = 0U;
        vlSelfRef.__PVT__id_stage_i__DOT__jump_in_dec = 0U;
        vlSelfRef.__PVT__id_stage_i__DOT__jump_set_dec = 0U;
        vlSelfRef.__PVT__id_stage_i__DOT__branch_in_dec = 0U;
        vlSelfRef.__PVT__csr_access = 0U;
    }
    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x2cU;
    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlSelfRef.__PVT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel = 2U;
    vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x0000007fU & vlSelfRef.__PVT__instr_rdata_alu_id);
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d = 0U;
    vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 0U;
    vlSelfRef.__PVT__mult_sel_ex = 0U;
    vlSelfRef.__PVT__div_sel_ex = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x00000020U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x00004000U 
                                            & vlSelfRef.__PVT__instr_rdata_alu_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel = 2U;
                            vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel = 4U;
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0x00004000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.__PVT__instr_rdata_alu_id)
                                ? ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)
                                    ? 0x1cU : 0x1aU)
                                : ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                         >> 0x0000000dU)))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)
                                ? 0x1eU : 0x1dU);
                    }
                    vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel = 2U;
                    vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel 
                        = ((1U & ((~ ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                      >> 1U)) | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__g_sec_branch_taken__DOT__branch_taken_q)))
                            ? 2U : 5U);
                    if (vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                    }
                }
            }
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        if ((0x04000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                            if ((0x02000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                if ((0x00004000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000000dU)))) {
                                        if ((0x00001000U 
                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x2dU;
                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                            vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                                = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000000dU)))) {
                                    if ((0x00001000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x2eU;
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i;
                                    }
                                }
                            } else if ((0x00004000U 
                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                              >> 0x0000000dU)))) {
                                    if ((0x00001000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x30U;
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                        vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                            = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i;
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                 >> 0x0000000dU)))) {
                                if ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x2fU;
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                        = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i;
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                             >> 0x0000001fU)))) {
                            if ((0x40000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                if ((0x20000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000001cU)))) {
                                        if ((0x08000000U 
                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                     >> 0x0000001aU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                         >> 0x00000019U)))) {
                                                    if (
                                                        (0x00004000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                 >> 0x0000000dU)))) {
                                                            if (
                                                                (0x00001000U 
                                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0fU;
                                                            }
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                    >> 0x0000000dU)))) {
                                                        if (
                                                            (0x00001000U 
                                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x33U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                        >> 0x0000001aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                     >> 0x00000019U)))) {
                                                if (
                                                    (0x00004000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                             >> 0x0000000dU)))) {
                                                        if (
                                                            (0x00001000U 
                                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0dU;
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                >> 0x0000000dU)))) {
                                                    if (
                                                        (0x00001000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0eU;
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000001cU)))) {
                                    if ((0x08000000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                     >> 0x00000019U)))) {
                                                if (
                                                    (0x00004000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x00002000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (0x00001000U 
                                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x37U;
                                                        }
                                                    } else {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                            = 
                                                            ((0x00001000U 
                                                              & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                              ? 0x34U
                                                              : 0x24U);
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                >> 0x0000000dU)))) {
                                                    if (
                                                        (0x00001000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x32U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001aU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x00000019U)))) {
                                            if ((0x00004000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x00002000U 
                                                      & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                      ? 
                                                     ((0x00001000U 
                                                       & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                       ? 7U
                                                       : 6U)
                                                      : 
                                                     ((0x00001000U 
                                                       & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                       ? 8U
                                                       : 5U));
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                            >> 0x0000000dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                         >> 0x0000000cU)))) {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x20000000U 
                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                              >> 0x0000001cU)))) {
                                    if ((0x08000000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                     >> 0x00000019U)))) {
                                                if (
                                                    (0x00004000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x00002000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                 >> 0x0000000cU)))) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x15U;
                                                        }
                                                    } else {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                            = 
                                                            ((0x00001000U 
                                                              & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                              ? 0x10U
                                                              : 0x14U);
                                                    }
                                                } else if (
                                                           (0x00002000U 
                                                            & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                             >> 0x0000000cU)))) {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x13U;
                                                    }
                                                } else if (
                                                           (0x00001000U 
                                                            & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x31U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001aU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x00000019U)))) {
                                            if ((0x00004000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                if (
                                                    (0x00002000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                             >> 0x0000000cU)))) {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x18U;
                                                    }
                                                } else {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x00001000U 
                                                          & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                          ? 0x0bU
                                                          : 0x17U);
                                                }
                                            } else if (
                                                       (0x00002000U 
                                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                         >> 0x0000000cU)))) {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x16U;
                                                }
                                            } else if (
                                                       (0x00001000U 
                                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0cU;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                 >> 0x0000001cU)))) {
                                if ((0x08000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000001aU)))) {
                                        if ((0x02000000U 
                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            if ((0x00004000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x00002000U 
                                                      & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                      ? 
                                                     ((0x00001000U 
                                                       & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                       ? 0x22U
                                                       : 0x21U)
                                                      : 
                                                     ((0x00001000U 
                                                       & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                       ? 0x20U
                                                       : 0x1fU));
                                            } else if (
                                                       (0x00002000U 
                                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x00001000U 
                                                      & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                      ? 0x3aU
                                                      : 0x39U);
                                            } else if (
                                                       (0x00001000U 
                                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x38U;
                                            }
                                        } else if (
                                                   (0x00004000U 
                                                    & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            if ((0x00002000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                if (
                                                    (0x00001000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x25U;
                                                }
                                            } else {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x00001000U 
                                                      & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                      ? 0x12U
                                                      : 0x23U);
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                        >> 0x0000000dU)))) {
                                            if ((0x00001000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x11U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000001aU)))) {
                                    if ((0x02000000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        if ((0x00004000U 
                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            if ((0x00002000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                if (
                                                    (0x00001000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                    vlSelfRef.__PVT__div_sel_ex = 1U;
                                                } else {
                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                    vlSelfRef.__PVT__div_sel_ex = 1U;
                                                }
                                            } else if (
                                                       (0x00001000U 
                                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                vlSelfRef.__PVT__div_sel_ex = 1U;
                                            } else {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                vlSelfRef.__PVT__div_sel_ex = 1U;
                                            }
                                        } else if (
                                                   (0x00002000U 
                                                    & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            if ((0x00001000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                vlSelfRef.__PVT__mult_sel_ex = 1U;
                                            } else {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                vlSelfRef.__PVT__mult_sel_ex = 1U;
                                            }
                                        } else if (
                                                   (0x00001000U 
                                                    & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                            vlSelfRef.__PVT__mult_sel_ex = 1U;
                                        } else {
                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                                            vlSelfRef.__PVT__mult_sel_ex = 1U;
                                        }
                                    } else {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                            = ((0x00004000U 
                                                & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                ? (
                                                   (0x00002000U 
                                                    & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                    ? 
                                                   ((0x00001000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((0x00001000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                     ? 9U
                                                     : 2U))
                                                : (
                                                   (0x00002000U 
                                                    & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                    ? 
                                                   ((0x00001000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                     ? 0x2cU
                                                     : 0x2bU)
                                                    : 
                                                   ((0x00001000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                     ? 0x0aU
                                                     : 0U)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                        if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                      >> 0x0000000eU)))) {
                            vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                    vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                    if ((0x00004000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                        if ((0x00002000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                = ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)
                                    ? 4U : 3U);
                        } else if ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                            if ((0x04000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x30U;
                                vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                    = vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i;
                            } else if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                 >> 0x0000001fU)))) {
                                if ((0x40000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((0x20000000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001cU)))) {
                                            if ((0x08000000U 
                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0fU;
                                            } else {
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0dU;
                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001cU)))) {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                            = ((0x08000000U 
                                                & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                ? 0x34U
                                                : 8U);
                                    }
                                } else if ((0x20000000U 
                                            & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000001cU)))) {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                            = ((0x08000000U 
                                                & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                ? 0x10U
                                                : 0x0bU);
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000001cU)))) {
                                    if ((0x08000000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0000001aU)))) {
                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x12U;
                                        }
                                    } else {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 9U;
                                    }
                                }
                            }
                        } else {
                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 2U;
                        }
                    } else if ((0x00002000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)
                                ? 0x2cU : 0x2bU);
                    } else if ((0x00001000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                        if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                      >> 0x0000001fU)))) {
                            if ((0x40000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                if ((0x20000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000001cU)))) {
                                        if ((0x08000000U 
                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x33U;
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                        >> 0x0000001aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                     >> 0x00000019U)))) {
                                                if (
                                                    (0x01000000U 
                                                     & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x00800000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                 >> 0x00000016U)))) {
                                                            if (
                                                                (0x00200000U 
                                                                 & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                         >> 0x00000014U)))) {
                                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x40U;
                                                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                                }
                                                            } else if (
                                                                       (0x00100000U 
                                                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x3eU;
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                            } else {
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x3cU;
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                            }
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                    >> 0x00000016U)))) {
                                                        if (
                                                            (0x00200000U 
                                                             & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                     >> 0x00000014U)))) {
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x3fU;
                                                                vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                            }
                                                        } else if (
                                                                   (0x00100000U 
                                                                    & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x3dU;
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                        } else {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x3bU;
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                >> 0x00000017U)))) {
                                                    if (
                                                        (0x00400000U 
                                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                 >> 0x00000015U)))) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                                = 
                                                                ((0x00100000U 
                                                                  & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                                  ? 0x27U
                                                                  : 0x26U);
                                                        }
                                                    } else if (
                                                               (0x00200000U 
                                                                & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                                 >> 0x00000014U)))) {
                                                            vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x2aU;
                                                        }
                                                    } else {
                                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                                            = 
                                                            ((0x00100000U 
                                                              & vlSelfRef.__PVT__instr_rdata_alu_id)
                                                              ? 0x29U
                                                              : 0x28U);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000001cU)))) {
                                    if ((0x08000000U 
                                         & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x32U;
                                    }
                                }
                            } else if ((0x20000000U 
                                        & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                              >> 0x0000001cU)))) {
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator 
                                        = ((0x08000000U 
                                            & vlSelfRef.__PVT__instr_rdata_alu_id)
                                            ? 0x31U
                                            : 0x0cU);
                                }
                            } else if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                 >> 0x0000001cU)))) {
                                if ((0x08000000U & vlSelfRef.__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                  >> 0x0000001aU)))) {
                                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x11U;
                                    }
                                } else {
                                    vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0x0aU;
                                }
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel = 2U;
                        vlSelfRef.__PVT__id_stage_i__DOT__bt_b_mux_sel = 5U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000000cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0000000cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:1141: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.__PVT__instr_rdata_alu_id 
                                                   >> 0x0cU)));
                                Verilated::runFlushCallbacks();
                                VL_STOP_MT("verilogSourceFiles/ibex_decoder.sv", 1141, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelfRef.__PVT__id_stage_i__DOT__alu_operator = 0U;
                vlSelfRef.__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
            }
        }
    }
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__fcov_debug_req 
        = ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_req_i));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_req_i) 
              | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__state_o 
        = ((0x00010000U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                           << 0x0000000fU)) | ((0x00008000U 
                                                & (vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                   << 8U)) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_35)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_d 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__stall_dummy_instr)
            ? 0U : (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_exp 
        = ((((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_78) 
             << 3U) | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_91) 
                       << 2U)) | (((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_102) 
                                   << 1U) | (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_114)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_reg 
        = (((((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_76) 
              & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__3__KET__) 
                 & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_56) 
                    | (IData)((((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                >> 3U) | (0U != (0xc0U 
                                                 & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q)))))))) 
             << 3U) | (((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_89) 
                        & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__2__KET__) 
                           & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_43) 
                              | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                  >> 2U) | (0U != (3U 
                                                   & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                                                      >> 4U))))))) 
                       << 2U)) | ((((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_100) 
                                    & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__1__KET__) 
                                       & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_30) 
                                          | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                              >> 1U) 
                                             | (0U 
                                                != 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                                                    >> 2U))))))) 
                                   << 1U) | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_112) 
                                             & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__0__KET__) 
                                                & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_16) 
                                                   | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                                      | (0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q)))))))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__31__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_177) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_144);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__15__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_177) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_144);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__30__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_176) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_138);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__14__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_176) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_138);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__29__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_175) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_132);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__13__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_175) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_132);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__28__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_174) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_126);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__12__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_174) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_126);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__27__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_173) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_120);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__11__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_173) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_120);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__26__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_172) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_114);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__10__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_172) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_114);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__25__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_171) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_108);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__9__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_171) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_108);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__24__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_170) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_102);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__8__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_170) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_102);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__23__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_169) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_96);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__7__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_169) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_96);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__22__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_168) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_90);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__6__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_168) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_90);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__21__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_167) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_84);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__5__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_167) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_84);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__20__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_166) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_78);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__4__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_166) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_78);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__19__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_165) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_72);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__3__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_165) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_72);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__18__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_164) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_66);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__2__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_164) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_66);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__17__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_163) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_60);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__1__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_163) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_60);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__16__KET__ 
        = (((IData)(((QData)((IData)(((IData)(2U) + 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                       << 1U)))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_162) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_49);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__0__KET__ 
        = (((IData)(((QData)((IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                      << 1U))) >> 2U)) 
            & vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_162) 
           == vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_49);
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    if ((0x00004000U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0eU;
    }
    if ((0x00002000U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0dU;
    }
    if ((0x00001000U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0cU;
    }
    if ((0x00000800U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0bU;
    }
    if ((0x00000400U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0aU;
    }
    if ((0x00000200U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 9U;
    }
    if ((0x00000100U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 8U;
    }
    if ((0x00000080U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 7U;
    }
    if ((0x00000040U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 6U;
    }
    if ((0x00000020U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 5U;
    }
    if ((0x00000010U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 4U;
    }
    if ((8U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 3U;
    }
    if ((4U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 2U;
    }
    if ((2U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 1U;
    }
    if ((1U & vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    }
    vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_9 = ((0U 
                                                 != vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i) 
                                                & (((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                    >> 5U) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__priv_lvl_q))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[0U] 
        = vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
        [0U];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[1U] 
        = vlSelfRef.__PVT__ex_block_i__DOT__alu_imd_val_q
        [1U];
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel)))))))) {
        if ((0U != (((IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:423: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.id_stage_i.rf_wdata_id_mux: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.__PVT__id_stage_i__DOT__rf_wdata_sel));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_id_stage.sv", 423, "");
            }
        }
    }
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d 
        = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q;
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_block_cache = 1U;
    vlSelfRef.ic_scr_key_req_o = 0U;
    if ((2U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q))) {
            if (vlSelfRef.__PVT__icache_inval) {
                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d = 1U;
                vlSelfRef.ic_scr_key_req_o = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.__PVT__icache_inval)))) {
                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_block_cache = 0U;
            }
        } else if (vlSelfRef.__PVT__icache_inval) {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d = 1U;
            vlSelfRef.ic_scr_key_req_o = 1U;
        } else if ((0x000000ffU == (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_q))) {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d = 3U;
        }
    } else {
        if ((1U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q))) {
            if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_q) {
                vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d = 2U;
            }
        } else {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_q)))) {
                vlSelfRef.ic_scr_key_req_o = 1U;
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_core.sv:1725: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_core.sv", 1725, "");
            }
        }
    }
    vlSelfRef.__PVT__rvfi_mem_mask_int = ((0U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type))
                                           ? 0x0fU : 
                                          ((1U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type))
                                            ? 3U : 
                                           ((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_type))
                                             ? 1U : 0U)));
    vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = 0U;
    if (vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = 0U;
    } else if ((0U != (IData)(vlSelfRef.__PVT__id_stage_i__DOT__multdiv_operator))) {
        vlSelfRef.__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = 1U;
    }
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__32__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__33__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__34__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__35__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__36__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__37__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__38__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__39__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__40__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__41__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__42__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__43__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__44__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__45__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__46__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__47__KET__ 
        = (((0U == ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                     ? 1U : 2U)) & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                    >> 2U)) | (((1U 
                                                 == 
                                                 ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                   ? 1U
                                                   : 2U)) 
                                                & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                   >> 1U)) 
                                               | ((2U 
                                                   == 
                                                   ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
                                                     ? 1U
                                                     : 2U)) 
                                                  & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type[2U] = 
        ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__lsu_we)
          ? 1U : 2U);
    vlSelfRef.__PVT__cs_registers_i__DOT__csr_op_i 
        = ((IData)(((0U == (0x000f8000U & vlSelfRef.__PVT__instr_rdata_id)) 
                    & ((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
                       | (3U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op)))))
            ? 0U : (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__instr_valid_id_q));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel)) 
                               << 1U) | (0U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel)) 
                     << 1U) | (0U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:328: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.id_stage_i.g_btalu_muxes.bt_operand_a_mux: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__id_stage_i__DOT__bt_a_mux_sel));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_id_stage.sv", 328, "");
            }
        }
    }
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__div_en_o 
        = ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.__PVT__div_sel_ex));
    vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__mult_en_o 
        = ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.__PVT__mult_sel_ex));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i 
        = ((IData)(vlSelfRef.__PVT__div_sel_ex) | (IData)(vlSelfRef.__PVT__mult_sel_ex));
    if (vlSelfRef.__PVT__lsu_addr_incr_req) {
        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlSelfRef.__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel 
            = vlSelfRef.__PVT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    if ((1U & (~ VL_ONEHOT_I((((0x25U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                               << 1U) | (0x24U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))))))) {
        if ((0U != (((0x25U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                     << 1U) | (0x24U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:564: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.ex_block_i.alu_i.g_alu_rvb: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 564, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((0x33U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                               << 2U) | (((0x32U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                                          << 1U) | 
                                         (0x31U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))))))) {
        if ((0U != (((0x33U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                     << 2U) | (((0x32U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                                << 1U) | (0x31U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:583: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.ex_block_i.alu_i.g_alu_rvb: unique case, but multiple matches found for '7'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),7,
                             (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 583, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((0x15U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                               << 2U) | (((0x14U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                                          << 1U) | 
                                         (0x13U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))))))) {
        if ((0U != (((0x15U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                     << 2U) | (((0x14U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                                << 1U) | (0x13U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:778: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.ex_block_i.alu_i.g_alu_rvb.gen_alu_rvb_otearlgrey_full: unique case, but multiple matches found for '7'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),7,
                             (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 778, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((0x3aU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                               << 1U) | (0x39U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))))))) {
        if ((0U != (((0x3aU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                     << 1U) | (0x39U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:980: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.u_ibex_core.ex_block_i.alu_i.g_alu_rvb.gen_alu_rvb_otearlgrey_full: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/ibex_alu.sv", 980, "");
            }
        }
    }
    if ((0x13U != (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
        if ((0x14U != (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            if ((0x15U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
                vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__unnamedblk10__DOT__h = 2U;
            }
        }
        if ((0x14U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__unnamedblk9__DOT__b = 4U;
        }
    }
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and 
        = ((4U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | (7U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_or 
        = ((3U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | (6U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_cz 
        = ((0x29U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | (0x28U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbe_op 
        = ((0x35U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | (0x36U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)));
    __Vtableidx3 = vlSelfRef.__PVT__id_stage_i__DOT__alu_operator;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Vsim__ConstPool__TABLE_h5df9fcbf_0[__Vtableidx3];
    __Vtableidx5 = (((IData)(vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) 
                     << 7U) | (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_op_b_negate 
        = Vsim__ConstPool__TABLE_hf8601f55_0[__Vtableidx5];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode 
        = ((0x31U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | ((0x32U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
              | (0x33U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))));
    __Vtableidx2 = vlSelfRef.__PVT__id_stage_i__DOT__alu_operator;
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Vsim__ConstPool__TABLE_h99e708d5_0[__Vtableidx2];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Vsim__ConstPool__TABLE_h395e6778_0[__Vtableidx2];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Vsim__ConstPool__TABLE_he85dd9ee_0[__Vtableidx2];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Vsim__ConstPool__TABLE_h133834bd_0[__Vtableidx2];
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_cpoly 
        = ((0x40U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | ((0x3eU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
              | (0x3cU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator))));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode 
        = ((0x3bU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | (0x3cU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode 
        = ((0x3dU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | (0x3eU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)));
    vlSelfRef.__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_op 
        = ((0x40U == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
           | ((0x3fU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
              | ((0x3eU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                 | ((0x3dU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                    | ((0x3cU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)) 
                       | (0x3bU == (IData)(vlSelfRef.__PVT__id_stage_i__DOT__alu_operator)))))));
    vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((~ (IData)(vlSelfRef.__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (0U != (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))));
    if ((0x00010000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__state_o)) {
        if ((0x00008000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__state_o)) {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set = 0U;
            vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode = 7U;
        } else {
            vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set = 1U;
            vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode = 4U;
        }
    } else {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set 
            = ((0x00008000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__state_o)
                ? 1U : 0U);
        vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode = 0U;
    }
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_err = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_reg))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_err 
            = (3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_err) 
                     | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                        & (~ (- (IData)((1U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q))))))));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_reg))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_err 
            = (3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_err) 
                     | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                         >> 2U) & (~ (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                                    >> 1U))))))));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_reg))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_err 
            = (3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_err) 
                     | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                         >> 4U) & (~ (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                                    >> 2U))))))));
    }
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_data = 0ULL;
    if ((1U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_reg))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_data 
            = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_data 
               | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_q
               [0U]);
    }
    if ((2U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_reg))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_data 
            = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_data 
               | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_q
               [1U]);
    }
    if ((4U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_reg))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_data 
            = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_data 
               | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_q
               [2U]);
    }
    if ((8U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_reg))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_err 
            = (3U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_err) 
                     | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q) 
                         >> 6U) & (~ (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                                    >> 3U))))))));
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_data 
            = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_data 
               | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_q
               [3U]);
    }
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffff7fffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffff7fffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0fU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__31__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0fU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__31__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_46 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000001fU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffff7fffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffff7fffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0fU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__15__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0fU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__15__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_46 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000000fU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffbfffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffbfffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0eU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__30__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0eU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__30__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_43 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000001eU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffbfffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffbfffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0eU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__14__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0eU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__14__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_43 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000000eU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffdfffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffdfffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0dU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__29__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0dU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__29__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_40 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000001dU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffdfffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffdfffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0dU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__13__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0dU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__13__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_40 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000000dU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffefffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffefffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0cU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__28__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0cU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__28__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_37 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000001cU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffefffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffefffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0cU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__12__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0cU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__12__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_37 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000000cU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffff7ffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffff7ffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0bU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__27__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0bU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__27__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_34 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000001bU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffff7ffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffff7ffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0bU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__11__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0bU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__11__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_34 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000000bU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffbffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffbffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0aU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__26__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0aU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__26__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_31 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000001aU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffbffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffbffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0x0aU]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__10__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0x0aU] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__10__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_31 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x0000000aU));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffdffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffdffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [9U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__25__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [9U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__25__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_28 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000019U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffdffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffdffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [9U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__9__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [9U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__9__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_28 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 9U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffeffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffeffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [8U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__24__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [8U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__24__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_25 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000018U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffeffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffeffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [8U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__8__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [8U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__8__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_25 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 8U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffff7fffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffff7fffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [7U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__23__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [7U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__23__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_22 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000017U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffff7fULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffff7fULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [7U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__7__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [7U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__7__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_22 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 7U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffbfffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffbfffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [6U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__22__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [6U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__22__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_19 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000016U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffffbfULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffffbfULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [6U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__6__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [6U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__6__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_19 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 6U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffdfffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffdfffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [5U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__21__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [5U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__21__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_16 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000015U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffffdfULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffffdfULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [5U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__5__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [5U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__5__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_16 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 5U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffefffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffefffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [4U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__20__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [4U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__20__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_13 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000014U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000ffffffffffefULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000ffffffffffefULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [4U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__4__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [4U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__4__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_13 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 4U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffff7ffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffff7ffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [3U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__19__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [3U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__19__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_10 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000013U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffff7ULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffff7ULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [3U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__3__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [3U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__3__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_10 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 3U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffbffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffbffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [2U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__18__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [2U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__18__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_7 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000012U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffffbULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffffbULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [2U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__2__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [2U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__2__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_7 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 2U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffdffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffdffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [1U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__17__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [1U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__17__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_4 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000011U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffffdULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffffdULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [1U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__1__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [1U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__1__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_4 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 1U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffeffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffeffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                                [0U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__16__KET__)
                                : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                          [0U] >> 3U)) 
                                   && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__16__KET__) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                      << 1U)))) 
                                                    >> 2U)) 
                                           > (IData)(
                                                     (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_1 
                                                      >> 2U)))) 
                                       & ((IData)(((QData)((IData)(
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                     << 1U)))) 
                                                   >> 2U)) 
                                          < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))) 
              << 0x00000010U));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x0000fffffffffffeULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x0000fffffffffffeULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (IData)((IData)(((0x00000010U & vlSelfRef.__PVT__csr_pmp_cfg
                               [0U]) ? (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__0__KET__)
                               : ((1U & (vlSelfRef.__PVT__csr_pmp_cfg
                                         [0U] >> 3U)) 
                                  && (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__0__KET__) 
                                       | ((IData)(((QData)((IData)(
                                                                   (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                    << 1U))) 
                                                   >> 2U)) 
                                          > (IData)(
                                                    (vlSelfRef.g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_1 
                                                     >> 2U)))) 
                                      & ((IData)(((QData)((IData)(
                                                                  (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                                                                   << 1U))) 
                                                  >> 2U)) 
                                         < vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)))))));
    vlSelfRef.__PVT__new_irq = ((IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_9) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_0_2));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
        = (((QData)((IData)((((((((((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__47__KET__) 
                                    << 3U) | ((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__46__KET__) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__45__KET__) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__44__KET__))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__43__KET__) 
                                    << 3U) | ((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__42__KET__) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__41__KET__) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__40__KET__))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__39__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__38__KET__) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__37__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__36__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__35__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__34__KET__) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__33__KET__) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__32__KET__))))) 
                              << 0x00000010U) | (((
                                                   ((((2U 
                                                       & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                            >> 2U))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                              >> 2U))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                              >> 2U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                               >> 2U))))) 
                                                  << 8U) 
                                                 | (((((2U 
                                                        & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 2U))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                               >> 2U))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                               >> 2U))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                              >> 1U)) 
                                                          | (1U 
                                                             & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                >> 2U))))))))) 
            << 0x00000010U) | (QData)((IData)((((((
                                                   ((2U 
                                                     & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                          >> 2U))) 
                                                   << 6U) 
                                                  | (((2U 
                                                       & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                            >> 2U))) 
                                                     << 4U)) 
                                                 | ((((2U 
                                                       & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                            >> 2U))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 2U))))) 
                                                << 8U) 
                                               | (((((2U 
                                                      & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                           >> 2U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 2U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 2U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                              >> 2U)))))))));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_type_i[0U] 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_type_i[1U] 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_type_i[2U] 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffffeULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | (IData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__Vfuncout)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffffdULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__Vfuncout)) 
              << 1U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffffbULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__Vfuncout)) 
              << 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[3U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffff7ULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__Vfuncout)) 
              << 3U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[4U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffffefULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__Vfuncout)) 
              << 4U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[5U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffffdfULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__Vfuncout)) 
              << 5U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[6U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffffbfULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__Vfuncout)) 
              << 6U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[7U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffff7fULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__Vfuncout)) 
              << 7U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[8U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffeffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__Vfuncout)) 
              << 8U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[9U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffdffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__Vfuncout)) 
              << 9U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0aU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffffbffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__Vfuncout)) 
              << 0x0000000aU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0bU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffff7ffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__Vfuncout)) 
              << 0x0000000bU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0cU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffefffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0dU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffdfffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__Vfuncout)) 
              << 0x0000000dU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0eU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffffbfffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__Vfuncout)) 
              << 0x0000000eU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0x0fU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffff7fffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__Vfuncout)) 
              << 0x0000000fU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffeffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffdffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__Vfuncout)) 
              << 0x00000011U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffffbffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__Vfuncout)) 
              << 0x00000012U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[3U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffff7ffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__Vfuncout)) 
              << 0x00000013U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[4U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffefffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[5U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffdfffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__Vfuncout)) 
              << 0x00000015U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[6U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffffbfffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__Vfuncout)) 
              << 0x00000016U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[7U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000ffffff7fffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__Vfuncout)) 
              << 0x00000017U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[8U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__Vfuncout)));
    vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x0000fffffeffffffULL & vlSelfRef.__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__permission_check 
        = (1U & ((IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                 >> 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__priv_mode 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__pmp_req_type 
        = vlSelfRef.__PVT__g_pmp__DOT__pmp_req_type
        [1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__region_csr_pmp_cfg 
        = vlSelfRef.__PVT__csr_pmp_cfg[9U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelfRef.__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__pmp_req_type;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__region_csr_pmp_cfg;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__result 
                    = ((IData)((2U == (3U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg))))
                        ? ((0x00000020U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__priv_mode))))
                                : (0U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)))
                            : ((4U & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)) 
                                   | (1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)))
                                : ((2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)) 
                                      & (3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type))
                            : ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__permission_check) 
                               & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__priv_mode))
                                   ? ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__Vfuncout 
                    = vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__result;
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__permission_check;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__priv_mode;
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__priv_mode))
                              ? ((~ (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__pmp_cfg_lock)) 
                                 | (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__permission_check))
                              : (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__permission_check)));
            }(), (IData)(vlSelfRef.__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__Vfuncout)));
}
