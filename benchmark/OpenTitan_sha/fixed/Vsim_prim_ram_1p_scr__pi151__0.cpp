// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_ram_1p_scr__pi151____Vdpiexp_simutil_get_scramble_key_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank(Vsim__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151____Vdpiexp_simutil_get_scramble_key_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__simutil_get_scramble_key__Vstatic__valid 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_q)
            ? 1U : 0U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__simutil_get_scramble_key__Vstatic__valid)) {
        val[0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[0U];
        val[1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[1U];
        val[2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[2U];
        val[3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[3U];
    }
    simutil_get_scramble_key__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__simutil_get_scramble_key__Vstatic__valid;
}

extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_hab76c978_0;

void Vsim_prim_ram_1p_scr__pi151____Vdpiexp_simutil_get_scramble_nonce_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank(Vsim__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151____Vdpiexp_simutil_get_scramble_nonce_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__simutil_get_scramble_nonce__Vstatic__valid 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_q)
            ? 1U : 0U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__simutil_get_scramble_nonce__Vstatic__valid)) {
        nonce[0U] = Vsim__ConstPool__CONST_hab76c978_0[0U];
        nonce[1U] = Vsim__ConstPool__CONST_hab76c978_0[1U];
        nonce[2U] = Vsim__ConstPool__CONST_hab76c978_0[2U];
        nonce[3U] = Vsim__ConstPool__CONST_hab76c978_0[3U];
        nonce[4U] = Vsim__ConstPool__CONST_hab76c978_0[4U];
        nonce[5U] = Vsim__ConstPool__CONST_hab76c978_0[5U];
        nonce[6U] = Vsim__ConstPool__CONST_hab76c978_0[6U];
        nonce[7U] = Vsim__ConstPool__CONST_hab76c978_0[7U];
        nonce[8U] = Vsim__ConstPool__CONST_hab76c978_0[8U];
        nonce[9U] = Vsim__ConstPool__CONST_hab76c978_0[9U];
        nonce[0U] = (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_nonce_q);
        nonce[1U] = (IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_nonce_q 
                             >> 0x00000020U));
    }
    simutil_get_scramble_nonce__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__simutil_get_scramble_nonce__Vstatic__valid;
}

void Vsim_prim_ram_1p_scr__pi151____Vdpiexp_u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank(Vsim__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151____Vdpiexp_u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 78, 256, 0, file,  &(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vsim_prim_ram_1p_scr__pi151____Vdpiexp_u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151____Vdpiexp_u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000100U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x000000ffU 
                                                                                & index)][0U] 
            = val[0U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x000000ffU 
                                                                                & index)][1U] 
            = val[1U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x000000ffU 
                                                                                & index)][2U] 
            = (0x00003fffU & val[2U]);
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
}

extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_hc1613866_0;

void Vsim_prim_ram_1p_scr__pi151____Vdpiexp_u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151____Vdpiexp_u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000100U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vsim__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vsim__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vsim__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vsim__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vsim__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vsim__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vsim__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vsim__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vsim__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vsim__ConstPool__CONST_hc1613866_0[9U];
        val[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x000000ffU & index)][0U];
        val[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x000000ffU & index)][1U];
        val[2U] = ((0xffffc000U & val[2U]) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                   [(0x000000ffU & index)][2U]);
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
}

void Vsim_prim_ram_1p_scr__pi151___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank(Vsim_prim_ram_1p_scr__pi151* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)VL_VALUEPLUSARGS_INI(1, "show_mem_paths=%0b"s, 
                               vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths);
    if (VL_UNLIKELY((vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths))) {
        VL_WRITEF_NX("%Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_rams.gen_rams_inner[0].gen_scramble_rams.data_bank.u_prim_ram_1p_adv.gen_ram_inst[0].u_mem.gen_generic.u_impl_generic.unnamedblk2\n",0,
                     vlSymsp->name());
        Verilated::runFlushCallbacks();
    }
}

void Vsim_prim_ram_1p_scr__pi151___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank__0(Vsim_prim_ram_1p_scr__pi151* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__2;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__2 = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__0__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__0__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__0__val;
    __Vfunc_mubi4_bool_to_mubi__0__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__1__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__1__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__1__val;
    __Vfunc_mubi4_bool_to_mubi__1__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__2__Vfuncout;
    __Vfunc_mubi4_and_hi__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__2__a;
    __Vfunc_mubi4_and_hi__2__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__2__b;
    __Vfunc_mubi4_and_hi__2__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3__Vfuncout;
    __Vfunc_mubi4_and_hi__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3__a;
    __Vfunc_mubi4_and_hi__3__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3__b;
    __Vfunc_mubi4_and_hi__3__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__4__Vfuncout;
    __Vfunc_mubi4_or_hi__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__4__a;
    __Vfunc_mubi4_or_hi__4__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__4__b;
    __Vfunc_mubi4_or_hi__4__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__5__Vfuncout;
    __Vfunc_mubi4_or__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__5__a;
    __Vfunc_mubi4_or__5__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__5__b;
    __Vfunc_mubi4_or__5__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__5__a_in;
    __Vfunc_mubi4_or__5__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__5__b_in;
    __Vfunc_mubi4_or__5__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__6__Vfuncout;
    __Vfunc_mubi4_and__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__6__a;
    __Vfunc_mubi4_and__6__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__6__b;
    __Vfunc_mubi4_and__6__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__6__a_in;
    __Vfunc_mubi4_and__6__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__6__b_in;
    __Vfunc_mubi4_and__6__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__7__Vfuncout;
    __Vfunc_mubi4_and__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__7__a;
    __Vfunc_mubi4_and__7__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__7__b;
    __Vfunc_mubi4_and__7__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__7__a_in;
    __Vfunc_mubi4_and__7__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__7__b_in;
    __Vfunc_mubi4_and__7__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__17__Vfuncout;
    __Vfunc_mubi4_test_true_loose__17__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__17__val;
    __Vfunc_mubi4_test_true_loose__17__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__18__Vfuncout;
    __Vfunc_mubi4_and_hi__18__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__18__a;
    __Vfunc_mubi4_and_hi__18__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__18__b;
    __Vfunc_mubi4_and_hi__18__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__19__Vfuncout;
    __Vfunc_mubi4_and__19__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__19__a;
    __Vfunc_mubi4_and__19__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__19__b;
    __Vfunc_mubi4_and__19__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__19__a_in;
    __Vfunc_mubi4_and__19__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__19__b_in;
    __Vfunc_mubi4_and__19__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__30__Vfuncout;
    __Vfunc_mubi4_test_true_loose__30__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__30__val;
    __Vfunc_mubi4_test_true_loose__30__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__31__Vfuncout;
    __Vfunc_mubi4_test_true_loose__31__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__31__val;
    __Vfunc_mubi4_test_true_loose__31__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__32__Vfuncout;
    __Vfunc_mubi4_test_true_loose__32__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__32__val;
    __Vfunc_mubi4_test_true_loose__32__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__33__Vfuncout;
    __Vfunc_mubi4_test_true_loose__33__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__33__val;
    __Vfunc_mubi4_test_true_loose__33__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__38__Vfuncout;
    __Vfunc_mubi4_and_hi__38__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__38__a;
    __Vfunc_mubi4_and_hi__38__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__38__b;
    __Vfunc_mubi4_and_hi__38__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__39__Vfuncout;
    __Vfunc_mubi4_and__39__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__39__a;
    __Vfunc_mubi4_and__39__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__39__b;
    __Vfunc_mubi4_and__39__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__39__a_in;
    __Vfunc_mubi4_and__39__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__39__b_in;
    __Vfunc_mubi4_and__39__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__40__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__40__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__40__val;
    __Vfunc_mubi4_bool_to_mubi__40__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__41__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__41__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__41__val;
    __Vfunc_mubi4_bool_to_mubi__41__val = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__47__Vfuncout;
    __Vfunc_sbox4_64bit__47__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__47__state_in;
    __Vfunc_sbox4_64bit__47__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__48__Vfuncout;
    __Vfunc_sbox4_8bit__48__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__48__state_in;
    __Vfunc_sbox4_8bit__48__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__49__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__49__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__49__state_in;
    __Vfunc_prince_mult_prime_64bit__49__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__50__Vfuncout;
    __Vfunc_prince_nibble_red16__50__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__50__vect;
    __Vfunc_prince_nibble_red16__50__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__51__Vfuncout;
    __Vfunc_prince_nibble_red16__51__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__51__vect;
    __Vfunc_prince_nibble_red16__51__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__52__Vfuncout;
    __Vfunc_prince_nibble_red16__52__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__52__vect;
    __Vfunc_prince_nibble_red16__52__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__53__Vfuncout;
    __Vfunc_prince_nibble_red16__53__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__53__vect;
    __Vfunc_prince_nibble_red16__53__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__54__Vfuncout;
    __Vfunc_prince_nibble_red16__54__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__54__vect;
    __Vfunc_prince_nibble_red16__54__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__55__Vfuncout;
    __Vfunc_prince_nibble_red16__55__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__55__vect;
    __Vfunc_prince_nibble_red16__55__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__56__Vfuncout;
    __Vfunc_prince_nibble_red16__56__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__56__vect;
    __Vfunc_prince_nibble_red16__56__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__57__Vfuncout;
    __Vfunc_prince_nibble_red16__57__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__57__vect;
    __Vfunc_prince_nibble_red16__57__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__58__Vfuncout;
    __Vfunc_prince_nibble_red16__58__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__58__vect;
    __Vfunc_prince_nibble_red16__58__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__59__Vfuncout;
    __Vfunc_prince_nibble_red16__59__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__59__vect;
    __Vfunc_prince_nibble_red16__59__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__60__Vfuncout;
    __Vfunc_prince_nibble_red16__60__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__60__vect;
    __Vfunc_prince_nibble_red16__60__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__61__Vfuncout;
    __Vfunc_prince_nibble_red16__61__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__61__vect;
    __Vfunc_prince_nibble_red16__61__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__62__Vfuncout;
    __Vfunc_prince_nibble_red16__62__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__62__vect;
    __Vfunc_prince_nibble_red16__62__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__63__Vfuncout;
    __Vfunc_prince_nibble_red16__63__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__63__vect;
    __Vfunc_prince_nibble_red16__63__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__64__Vfuncout;
    __Vfunc_prince_nibble_red16__64__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__64__vect;
    __Vfunc_prince_nibble_red16__64__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__65__Vfuncout;
    __Vfunc_prince_nibble_red16__65__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__65__vect;
    __Vfunc_prince_nibble_red16__65__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__66__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__66__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__66__state_in;
    __Vfunc_prince_shiftrows_64bit__66__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__67__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__67__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__67__state_in;
    __Vfunc_prince_mult_prime_64bit__67__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__68__Vfuncout;
    __Vfunc_prince_nibble_red16__68__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__68__vect;
    __Vfunc_prince_nibble_red16__68__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__69__Vfuncout;
    __Vfunc_prince_nibble_red16__69__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__69__vect;
    __Vfunc_prince_nibble_red16__69__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__70__Vfuncout;
    __Vfunc_prince_nibble_red16__70__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__70__vect;
    __Vfunc_prince_nibble_red16__70__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__71__Vfuncout;
    __Vfunc_prince_nibble_red16__71__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__71__vect;
    __Vfunc_prince_nibble_red16__71__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__72__Vfuncout;
    __Vfunc_prince_nibble_red16__72__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__72__vect;
    __Vfunc_prince_nibble_red16__72__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__73__Vfuncout;
    __Vfunc_prince_nibble_red16__73__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__73__vect;
    __Vfunc_prince_nibble_red16__73__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__74__Vfuncout;
    __Vfunc_prince_nibble_red16__74__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__74__vect;
    __Vfunc_prince_nibble_red16__74__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__75__Vfuncout;
    __Vfunc_prince_nibble_red16__75__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__75__vect;
    __Vfunc_prince_nibble_red16__75__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__76__Vfuncout;
    __Vfunc_prince_nibble_red16__76__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__76__vect;
    __Vfunc_prince_nibble_red16__76__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__77__Vfuncout;
    __Vfunc_prince_nibble_red16__77__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__77__vect;
    __Vfunc_prince_nibble_red16__77__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__78__Vfuncout;
    __Vfunc_prince_nibble_red16__78__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__78__vect;
    __Vfunc_prince_nibble_red16__78__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__79__Vfuncout;
    __Vfunc_prince_nibble_red16__79__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__79__vect;
    __Vfunc_prince_nibble_red16__79__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__80__Vfuncout;
    __Vfunc_prince_nibble_red16__80__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__80__vect;
    __Vfunc_prince_nibble_red16__80__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__81__Vfuncout;
    __Vfunc_prince_nibble_red16__81__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__81__vect;
    __Vfunc_prince_nibble_red16__81__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__82__Vfuncout;
    __Vfunc_prince_nibble_red16__82__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__82__vect;
    __Vfunc_prince_nibble_red16__82__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__83__Vfuncout;
    __Vfunc_prince_nibble_red16__83__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__83__vect;
    __Vfunc_prince_nibble_red16__83__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__84__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__84__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__84__state_in;
    __Vfunc_prince_shiftrows_64bit__84__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__142__Vfuncout;
    __Vfunc_sbox4_64bit__142__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__142__state_in;
    __Vfunc_sbox4_64bit__142__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__143__Vfuncout;
    __Vfunc_sbox4_8bit__143__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__143__state_in;
    __Vfunc_sbox4_8bit__143__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__144__Vfuncout;
    __Vfunc_sbox4_64bit__144__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__144__state_in;
    __Vfunc_sbox4_64bit__144__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__145__Vfuncout;
    __Vfunc_sbox4_8bit__145__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__145__state_in;
    __Vfunc_sbox4_8bit__145__state_in = 0;
    // Body
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_i 
        = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_nonce_q 
            << 8U) | (QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_tag_addr_o)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_446 = (0x000000ffU 
                                                  & ((((((2U 
                                                          & ((IData)(
                                                                     (0x21748fe3da09b65cULL 
                                                                      >> 
                                                                      (0x0000003fU 
                                                                       & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_441)), 2U)))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (0x21748fe3da09b65cULL 
                                                                       >> 
                                                                       ((IData)(2U) 
                                                                        + 
                                                                        (0x0000003fU 
                                                                         & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_441)), 2U))))))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((IData)(
                                                                       (0x21748fe3da09b65cULL 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_441) 
                                                                                >> 4U)), 2U)))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (0x21748fe3da09b65cULL 
                                                                         >> 
                                                                         ((IData)(2U) 
                                                                          + 
                                                                          (0x0000003fU 
                                                                           & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_441) 
                                                                                >> 4U)), 2U))))))) 
                                                          << 4U)) 
                                                      | ((((2U 
                                                            & ((IData)(
                                                                       (0x21748fe3da09b65cULL 
                                                                        >> 
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (0x0000003fU 
                                                                          & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_441)), 2U))))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (0x21748fe3da09b65cULL 
                                                                         >> 
                                                                         ((IData)(3U) 
                                                                          + 
                                                                          (0x0000003fU 
                                                                           & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_441)), 2U))))))) 
                                                          << 2U) 
                                                         | ((2U 
                                                             & ((IData)(
                                                                        (0x21748fe3da09b65cULL 
                                                                         >> 
                                                                         ((IData)(1U) 
                                                                          + 
                                                                          (0x0000003fU 
                                                                           & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_441) 
                                                                                >> 4U)), 2U))))) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (0x21748fe3da09b65cULL 
                                                                          >> 
                                                                          ((IData)(3U) 
                                                                           + 
                                                                           (0x0000003fU 
                                                                            & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h6e95ff9d_0_441) 
                                                                                >> 4U)), 2U))))))))) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_nonce_q 
                                                                >> 0x00000038U))));
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_q) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_req_o));
    __Vfunc_sbox4_64bit__47__state_in = (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_i 
                                         ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
                                            ^ (((QData)((IData)(
                                                                vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[1U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[0U])))));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_sbox4_64bit__47__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17303182115230987573ull);
    __Vfunc_sbox4_8bit__48__state_in = (0x000000ffU 
                                        & (IData)(__Vfunc_sbox4_64bit__47__state_in));
    vlSelf->__Vfunc_sbox4_8bit__48__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7679029556148552234ull);
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x0000000fU 
                                                      & (IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x0000003fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__48__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x000000f0U 
                                                      & ((IData)(
                                                                 (0x4d5e087619ca23fbULL 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__48__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                         << 4U)));
    __Vfunc_sbox4_8bit__48__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__48__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__47__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__47__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__48__Vfuncout)));
    __Vfunc_sbox4_8bit__48__state_in = (0x000000ffU 
                                        & (IData)((__Vfunc_sbox4_64bit__47__state_in 
                                                   >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__48__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7679029556148552234ull);
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x0000000fU 
                                                      & (IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x0000003fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__48__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x000000f0U 
                                                      & ((IData)(
                                                                 (0x4d5e087619ca23fbULL 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__48__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                         << 4U)));
    __Vfunc_sbox4_8bit__48__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__48__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__47__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__47__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__48__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__48__state_in = (0x000000ffU 
                                        & (IData)((__Vfunc_sbox4_64bit__47__state_in 
                                                   >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__48__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7679029556148552234ull);
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x0000000fU 
                                                      & (IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x0000003fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__48__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x000000f0U 
                                                      & ((IData)(
                                                                 (0x4d5e087619ca23fbULL 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__48__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                         << 4U)));
    __Vfunc_sbox4_8bit__48__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__48__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__47__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__47__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__48__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__48__state_in = (0x000000ffU 
                                        & (IData)((__Vfunc_sbox4_64bit__47__state_in 
                                                   >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__48__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7679029556148552234ull);
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x0000000fU 
                                                      & (IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x0000003fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__48__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x000000f0U 
                                                      & ((IData)(
                                                                 (0x4d5e087619ca23fbULL 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__48__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                         << 4U)));
    __Vfunc_sbox4_8bit__48__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__48__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__47__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__47__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__48__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__48__state_in = (0x000000ffU 
                                        & (IData)((__Vfunc_sbox4_64bit__47__state_in 
                                                   >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__48__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7679029556148552234ull);
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x0000000fU 
                                                      & (IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x0000003fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__48__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x000000f0U 
                                                      & ((IData)(
                                                                 (0x4d5e087619ca23fbULL 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__48__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                         << 4U)));
    __Vfunc_sbox4_8bit__48__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__48__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__47__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__47__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__48__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__48__state_in = (0x000000ffU 
                                        & (IData)((__Vfunc_sbox4_64bit__47__state_in 
                                                   >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__48__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7679029556148552234ull);
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x0000000fU 
                                                      & (IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x0000003fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__48__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x000000f0U 
                                                      & ((IData)(
                                                                 (0x4d5e087619ca23fbULL 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__48__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                         << 4U)));
    __Vfunc_sbox4_8bit__48__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__48__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__47__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__47__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__48__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__48__state_in = (0x000000ffU 
                                        & (IData)((__Vfunc_sbox4_64bit__47__state_in 
                                                   >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__48__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7679029556148552234ull);
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x0000000fU 
                                                      & (IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x0000003fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__48__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x000000f0U 
                                                      & ((IData)(
                                                                 (0x4d5e087619ca23fbULL 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__48__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                         << 4U)));
    __Vfunc_sbox4_8bit__48__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__48__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__47__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__47__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__48__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__48__state_in = (0x000000ffU 
                                        & (IData)((__Vfunc_sbox4_64bit__47__state_in 
                                                   >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__48__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7679029556148552234ull);
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x0000000fU 
                                                      & (IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x0000003fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__48__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__48__state_out = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__48__state_out)) 
                                                   | (0x000000f0U 
                                                      & ((IData)(
                                                                 (0x4d5e087619ca23fbULL 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & VL_SHIFTL_III(6,32,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__48__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                         << 4U)));
    __Vfunc_sbox4_8bit__48__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__48__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__47__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__47__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__48__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__47__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__47__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__47__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__49__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__49__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16279631978864432789ull);
    __Vfunc_prince_nibble_red16__50__vect = (0xe7bdU 
                                             & (IData)(__Vfunc_prince_mult_prime_64bit__49__state_in));
    __Vfunc_prince_nibble_red16__50__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__50__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__50__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__50__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__50__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__50__Vfuncout)));
    __Vfunc_prince_nibble_red16__51__vect = (0xde7bU 
                                             & (IData)(__Vfunc_prince_mult_prime_64bit__49__state_in));
    __Vfunc_prince_nibble_red16__51__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__51__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__51__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__51__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__51__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__51__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__52__vect = (0xbde7U 
                                             & (IData)(__Vfunc_prince_mult_prime_64bit__49__state_in));
    __Vfunc_prince_nibble_red16__52__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__52__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__52__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__52__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__52__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__52__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__53__vect = (0x7bdeU 
                                             & (IData)(__Vfunc_prince_mult_prime_64bit__49__state_in));
    __Vfunc_prince_nibble_red16__53__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__53__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__53__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__53__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__53__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__53__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__54__vect = (0x7bdeU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__49__state_in 
                                                        >> 0x10U)));
    __Vfunc_prince_nibble_red16__54__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__54__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__54__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__54__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__54__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__54__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__55__vect = (0xe7bdU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__49__state_in 
                                                        >> 0x10U)));
    __Vfunc_prince_nibble_red16__55__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__55__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__55__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__55__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__55__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__55__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__56__vect = (0xde7bU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__49__state_in 
                                                        >> 0x10U)));
    __Vfunc_prince_nibble_red16__56__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__56__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__56__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__56__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__56__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__56__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__57__vect = (0xbde7U 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__49__state_in 
                                                        >> 0x10U)));
    __Vfunc_prince_nibble_red16__57__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__57__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__57__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__57__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__57__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__57__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__58__vect = (0x7bdeU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__49__state_in 
                                                        >> 0x20U)));
    __Vfunc_prince_nibble_red16__58__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__58__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__58__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__58__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__58__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__58__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__59__vect = (0xe7bdU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__49__state_in 
                                                        >> 0x20U)));
    __Vfunc_prince_nibble_red16__59__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__59__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__59__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__59__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__59__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__59__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__60__vect = (0xde7bU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__49__state_in 
                                                        >> 0x20U)));
    __Vfunc_prince_nibble_red16__60__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__60__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__60__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__60__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__60__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__60__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__61__vect = (0xbde7U 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__49__state_in 
                                                        >> 0x20U)));
    __Vfunc_prince_nibble_red16__61__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__61__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__61__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__61__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__61__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__61__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__62__vect = (0xe7bdU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__49__state_in 
                                                        >> 0x30U)));
    __Vfunc_prince_nibble_red16__62__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__62__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__62__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__62__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__62__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__62__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__63__vect = (0xde7bU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__49__state_in 
                                                        >> 0x30U)));
    __Vfunc_prince_nibble_red16__63__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__63__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__63__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__63__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__63__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__63__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__64__vect = (0xbde7U 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__49__state_in 
                                                        >> 0x30U)));
    __Vfunc_prince_nibble_red16__64__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__64__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__64__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__64__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__64__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__64__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__65__vect = (0x7bdeU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__49__state_in 
                                                        >> 0x30U)));
    __Vfunc_prince_nibble_red16__65__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__65__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__65__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__65__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__65__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__65__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__49__Vfuncout = vlSelfRef.__Vfunc_prince_mult_prime_64bit__49__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__49__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__66__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__66__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7025455518623451416ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__66__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__66__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__66__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__66__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__66__Vfuncout;
    vlSelfRef.__PVT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o 
        = (0x000000ffU & ((((((2U & ((IData)((0x21748fe3da09b65cULL 
                                              >> (0x0000003fU 
                                                  & VL_SHIFTL_III(6,6,32, 
                                                                  (0x0000000fU 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_446)), 2U)))) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (0x21748fe3da09b65cULL 
                                                           >> 
                                                           ((IData)(2U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,6,32, 
                                                                             (0x0000000fU 
                                                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_446)), 2U))))))) 
                             << 6U) | (((2U & ((IData)(
                                                       (0x21748fe3da09b65cULL 
                                                        >> 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (0x0000000fU 
                                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_446) 
                                                                             >> 4U)), 2U)))) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (0x21748fe3da09b65cULL 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,6,32, 
                                                                           (0x0000000fU 
                                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_446) 
                                                                               >> 4U)), 2U))))))) 
                                       << 4U)) | ((
                                                   ((2U 
                                                     & ((IData)(
                                                                (0x21748fe3da09b65cULL 
                                                                 >> 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x0000003fU 
                                                                   & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_446)), 2U))))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (0x21748fe3da09b65cULL 
                                                                  >> 
                                                                  ((IData)(3U) 
                                                                   + 
                                                                   (0x0000003fU 
                                                                    & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_446)), 2U))))))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (0x21748fe3da09b65cULL 
                                                                  >> 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   (0x0000003fU 
                                                                    & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_446) 
                                                                                >> 4U)), 2U))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (0x21748fe3da09b65cULL 
                                                                   >> 
                                                                   ((IData)(3U) 
                                                                    + 
                                                                    (0x0000003fU 
                                                                     & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_446) 
                                                                                >> 4U)), 2U))))))))) 
                          ^ (IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_nonce_q 
                                     >> 0x00000038U))));
    __Vfunc_mubi4_bool_to_mubi__1__val = ((IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i) 
                                          & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_tag_write_o));
    __Vfunc_mubi4_bool_to_mubi__1__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__1__val)
                                                ? 6U
                                                : 9U);
    vlSelfRef.__PVT__write_en_d = __Vfunc_mubi4_bool_to_mubi__1__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__0__val = ((IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i) 
                                          & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_tag_write_o)));
    __Vfunc_mubi4_bool_to_mubi__0__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__0__val)
                                                ? 6U
                                                : 9U);
    vlSelfRef.__PVT__read_en = __Vfunc_mubi4_bool_to_mubi__0__Vfuncout;
    __Vfunc_sbox4_64bit__142__state_in = (0x13198a2e03707344ULL 
                                          ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                             ^ (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[3U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[2U])))));
    vlSelf->__Vfunc_sbox4_64bit__142__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15787392234278068979ull);
    __Vfunc_sbox4_8bit__143__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__142__state_in));
    vlSelf->__Vfunc_sbox4_8bit__143__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10073798536625110473ull);
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__143__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__143__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__143__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__143__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__142__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__142__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__143__Vfuncout)));
    __Vfunc_sbox4_8bit__143__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__142__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__143__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10073798536625110473ull);
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__143__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__143__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__143__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__143__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__142__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__142__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__143__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__143__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__142__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__143__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10073798536625110473ull);
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__143__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__143__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__143__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__143__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__142__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__142__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__143__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__143__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__142__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__143__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10073798536625110473ull);
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__143__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__143__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__143__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__143__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__142__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__142__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__143__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__143__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__142__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__143__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10073798536625110473ull);
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__143__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__143__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__143__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__143__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__142__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__142__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__143__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__143__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__142__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__143__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10073798536625110473ull);
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__143__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__143__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__143__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__143__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__142__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__142__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__143__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__143__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__142__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__143__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10073798536625110473ull);
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__143__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__143__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__143__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__143__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__142__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__142__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__143__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__143__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__142__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__143__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10073798536625110473ull);
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__143__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__143__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__143__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__143__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__143__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__143__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__142__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__142__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__143__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__142__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__142__state_out;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__2 
        = __Vfunc_sbox4_64bit__142__Vfuncout;
    __Vfunc_mubi4_test_true_loose__31__val = vlSelfRef.__PVT__write_en_d;
    __Vfunc_mubi4_test_true_loose__31__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__31__val));
    vlSelfRef.__PVT__write_en_b = __Vfunc_mubi4_test_true_loose__31__Vfuncout;
    __Vfunc_mubi4_test_true_loose__30__val = vlSelfRef.__PVT__read_en;
    __Vfunc_mubi4_test_true_loose__30__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__30__val));
    vlSelfRef.__PVT__read_en_b = __Vfunc_mubi4_test_true_loose__30__Vfuncout;
    vlSelfRef.__PVT__addr_mux = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_loose__22__val 
                    = vlSelfRef.__PVT__read_en;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__22__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__22__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__22__Vfuncout))
                                  ? (IData)(vlSelfRef.__PVT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o)
                                  : (IData)(vlSelfRef.__PVT__waddr_scr_q));
    __Vfunc_mubi4_and_hi__18__b = vlSelfRef.__PVT__read_en;
    __Vfunc_mubi4_and_hi__18__a = vlSelfRef.__PVT__write_en_q;
    __Vfunc_mubi4_and__19__b = __Vfunc_mubi4_and_hi__18__b;
    __Vfunc_mubi4_and__19__a = __Vfunc_mubi4_and_hi__18__a;
    vlSelf->__Vfunc_mubi4_and__19__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6444611244061159716ull);
    __Vfunc_mubi4_and__19__a_in = __Vfunc_mubi4_and__19__a;
    __Vfunc_mubi4_and__19__b_in = __Vfunc_mubi4_and__19__b;
    vlSelfRef.__Vfunc_mubi4_and__19__out = ((0x0cU 
                                             & (IData)(vlSelfRef.__Vfunc_mubi4_and__19__out)) 
                                            | ((2U 
                                                & ((IData)(__Vfunc_mubi4_and__19__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__19__b_in))) 
                                               | (1U 
                                                  & ((IData)(__Vfunc_mubi4_and__19__a_in) 
                                                     | (IData)(__Vfunc_mubi4_and__19__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__19__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__19__out)) 
                                            | (((2U 
                                                 & (((IData)(__Vfunc_mubi4_and__19__a_in) 
                                                     | (IData)(__Vfunc_mubi4_and__19__b_in)) 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (((IData)(__Vfunc_mubi4_and__19__a_in) 
                                                       & (IData)(__Vfunc_mubi4_and__19__b_in)) 
                                                      >> 2U))) 
                                               << 2U));
    __Vfunc_mubi4_and__19__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__19__out;
    __Vfunc_mubi4_and_hi__18__Vfuncout = __Vfunc_mubi4_and__19__Vfuncout;
    __Vfunc_mubi4_test_true_loose__17__val = __Vfunc_mubi4_and_hi__18__Vfuncout;
    __Vfunc_mubi4_test_true_loose__17__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__17__val));
    vlSelfRef.__PVT__rw_collision = __Vfunc_mubi4_test_true_loose__17__Vfuncout;
    __Vfunc_mubi4_and_hi__2__b = (((IData)(vlSelfRef.__PVT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o) 
                                   == (IData)(vlSelfRef.__PVT__waddr_scr_q))
                                   ? 6U : 9U);
    __Vfunc_mubi4_and_hi__3__b = vlSelfRef.__PVT__read_en;
    __Vfunc_mubi4_or_hi__4__b = vlSelfRef.__PVT__write_pending_q;
    __Vfunc_mubi4_or_hi__4__a = vlSelfRef.__PVT__write_en_q;
    __Vfunc_mubi4_or__5__b = __Vfunc_mubi4_or_hi__4__b;
    __Vfunc_mubi4_or__5__a = __Vfunc_mubi4_or_hi__4__a;
    vlSelf->__Vfunc_mubi4_or__5__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17633108909802805593ull);
    __Vfunc_mubi4_or__5__a_in = __Vfunc_mubi4_or__5__a;
    __Vfunc_mubi4_or__5__b_in = __Vfunc_mubi4_or__5__b;
    vlSelfRef.__Vfunc_mubi4_or__5__out = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__5__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_or__5__a_in) 
                                               | (IData)(__Vfunc_mubi4_or__5__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_or__5__a_in) 
                                                   & (IData)(__Vfunc_mubi4_or__5__b_in)))));
    vlSelfRef.__Vfunc_mubi4_or__5__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__5__out)) 
                                          | (((2U & 
                                               (((IData)(__Vfunc_mubi4_or__5__a_in) 
                                                 & (IData)(__Vfunc_mubi4_or__5__b_in)) 
                                                >> 2U)) 
                                              | (1U 
                                                 & (((IData)(__Vfunc_mubi4_or__5__a_in) 
                                                     | (IData)(__Vfunc_mubi4_or__5__b_in)) 
                                                    >> 2U))) 
                                             << 2U));
    __Vfunc_mubi4_or__5__Vfuncout = vlSelfRef.__Vfunc_mubi4_or__5__out;
    __Vfunc_mubi4_or_hi__4__Vfuncout = __Vfunc_mubi4_or__5__Vfuncout;
    __Vfunc_mubi4_and_hi__3__a = __Vfunc_mubi4_or_hi__4__Vfuncout;
    __Vfunc_mubi4_and__6__b = __Vfunc_mubi4_and_hi__3__b;
    __Vfunc_mubi4_and__6__a = __Vfunc_mubi4_and_hi__3__a;
    vlSelf->__Vfunc_mubi4_and__6__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15134286001702857314ull);
    __Vfunc_mubi4_and__6__a_in = __Vfunc_mubi4_and__6__a;
    __Vfunc_mubi4_and__6__b_in = __Vfunc_mubi4_and__6__b;
    vlSelfRef.__Vfunc_mubi4_and__6__out = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__6__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__6__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__6__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__6__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__6__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__6__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__6__out)) 
                                           | (((2U 
                                                & (((IData)(__Vfunc_mubi4_and__6__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__6__b_in)) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (((IData)(__Vfunc_mubi4_and__6__a_in) 
                                                      & (IData)(__Vfunc_mubi4_and__6__b_in)) 
                                                     >> 2U))) 
                                              << 2U));
    __Vfunc_mubi4_and__6__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__6__out;
    __Vfunc_mubi4_and_hi__3__Vfuncout = __Vfunc_mubi4_and__6__Vfuncout;
    __Vfunc_mubi4_and_hi__2__a = __Vfunc_mubi4_and_hi__3__Vfuncout;
    __Vfunc_mubi4_and__7__b = __Vfunc_mubi4_and_hi__2__b;
    __Vfunc_mubi4_and__7__a = __Vfunc_mubi4_and_hi__2__a;
    vlSelf->__Vfunc_mubi4_and__7__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2687498546261607798ull);
    __Vfunc_mubi4_and__7__a_in = __Vfunc_mubi4_and__7__a;
    __Vfunc_mubi4_and__7__b_in = __Vfunc_mubi4_and__7__b;
    vlSelfRef.__Vfunc_mubi4_and__7__out = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__7__out)) 
                                           | ((2U & 
                                               ((IData)(__Vfunc_mubi4_and__7__a_in) 
                                                & (IData)(__Vfunc_mubi4_and__7__b_in))) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_mubi4_and__7__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__7__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__7__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__7__out)) 
                                           | (((2U 
                                                & (((IData)(__Vfunc_mubi4_and__7__a_in) 
                                                    | (IData)(__Vfunc_mubi4_and__7__b_in)) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (((IData)(__Vfunc_mubi4_and__7__a_in) 
                                                      & (IData)(__Vfunc_mubi4_and__7__b_in)) 
                                                     >> 2U))) 
                                              << 2U));
    __Vfunc_mubi4_and__7__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__7__out;
    __Vfunc_mubi4_and_hi__2__Vfuncout = __Vfunc_mubi4_and__7__Vfuncout;
    vlSelfRef.__PVT__addr_collision_d = __Vfunc_mubi4_and_hi__2__Vfuncout;
    vlSelfRef.__PVT__macro_write = ((([&]() {
                    vlSelfRef.__Vfunc_mubi4_or_hi__14__b 
                        = vlSelfRef.__PVT__write_pending_q;
                    vlSelfRef.__Vfunc_mubi4_or_hi__14__a 
                        = vlSelfRef.__PVT__write_en_q;
                    vlSelfRef.__Vfunc_mubi4_or__15__b 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__14__b;
                    vlSelfRef.__Vfunc_mubi4_or__15__a 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__14__a;
                    vlSelf->__Vfunc_mubi4_or__15__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13350577630819461753ull);
                    vlSelfRef.__Vfunc_mubi4_or__15__a_in 
                        = vlSelfRef.__Vfunc_mubi4_or__15__a;
                    vlSelfRef.__Vfunc_mubi4_or__15__b_in 
                        = vlSelfRef.__Vfunc_mubi4_or__15__b;
                    vlSelfRef.__Vfunc_mubi4_or__15__out 
                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__15__out)) 
                           | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__15__a_in) 
                                     | (IData)(vlSelfRef.__Vfunc_mubi4_or__15__b_in))) 
                              | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__15__a_in) 
                                       & (IData)(vlSelfRef.__Vfunc_mubi4_or__15__b_in)))));
                    vlSelfRef.__Vfunc_mubi4_or__15__out 
                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__15__out)) 
                           | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__15__a_in) 
                                       & (IData)(vlSelfRef.__Vfunc_mubi4_or__15__b_in)) 
                                      >> 2U)) | (1U 
                                                 & (((IData)(vlSelfRef.__Vfunc_mubi4_or__15__a_in) 
                                                     | (IData)(vlSelfRef.__Vfunc_mubi4_or__15__b_in)) 
                                                    >> 2U))) 
                              << 2U));
                    vlSelfRef.__Vfunc_mubi4_or__15__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_or__15__out;
                    vlSelfRef.__Vfunc_mubi4_or_hi__14__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_or__15__Vfuncout;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__13__val 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__14__Vfuncout;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__13__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__13__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__13__Vfuncout)) 
                                     & (~ ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__16__val 
                            = vlSelfRef.__PVT__read_en;
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__16__Vfuncout 
                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__16__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__16__Vfuncout)))) 
                                    & (~ (IData)(vlSelfRef.__PVT__intg_error_w_q)));
    vlSelfRef.__PVT__macro_req = ((~ (IData)(vlSelfRef.__PVT__intg_error_w_q)) 
                                  & ([&]() {
                vlSelfRef.__Vfunc_mubi4_or_hi__9__b 
                    = vlSelfRef.__PVT__write_pending_q;
                vlSelfRef.__Vfunc_mubi4_or_hi__10__b 
                    = vlSelfRef.__PVT__write_en_q;
                vlSelfRef.__Vfunc_mubi4_or_hi__10__a 
                    = vlSelfRef.__PVT__read_en;
                vlSelfRef.__Vfunc_mubi4_or__11__b = vlSelfRef.__Vfunc_mubi4_or_hi__10__b;
                vlSelfRef.__Vfunc_mubi4_or__11__a = vlSelfRef.__Vfunc_mubi4_or_hi__10__a;
                vlSelf->__Vfunc_mubi4_or__11__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8874432121593641388ull);
                vlSelfRef.__Vfunc_mubi4_or__11__a_in 
                    = vlSelfRef.__Vfunc_mubi4_or__11__a;
                vlSelfRef.__Vfunc_mubi4_or__11__b_in 
                    = vlSelfRef.__Vfunc_mubi4_or__11__b;
                vlSelfRef.__Vfunc_mubi4_or__11__out 
                    = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__11__out)) 
                       | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__11__a_in) 
                                 | (IData)(vlSelfRef.__Vfunc_mubi4_or__11__b_in))) 
                          | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__11__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__11__b_in)))));
                vlSelfRef.__Vfunc_mubi4_or__11__out 
                    = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__11__out)) 
                       | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__11__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__11__b_in)) 
                                  >> 2U)) | (1U & (
                                                   ((IData)(vlSelfRef.__Vfunc_mubi4_or__11__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_or__11__b_in)) 
                                                   >> 2U))) 
                          << 2U));
                vlSelfRef.__Vfunc_mubi4_or__11__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__11__out;
                vlSelfRef.__Vfunc_mubi4_or_hi__10__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__11__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_or_hi__9__a 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__10__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_or__12__b = vlSelfRef.__Vfunc_mubi4_or_hi__9__b;
                vlSelfRef.__Vfunc_mubi4_or__12__a = vlSelfRef.__Vfunc_mubi4_or_hi__9__a;
                vlSelf->__Vfunc_mubi4_or__12__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9906660831606033521ull);
                vlSelfRef.__Vfunc_mubi4_or__12__a_in 
                    = vlSelfRef.__Vfunc_mubi4_or__12__a;
                vlSelfRef.__Vfunc_mubi4_or__12__b_in 
                    = vlSelfRef.__Vfunc_mubi4_or__12__b;
                vlSelfRef.__Vfunc_mubi4_or__12__out 
                    = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__12__out)) 
                       | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__12__a_in) 
                                 | (IData)(vlSelfRef.__Vfunc_mubi4_or__12__b_in))) 
                          | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__12__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__12__b_in)))));
                vlSelfRef.__Vfunc_mubi4_or__12__out 
                    = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__12__out)) 
                       | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__12__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__12__b_in)) 
                                  >> 2U)) | (1U & (
                                                   ((IData)(vlSelfRef.__Vfunc_mubi4_or__12__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_or__12__b_in)) 
                                                   >> 2U))) 
                          << 2U));
                vlSelfRef.__Vfunc_mubi4_or__12__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__12__out;
                vlSelfRef.__Vfunc_mubi4_or_hi__9__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__12__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__8__val 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__9__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__8__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__8__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__8__Vfuncout)));
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__2;
    __Vfunc_prince_mult_prime_64bit__67__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__67__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 912268833323024985ull);
    __Vfunc_prince_nibble_red16__68__vect = (0xe7bdU 
                                             & (IData)(__Vfunc_prince_mult_prime_64bit__67__state_in));
    __Vfunc_prince_nibble_red16__68__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__68__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__68__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__68__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__68__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__68__Vfuncout)));
    __Vfunc_prince_nibble_red16__69__vect = (0xde7bU 
                                             & (IData)(__Vfunc_prince_mult_prime_64bit__67__state_in));
    __Vfunc_prince_nibble_red16__69__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__69__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__69__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__69__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__69__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__69__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__70__vect = (0xbde7U 
                                             & (IData)(__Vfunc_prince_mult_prime_64bit__67__state_in));
    __Vfunc_prince_nibble_red16__70__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__70__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__70__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__70__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__70__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__70__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__71__vect = (0x7bdeU 
                                             & (IData)(__Vfunc_prince_mult_prime_64bit__67__state_in));
    __Vfunc_prince_nibble_red16__71__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__71__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__71__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__71__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__71__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__71__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__72__vect = (0x7bdeU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__67__state_in 
                                                        >> 0x10U)));
    __Vfunc_prince_nibble_red16__72__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__72__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__72__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__72__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__72__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__72__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__73__vect = (0xe7bdU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__67__state_in 
                                                        >> 0x10U)));
    __Vfunc_prince_nibble_red16__73__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__73__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__73__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__73__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__73__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__73__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__74__vect = (0xde7bU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__67__state_in 
                                                        >> 0x10U)));
    __Vfunc_prince_nibble_red16__74__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__74__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__74__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__74__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__74__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__74__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__75__vect = (0xbde7U 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__67__state_in 
                                                        >> 0x10U)));
    __Vfunc_prince_nibble_red16__75__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__75__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__75__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__75__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__75__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__75__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__76__vect = (0x7bdeU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__67__state_in 
                                                        >> 0x20U)));
    __Vfunc_prince_nibble_red16__76__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__76__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__76__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__76__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__76__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__76__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__77__vect = (0xe7bdU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__67__state_in 
                                                        >> 0x20U)));
    __Vfunc_prince_nibble_red16__77__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__77__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__77__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__77__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__77__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__77__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__78__vect = (0xde7bU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__67__state_in 
                                                        >> 0x20U)));
    __Vfunc_prince_nibble_red16__78__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__78__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__78__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__78__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__78__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__78__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__79__vect = (0xbde7U 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__67__state_in 
                                                        >> 0x20U)));
    __Vfunc_prince_nibble_red16__79__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__79__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__79__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__79__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__79__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__79__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__80__vect = (0xe7bdU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__67__state_in 
                                                        >> 0x30U)));
    __Vfunc_prince_nibble_red16__80__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__80__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__80__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__80__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__80__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__80__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__81__vect = (0xde7bU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__67__state_in 
                                                        >> 0x30U)));
    __Vfunc_prince_nibble_red16__81__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__81__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__81__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__81__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__81__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__81__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__82__vect = (0xbde7U 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__67__state_in 
                                                        >> 0x30U)));
    __Vfunc_prince_nibble_red16__82__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__82__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__82__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__82__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__82__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__82__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__83__vect = (0x7bdeU 
                                             & (IData)(
                                                       (__Vfunc_prince_mult_prime_64bit__67__state_in 
                                                        >> 0x30U)));
    __Vfunc_prince_nibble_red16__83__Vfuncout = (0x0000000fU 
                                                 & ((((IData)(__Vfunc_prince_nibble_red16__83__vect) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__83__vect) 
                                                       >> 4U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__83__vect) 
                                                      >> 8U)) 
                                                    ^ 
                                                    ((IData)(__Vfunc_prince_nibble_red16__83__vect) 
                                                     >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__83__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__67__Vfuncout = vlSelfRef.__Vfunc_prince_mult_prime_64bit__67__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__67__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__84__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__84__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6430578171276866696ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__84__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__84__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__84__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__84__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__84__Vfuncout;
    vlSelfRef.__PVT__u_write_pending_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((IData)(vlSelfRef.__PVT__macro_write) ? 9U
            : ((IData)(vlSelfRef.__PVT__rw_collision)
                ? 6U : (IData)(vlSelfRef.__PVT__write_pending_q)));
    vlSelfRef.__PVT__write_pending_o = ((IData)(vlSelfRef.__PVT__macro_write) 
                                        | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_loose__20__val 
                    = vlSelfRef.__PVT__write_en_d;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__20__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__20__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__20__Vfuncout)));
    __Vfunc_mubi4_bool_to_mubi__41__val = vlSelfRef.__PVT__macro_write;
    __Vfunc_mubi4_bool_to_mubi__41__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__41__val)
                                                 ? 6U
                                                 : 9U);
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__41__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__40__val = vlSelfRef.__PVT__macro_req;
    __Vfunc_mubi4_bool_to_mubi__40__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__40__val)
                                                 ? 6U
                                                 : 9U);
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__req_d 
        = __Vfunc_mubi4_bool_to_mubi__40__Vfuncout;
    __Vfunc_sbox4_64bit__144__state_in = (0xa4093822299f31d0ULL 
                                          ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                             ^ (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[0U])))));
    vlSelf->__Vfunc_sbox4_64bit__144__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12884579020363852773ull);
    __Vfunc_sbox4_8bit__145__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__144__state_in));
    vlSelf->__Vfunc_sbox4_8bit__145__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11921267177162336562ull);
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__145__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__145__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__145__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__145__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__144__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__144__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__145__Vfuncout)));
    __Vfunc_sbox4_8bit__145__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__144__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__145__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11921267177162336562ull);
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__145__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__145__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__145__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__145__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__144__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__144__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__145__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__145__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__144__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__145__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11921267177162336562ull);
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__145__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__145__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__145__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__145__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__144__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__144__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__145__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__145__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__144__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__145__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11921267177162336562ull);
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__145__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__145__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__145__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__145__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__144__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__144__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__145__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__145__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__144__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__145__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11921267177162336562ull);
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__145__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__145__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__145__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__145__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__144__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__144__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__145__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__145__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__144__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__145__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11921267177162336562ull);
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__145__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__145__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__145__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__145__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__144__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__144__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__145__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__145__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__144__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__145__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11921267177162336562ull);
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__145__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__145__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__145__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__145__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__144__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__144__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__145__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__145__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__144__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__145__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11921267177162336562ull);
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__145__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__145__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__145__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__145__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__145__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__145__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__144__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__144__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__145__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__144__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__144__state_out;
    vlSelfRef.gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__2 
        = __Vfunc_sbox4_64bit__144__Vfuncout;
    __Vfunc_mubi4_test_true_loose__33__val = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__33__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__33__val));
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__33__Vfuncout;
    __Vfunc_mubi4_test_true_loose__32__val = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_test_true_loose__32__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__32__val));
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__req_q_b 
        = __Vfunc_mubi4_test_true_loose__32__Vfuncout;
    __Vfunc_mubi4_and_hi__38__b = (0x0000000fU & (~ (IData)(vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__write_d)));
    __Vfunc_mubi4_and_hi__38__a = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_and__39__b = __Vfunc_mubi4_and_hi__38__b;
    __Vfunc_mubi4_and__39__a = __Vfunc_mubi4_and_hi__38__a;
    vlSelf->__Vfunc_mubi4_and__39__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4991511454419142817ull);
    __Vfunc_mubi4_and__39__a_in = __Vfunc_mubi4_and__39__a;
    __Vfunc_mubi4_and__39__b_in = __Vfunc_mubi4_and__39__b;
    vlSelfRef.__Vfunc_mubi4_and__39__out = ((0x0cU 
                                             & (IData)(vlSelfRef.__Vfunc_mubi4_and__39__out)) 
                                            | ((2U 
                                                & ((IData)(__Vfunc_mubi4_and__39__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__39__b_in))) 
                                               | (1U 
                                                  & ((IData)(__Vfunc_mubi4_and__39__a_in) 
                                                     | (IData)(__Vfunc_mubi4_and__39__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__39__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__39__out)) 
                                            | (((2U 
                                                 & (((IData)(__Vfunc_mubi4_and__39__a_in) 
                                                     | (IData)(__Vfunc_mubi4_and__39__b_in)) 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (((IData)(__Vfunc_mubi4_and__39__a_in) 
                                                       & (IData)(__Vfunc_mubi4_and__39__b_in)) 
                                                      >> 2U))) 
                                               << 2U));
    __Vfunc_mubi4_and__39__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__39__out;
    __Vfunc_mubi4_and_hi__38__Vfuncout = __Vfunc_mubi4_and__39__Vfuncout;
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_d 
        = __Vfunc_mubi4_and_hi__38__Vfuncout;
    vlSelfRef.__PVT__ram_alert = (((([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__43__val 
                            = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__req_d;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__43__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__43__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__43__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__43__Vfuncout)) 
                                    | ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__44__val 
                            = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__write_d;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__44__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__44__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__44__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__44__Vfuncout))) 
                                   | ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_invalid__45__val 
                        = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                    vlSelfRef.__Vfunc_mubi4_test_invalid__45__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__45__val)) 
                                    | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__45__val)))));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__45__Vfuncout))) 
                                  | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__46__val 
                    = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                vlSelfRef.__Vfunc_mubi4_test_invalid__46__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__46__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__46__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__46__Vfuncout)));
    vlSelfRef.alert_o = ((((([&]() {
                            vlSelfRef.__Vfunc_mubi4_test_invalid__26__val 
                                = vlSelfRef.__PVT__write_en_q;
                            vlSelfRef.__Vfunc_mubi4_test_invalid__26__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__26__val)) 
                                            | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__26__val)))));
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__26__Vfuncout)) 
                            | ([&]() {
                            vlSelfRef.__Vfunc_mubi4_test_invalid__27__val 
                                = vlSelfRef.__PVT__addr_collision_q;
                            vlSelfRef.__Vfunc_mubi4_test_invalid__27__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__27__val)) 
                                            | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__27__val)))));
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__27__Vfuncout))) 
                           | ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__28__val 
                            = vlSelfRef.__PVT__write_pending_q;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__28__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__28__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__28__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__28__Vfuncout))) 
                          | ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_invalid__29__val 
                        = vlSelfRef.__PVT__rvalid_q;
                    vlSelfRef.__Vfunc_mubi4_test_invalid__29__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__29__val)) 
                                    | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__29__val)))));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__29__Vfuncout))) 
                         | (IData)(vlSelfRef.__PVT__ram_alert));
}

void Vsim_prim_ram_1p_scr__pi151___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank__0(Vsim_prim_ram_1p_scr__pi151* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*77:0*/ __VdlyVal__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    VL_ZERO_W(78, __VdlyVal__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0);
    CData/*7:0*/ __VdlyDim0__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyDim0__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlySet__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    // Body
    __VdlySet__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    if (vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__req_q_b) {
        if (vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__write_q_b) {
            vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 1U;
            if ((0xffffffffU == ((vlSelfRef.__PVT__wmask_q[0U] 
                                  & vlSelfRef.__PVT__wmask_q[1U]) 
                                 & (0xffffc000U | vlSelfRef.__PVT__wmask_q[2U])))) {
                vlSelfRef.u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_hd0174203__0[0U] 
                    = vlSelfRef.__PVT__wdata_scr[0U];
                vlSelfRef.u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_hd0174203__0[1U] 
                    = vlSelfRef.__PVT__wdata_scr[1U];
                vlSelfRef.u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_hd0174203__0[2U] 
                    = vlSelfRef.__PVT__wdata_scr[2U];
                __VdlyVal__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U] 
                    = vlSelfRef.u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_hd0174203__0[0U];
                __VdlyVal__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U] 
                    = vlSelfRef.u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_hd0174203__0[1U];
                __VdlyVal__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U] 
                    = vlSelfRef.u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_hd0174203__0[2U];
                __VdlyDim0__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = vlSelfRef.__PVT__addr_mux;
                __VdlySet__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__write_q_b)))) {
            vlSelfRef.u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[0U] 
                = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__PVT__addr_mux][0U];
            vlSelfRef.u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[1U] 
                = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__PVT__addr_mux][1U];
            vlSelfRef.u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[2U] 
                = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__PVT__addr_mux][2U];
        }
    }
    if (__VdlySet__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][0U] 
            = __VdlyVal__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U];
        vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][1U] 
            = __VdlyVal__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U];
        vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][2U] 
            = __VdlyVal__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U];
    }
}

void Vsim_prim_ram_1p_scr__pi151___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank__1(Vsim_prim_ram_1p_scr__pi151* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__2;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hc734f68f__2 = 0;
    QData/*63:0*/ gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__2;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h09fdf4ef__2 = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__21__Vfuncout;
    __Vfunc_mubi4_test_true_loose__21__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__21__val;
    __Vfunc_mubi4_test_true_loose__21__val = 0;
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
            vlSelfRef.__PVT__waddr_scr_q = vlSelfRef.__PVT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o;
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
    __Vfunc_mubi4_test_true_loose__21__val = vlSelfRef.__PVT__addr_collision_q;
    __Vfunc_mubi4_test_true_loose__21__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__21__val));
    vlSelfRef.__PVT__wr_collision_o = __Vfunc_mubi4_test_true_loose__21__Vfuncout;
    __Vfunc_mubi4_test_true_loose__42__val = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
    __Vfunc_mubi4_test_true_loose__42__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__42__val));
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_o 
        = __Vfunc_mubi4_test_true_loose__42__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__85__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
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
    vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i[0U] 
        = (vlSelfRef.__PVT__wdata_q[0U] ^ (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o));
    vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i[1U] 
        = (vlSelfRef.__PVT__wdata_q[1U] ^ (IData)((vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o 
                                                   >> 0x00000020U)));
    vlSelfRef.__PVT__gen_diffuse_data__BRA__0__KET____DOT__u_prim_subst_perm_enc__DOT__data_i[2U] 
        = (0x00003fffU & (vlSelfRef.__PVT__wdata_q[2U] 
                          ^ (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o)));
    __Vtemp_5 = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_loose__23__val 
                = vlSelfRef.__PVT__write_pending_q;
            vlSelfRef.__Vfunc_mubi4_test_true_loose__23__Vfuncout 
                = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__23__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__23__Vfuncout));
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

void Vsim_prim_ram_1p_scr__pi151___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank__0(Vsim_prim_ram_1p_scr__pi151* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0;
    u_prim_ram_1p_adv__DOT____Vlvbound_h82fbffda__0 = 0;
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
    // Body
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram[0U] = 0U;
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram[1U] = 0U;
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram[2U] = 0U;
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

void Vsim_prim_ram_1p_scr__pi151____Vdpiexp_simutil_get_scramble_key_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank(Vsim__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151____Vdpiexp_simutil_get_scramble_key_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__simutil_get_scramble_key__Vstatic__valid 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_q)
            ? 1U : 0U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__simutil_get_scramble_key__Vstatic__valid)) {
        val[0U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[0U];
        val[1U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[1U];
        val[2U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[2U];
        val[3U] = vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[3U];
    }
    simutil_get_scramble_key__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__simutil_get_scramble_key__Vstatic__valid;
}

void Vsim_prim_ram_1p_scr__pi151____Vdpiexp_simutil_get_scramble_nonce_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank(Vsim__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151____Vdpiexp_simutil_get_scramble_nonce_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__simutil_get_scramble_nonce__Vstatic__valid 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_q)
            ? 1U : 0U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__simutil_get_scramble_nonce__Vstatic__valid)) {
        nonce[0U] = Vsim__ConstPool__CONST_hab76c978_0[0U];
        nonce[1U] = Vsim__ConstPool__CONST_hab76c978_0[1U];
        nonce[2U] = Vsim__ConstPool__CONST_hab76c978_0[2U];
        nonce[3U] = Vsim__ConstPool__CONST_hab76c978_0[3U];
        nonce[4U] = Vsim__ConstPool__CONST_hab76c978_0[4U];
        nonce[5U] = Vsim__ConstPool__CONST_hab76c978_0[5U];
        nonce[6U] = Vsim__ConstPool__CONST_hab76c978_0[6U];
        nonce[7U] = Vsim__ConstPool__CONST_hab76c978_0[7U];
        nonce[8U] = Vsim__ConstPool__CONST_hab76c978_0[8U];
        nonce[9U] = Vsim__ConstPool__CONST_hab76c978_0[9U];
        nonce[0U] = (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_nonce_q);
        nonce[1U] = (IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_nonce_q 
                             >> 0x00000020U));
    }
    simutil_get_scramble_nonce__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__simutil_get_scramble_nonce__Vstatic__valid;
}

void Vsim_prim_ram_1p_scr__pi151____Vdpiexp_u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank(Vsim__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151____Vdpiexp_u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 78, 256, 0, file,  &(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vsim_prim_ram_1p_scr__pi151____Vdpiexp_u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151____Vdpiexp_u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000100U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x000000ffU 
                                                                                & index)][0U] 
            = val[0U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x000000ffU 
                                                                                & index)][1U] 
            = val[1U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x000000ffU 
                                                                                & index)][2U] 
            = (0x00003fffU & val[2U]);
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
}

void Vsim_prim_ram_1p_scr__pi151____Vdpiexp_u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151____Vdpiexp_u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000100U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vsim__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vsim__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vsim__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vsim__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vsim__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vsim__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vsim__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vsim__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vsim__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vsim__ConstPool__CONST_hc1613866_0[9U];
        val[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x000000ffU & index)][0U];
        val[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x000000ffU & index)][1U];
        val[2U] = ((0xffffc000U & val[2U]) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                   [(0x000000ffU & index)][2U]);
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
}

void Vsim_prim_ram_1p_scr__pi151___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank(Vsim_prim_ram_1p_scr__pi151* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)VL_VALUEPLUSARGS_INI(1, "show_mem_paths=%0b"s, 
                               vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths);
    if (VL_UNLIKELY((vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths))) {
        VL_WRITEF_NX("%Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.u_core.gen_rams.gen_rams_inner[1].gen_scramble_rams.data_bank.u_prim_ram_1p_adv.gen_ram_inst[0].u_mem.gen_generic.u_impl_generic.unnamedblk2\n",0,
                     vlSymsp->name());
        Verilated::runFlushCallbacks();
    }
}

void Vsim_prim_ram_1p_scr__pi151___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank__0(Vsim_prim_ram_1p_scr__pi151* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi151___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__data_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__2;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__2 = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__148__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__148__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__148__val;
    __Vfunc_mubi4_bool_to_mubi__148__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__149__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__149__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__149__val;
    __Vfunc_mubi4_bool_to_mubi__149__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__150__Vfuncout;
    __Vfunc_mubi4_and_hi__150__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__150__a;
    __Vfunc_mubi4_and_hi__150__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__150__b;
    __Vfunc_mubi4_and_hi__150__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__151__Vfuncout;
    __Vfunc_mubi4_and_hi__151__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__151__a;
    __Vfunc_mubi4_and_hi__151__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__151__b;
    __Vfunc_mubi4_and_hi__151__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__152__Vfuncout;
    __Vfunc_mubi4_or_hi__152__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__152__a;
    __Vfunc_mubi4_or_hi__152__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__152__b;
    __Vfunc_mubi4_or_hi__152__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__153__Vfuncout;
    __Vfunc_mubi4_or__153__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__153__a;
    __Vfunc_mubi4_or__153__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__153__b;
    __Vfunc_mubi4_or__153__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__153__a_in;
    __Vfunc_mubi4_or__153__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__153__b_in;
    __Vfunc_mubi4_or__153__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__154__Vfuncout;
    __Vfunc_mubi4_and__154__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__154__a;
    __Vfunc_mubi4_and__154__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__154__b;
    __Vfunc_mubi4_and__154__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__154__a_in;
    __Vfunc_mubi4_and__154__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__154__b_in;
    __Vfunc_mubi4_and__154__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__155__Vfuncout;
    __Vfunc_mubi4_and__155__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__155__a;
    __Vfunc_mubi4_and__155__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__155__b;
    __Vfunc_mubi4_and__155__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__155__a_in;
    __Vfunc_mubi4_and__155__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__155__b_in;
    __Vfunc_mubi4_and__155__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__165__Vfuncout;
    __Vfunc_mubi4_test_true_loose__165__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__165__val;
    __Vfunc_mubi4_test_true_loose__165__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__166__Vfuncout;
    __Vfunc_mubi4_and_hi__166__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__166__a;
    __Vfunc_mubi4_and_hi__166__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__166__b;
    __Vfunc_mubi4_and_hi__166__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__167__Vfuncout;
    __Vfunc_mubi4_and__167__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__167__a;
    __Vfunc_mubi4_and__167__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__167__b;
    __Vfunc_mubi4_and__167__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__167__a_in;
    __Vfunc_mubi4_and__167__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__167__b_in;
    __Vfunc_mubi4_and__167__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__178__Vfuncout;
    __Vfunc_mubi4_test_true_loose__178__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__178__val;
    __Vfunc_mubi4_test_true_loose__178__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__179__Vfuncout;
    __Vfunc_mubi4_test_true_loose__179__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__179__val;
    __Vfunc_mubi4_test_true_loose__179__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__180__Vfuncout;
    __Vfunc_mubi4_test_true_loose__180__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__180__val;
    __Vfunc_mubi4_test_true_loose__180__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__181__Vfuncout;
    __Vfunc_mubi4_test_true_loose__181__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__181__val;
    __Vfunc_mubi4_test_true_loose__181__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__186__Vfuncout;
    __Vfunc_mubi4_and_hi__186__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__186__a;
    __Vfunc_mubi4_and_hi__186__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__186__b;
    __Vfunc_mubi4_and_hi__186__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__187__Vfuncout;
    __Vfunc_mubi4_and__187__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__187__a;
    __Vfunc_mubi4_and__187__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__187__b;
    __Vfunc_mubi4_and__187__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__187__a_in;
    __Vfunc_mubi4_and__187__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__187__b_in;
    __Vfunc_mubi4_and__187__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__188__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__188__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__188__val;
    __Vfunc_mubi4_bool_to_mubi__188__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__189__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__189__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__189__val;
    __Vfunc_mubi4_bool_to_mubi__189__val = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__195__Vfuncout;
    __Vfunc_sbox4_64bit__195__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__195__state_in;
    __Vfunc_sbox4_64bit__195__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__196__Vfuncout;
    __Vfunc_sbox4_8bit__196__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__196__state_in;
    __Vfunc_sbox4_8bit__196__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__197__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__197__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__197__state_in;
    __Vfunc_prince_mult_prime_64bit__197__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__198__Vfuncout;
    __Vfunc_prince_nibble_red16__198__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__198__vect;
    __Vfunc_prince_nibble_red16__198__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__199__Vfuncout;
    __Vfunc_prince_nibble_red16__199__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__199__vect;
    __Vfunc_prince_nibble_red16__199__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__200__Vfuncout;
    __Vfunc_prince_nibble_red16__200__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__200__vect;
    __Vfunc_prince_nibble_red16__200__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__201__Vfuncout;
    __Vfunc_prince_nibble_red16__201__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__201__vect;
    __Vfunc_prince_nibble_red16__201__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__202__Vfuncout;
    __Vfunc_prince_nibble_red16__202__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__202__vect;
    __Vfunc_prince_nibble_red16__202__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__203__Vfuncout;
    __Vfunc_prince_nibble_red16__203__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__203__vect;
    __Vfunc_prince_nibble_red16__203__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__204__Vfuncout;
    __Vfunc_prince_nibble_red16__204__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__204__vect;
    __Vfunc_prince_nibble_red16__204__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__205__Vfuncout;
    __Vfunc_prince_nibble_red16__205__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__205__vect;
    __Vfunc_prince_nibble_red16__205__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__206__Vfuncout;
    __Vfunc_prince_nibble_red16__206__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__206__vect;
    __Vfunc_prince_nibble_red16__206__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__207__Vfuncout;
    __Vfunc_prince_nibble_red16__207__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__207__vect;
    __Vfunc_prince_nibble_red16__207__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__208__Vfuncout;
    __Vfunc_prince_nibble_red16__208__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__208__vect;
    __Vfunc_prince_nibble_red16__208__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__209__Vfuncout;
    __Vfunc_prince_nibble_red16__209__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__209__vect;
    __Vfunc_prince_nibble_red16__209__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__210__Vfuncout;
    __Vfunc_prince_nibble_red16__210__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__210__vect;
    __Vfunc_prince_nibble_red16__210__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__211__Vfuncout;
    __Vfunc_prince_nibble_red16__211__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__211__vect;
    __Vfunc_prince_nibble_red16__211__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__212__Vfuncout;
    __Vfunc_prince_nibble_red16__212__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__212__vect;
    __Vfunc_prince_nibble_red16__212__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__213__Vfuncout;
    __Vfunc_prince_nibble_red16__213__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__213__vect;
    __Vfunc_prince_nibble_red16__213__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__214__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__214__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__214__state_in;
    __Vfunc_prince_shiftrows_64bit__214__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__215__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__215__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__215__state_in;
    __Vfunc_prince_mult_prime_64bit__215__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__216__Vfuncout;
    __Vfunc_prince_nibble_red16__216__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__216__vect;
    __Vfunc_prince_nibble_red16__216__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__217__Vfuncout;
    __Vfunc_prince_nibble_red16__217__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__217__vect;
    __Vfunc_prince_nibble_red16__217__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__218__Vfuncout;
    __Vfunc_prince_nibble_red16__218__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__218__vect;
    __Vfunc_prince_nibble_red16__218__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__219__Vfuncout;
    __Vfunc_prince_nibble_red16__219__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__219__vect;
    __Vfunc_prince_nibble_red16__219__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__220__Vfuncout;
    __Vfunc_prince_nibble_red16__220__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__220__vect;
    __Vfunc_prince_nibble_red16__220__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__221__Vfuncout;
    __Vfunc_prince_nibble_red16__221__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__221__vect;
    __Vfunc_prince_nibble_red16__221__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__222__Vfuncout;
    __Vfunc_prince_nibble_red16__222__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__222__vect;
    __Vfunc_prince_nibble_red16__222__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__223__Vfuncout;
    __Vfunc_prince_nibble_red16__223__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__223__vect;
    __Vfunc_prince_nibble_red16__223__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__224__Vfuncout;
    __Vfunc_prince_nibble_red16__224__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__224__vect;
    __Vfunc_prince_nibble_red16__224__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__225__Vfuncout;
    __Vfunc_prince_nibble_red16__225__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__225__vect;
    __Vfunc_prince_nibble_red16__225__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__226__Vfuncout;
    __Vfunc_prince_nibble_red16__226__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__226__vect;
    __Vfunc_prince_nibble_red16__226__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__227__Vfuncout;
    __Vfunc_prince_nibble_red16__227__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__227__vect;
    __Vfunc_prince_nibble_red16__227__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__228__Vfuncout;
    __Vfunc_prince_nibble_red16__228__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__228__vect;
    __Vfunc_prince_nibble_red16__228__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__229__Vfuncout;
    __Vfunc_prince_nibble_red16__229__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__229__vect;
    __Vfunc_prince_nibble_red16__229__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__230__Vfuncout;
    __Vfunc_prince_nibble_red16__230__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__230__vect;
    __Vfunc_prince_nibble_red16__230__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__231__Vfuncout;
    __Vfunc_prince_nibble_red16__231__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__231__vect;
    __Vfunc_prince_nibble_red16__231__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__232__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__232__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__232__state_in;
    __Vfunc_prince_shiftrows_64bit__232__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__290__Vfuncout;
    __Vfunc_sbox4_64bit__290__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__290__state_in;
    __Vfunc_sbox4_64bit__290__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__291__Vfuncout;
    __Vfunc_sbox4_8bit__291__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__291__state_in;
    __Vfunc_sbox4_8bit__291__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__292__Vfuncout;
    __Vfunc_sbox4_64bit__292__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__292__state_in;
    __Vfunc_sbox4_64bit__292__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__293__Vfuncout;
    __Vfunc_sbox4_8bit__293__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__293__state_in;
    __Vfunc_sbox4_8bit__293__state_in = 0;
    // Body
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_valid_q) 
           & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_req_o) 
              >> 1U));
    __Vfunc_sbox4_64bit__195__state_in = (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_i 
                                          ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
                                             ^ (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[0U])))));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_sbox4_64bit__195__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18017555614946268854ull);
    __Vfunc_sbox4_8bit__196__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__195__state_in));
    vlSelf->__Vfunc_sbox4_8bit__196__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5037398798108402370ull);
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__196__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__196__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__196__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__196__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__195__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__195__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__196__Vfuncout)));
    __Vfunc_sbox4_8bit__196__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__195__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__196__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5037398798108402370ull);
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__196__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__196__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__196__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__196__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__195__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__195__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__196__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__196__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__195__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__196__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5037398798108402370ull);
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__196__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__196__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__196__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__196__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__195__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__195__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__196__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__196__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__195__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__196__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5037398798108402370ull);
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__196__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__196__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__196__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__196__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__195__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__195__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__196__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__196__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__195__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__196__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5037398798108402370ull);
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__196__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__196__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__196__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__196__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__195__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__195__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__196__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__196__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__195__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__196__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5037398798108402370ull);
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__196__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__196__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__196__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__196__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__195__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__195__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__196__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__196__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__195__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__196__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5037398798108402370ull);
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__196__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__196__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__196__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__196__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__195__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__195__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__196__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__196__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__195__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__196__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5037398798108402370ull);
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__196__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__196__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__196__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__196__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__196__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__196__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__195__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__195__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__196__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__195__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__195__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__195__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__197__state_in 
        = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__197__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7517435610243671728ull);
    __Vfunc_prince_nibble_red16__198__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__197__state_in));
    __Vfunc_prince_nibble_red16__198__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__198__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__198__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__198__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__198__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__198__Vfuncout)));
    __Vfunc_prince_nibble_red16__199__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__197__state_in));
    __Vfunc_prince_nibble_red16__199__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__199__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__199__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__199__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__199__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__199__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__200__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__197__state_in));
    __Vfunc_prince_nibble_red16__200__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__200__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__200__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__200__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__200__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__200__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__201__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__197__state_in));
    __Vfunc_prince_nibble_red16__201__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__201__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__201__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__201__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__201__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__201__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__202__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__197__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__202__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__202__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__202__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__202__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__202__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__202__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__203__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__197__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__203__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__203__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__203__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__203__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__203__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__203__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__204__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__197__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__204__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__204__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__204__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__204__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__204__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__204__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__205__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__197__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__205__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__205__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__205__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__205__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__205__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__205__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__206__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__197__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__206__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__206__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__206__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__206__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__206__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__206__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__207__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__197__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__207__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__207__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__207__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__207__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__207__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__207__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__208__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__197__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__208__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__208__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__208__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__208__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__208__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__208__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__209__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__197__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__209__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__209__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__209__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__209__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__209__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__209__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__210__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__197__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__210__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__210__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__210__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__210__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__210__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__210__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__211__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__197__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__211__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__211__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__211__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__211__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__211__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__211__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__212__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__197__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__212__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__212__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__212__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__212__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__212__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__212__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__213__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__197__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__213__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__213__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__213__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__213__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__213__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__213__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__197__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__197__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__197__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__214__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__214__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15588802703304089901ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__214__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__214__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__214__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__214__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__214__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__149__val = ((IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i) 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_tag_write_o));
    __Vfunc_mubi4_bool_to_mubi__149__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__149__val)
                                                  ? 6U
                                                  : 9U);
    vlSelfRef.__PVT__write_en_d = __Vfunc_mubi4_bool_to_mubi__149__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__148__val = ((IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i) 
                                            & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_tag_write_o)));
    __Vfunc_mubi4_bool_to_mubi__148__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__148__val)
                                                  ? 6U
                                                  : 9U);
    vlSelfRef.__PVT__read_en = __Vfunc_mubi4_bool_to_mubi__148__Vfuncout;
    __Vfunc_sbox4_64bit__290__state_in = (0x13198a2e03707344ULL 
                                          ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                             ^ (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[3U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[2U])))));
    vlSelf->__Vfunc_sbox4_64bit__290__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5223939097849392769ull);
    __Vfunc_sbox4_8bit__291__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__290__state_in));
    vlSelf->__Vfunc_sbox4_8bit__291__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5287474869636317450ull);
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__291__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__291__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__291__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__291__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__290__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__290__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__291__Vfuncout)));
    __Vfunc_sbox4_8bit__291__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__290__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__291__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5287474869636317450ull);
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__291__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__291__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__291__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__291__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__290__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__290__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__291__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__291__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__290__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__291__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5287474869636317450ull);
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__291__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__291__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__291__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__291__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__290__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__290__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__291__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__291__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__290__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__291__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5287474869636317450ull);
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__291__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__291__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__291__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__291__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__290__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__290__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__291__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__291__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__290__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__291__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5287474869636317450ull);
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__291__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__291__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__291__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__291__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__290__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__290__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__291__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__291__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__290__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__291__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5287474869636317450ull);
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__291__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__291__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__291__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__291__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__290__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__290__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__291__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__291__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__290__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__291__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5287474869636317450ull);
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__291__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__291__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__291__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__291__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__290__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__290__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__291__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__291__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__290__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__291__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5287474869636317450ull);
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__291__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__291__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__291__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__291__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__291__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__291__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__290__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__290__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__291__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__290__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__290__state_out;
    gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__2 
        = __Vfunc_sbox4_64bit__290__Vfuncout;
    __Vfunc_mubi4_test_true_loose__179__val = vlSelfRef.__PVT__write_en_d;
    __Vfunc_mubi4_test_true_loose__179__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__179__val));
    vlSelfRef.__PVT__write_en_b = __Vfunc_mubi4_test_true_loose__179__Vfuncout;
    __Vfunc_mubi4_test_true_loose__178__val = vlSelfRef.__PVT__read_en;
    __Vfunc_mubi4_test_true_loose__178__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__178__val));
    vlSelfRef.__PVT__read_en_b = __Vfunc_mubi4_test_true_loose__178__Vfuncout;
    vlSelfRef.__PVT__addr_mux = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_loose__170__val 
                    = vlSelfRef.__PVT__read_en;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__170__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__170__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__170__Vfuncout))
                                  ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o)
                                  : (IData)(vlSelfRef.__PVT__waddr_scr_q));
    __Vfunc_mubi4_and_hi__166__b = vlSelfRef.__PVT__read_en;
    __Vfunc_mubi4_and_hi__166__a = vlSelfRef.__PVT__write_en_q;
    __Vfunc_mubi4_and__167__b = __Vfunc_mubi4_and_hi__166__b;
    __Vfunc_mubi4_and__167__a = __Vfunc_mubi4_and_hi__166__a;
    vlSelf->__Vfunc_mubi4_and__167__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13041767180930751024ull);
    __Vfunc_mubi4_and__167__a_in = __Vfunc_mubi4_and__167__a;
    __Vfunc_mubi4_and__167__b_in = __Vfunc_mubi4_and__167__b;
    vlSelfRef.__Vfunc_mubi4_and__167__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__167__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__167__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__167__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__167__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__167__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__167__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__167__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__167__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__167__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__167__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__167__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__167__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__167__out;
    __Vfunc_mubi4_and_hi__166__Vfuncout = __Vfunc_mubi4_and__167__Vfuncout;
    __Vfunc_mubi4_test_true_loose__165__val = __Vfunc_mubi4_and_hi__166__Vfuncout;
    __Vfunc_mubi4_test_true_loose__165__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__165__val));
    vlSelfRef.__PVT__rw_collision = __Vfunc_mubi4_test_true_loose__165__Vfuncout;
    __Vfunc_mubi4_and_hi__150__b = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__0__KET____DOT__gen_scramble_rams__DOT__data_bank.__PVT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o) 
                                     == (IData)(vlSelfRef.__PVT__waddr_scr_q))
                                     ? 6U : 9U);
    __Vfunc_mubi4_and_hi__151__b = vlSelfRef.__PVT__read_en;
    __Vfunc_mubi4_or_hi__152__b = vlSelfRef.__PVT__write_pending_q;
    __Vfunc_mubi4_or_hi__152__a = vlSelfRef.__PVT__write_en_q;
    __Vfunc_mubi4_or__153__b = __Vfunc_mubi4_or_hi__152__b;
    __Vfunc_mubi4_or__153__a = __Vfunc_mubi4_or_hi__152__a;
    vlSelf->__Vfunc_mubi4_or__153__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2512649759359138508ull);
    __Vfunc_mubi4_or__153__a_in = __Vfunc_mubi4_or__153__a;
    __Vfunc_mubi4_or__153__b_in = __Vfunc_mubi4_or__153__b;
    vlSelfRef.__Vfunc_mubi4_or__153__out = ((0x0cU 
                                             & (IData)(vlSelfRef.__Vfunc_mubi4_or__153__out)) 
                                            | ((2U 
                                                & ((IData)(__Vfunc_mubi4_or__153__a_in) 
                                                   | (IData)(__Vfunc_mubi4_or__153__b_in))) 
                                               | (1U 
                                                  & ((IData)(__Vfunc_mubi4_or__153__a_in) 
                                                     & (IData)(__Vfunc_mubi4_or__153__b_in)))));
    vlSelfRef.__Vfunc_mubi4_or__153__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__153__out)) 
                                            | (((2U 
                                                 & (((IData)(__Vfunc_mubi4_or__153__a_in) 
                                                     & (IData)(__Vfunc_mubi4_or__153__b_in)) 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (((IData)(__Vfunc_mubi4_or__153__a_in) 
                                                       | (IData)(__Vfunc_mubi4_or__153__b_in)) 
                                                      >> 2U))) 
                                               << 2U));
    __Vfunc_mubi4_or__153__Vfuncout = vlSelfRef.__Vfunc_mubi4_or__153__out;
    __Vfunc_mubi4_or_hi__152__Vfuncout = __Vfunc_mubi4_or__153__Vfuncout;
    __Vfunc_mubi4_and_hi__151__a = __Vfunc_mubi4_or_hi__152__Vfuncout;
    __Vfunc_mubi4_and__154__b = __Vfunc_mubi4_and_hi__151__b;
    __Vfunc_mubi4_and__154__a = __Vfunc_mubi4_and_hi__151__a;
    vlSelf->__Vfunc_mubi4_and__154__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3747185609983227123ull);
    __Vfunc_mubi4_and__154__a_in = __Vfunc_mubi4_and__154__a;
    __Vfunc_mubi4_and__154__b_in = __Vfunc_mubi4_and__154__b;
    vlSelfRef.__Vfunc_mubi4_and__154__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__154__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__154__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__154__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__154__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__154__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__154__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__154__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__154__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__154__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__154__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__154__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__154__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__154__out;
    __Vfunc_mubi4_and_hi__151__Vfuncout = __Vfunc_mubi4_and__154__Vfuncout;
    __Vfunc_mubi4_and_hi__150__a = __Vfunc_mubi4_and_hi__151__Vfuncout;
    __Vfunc_mubi4_and__155__b = __Vfunc_mubi4_and_hi__150__b;
    __Vfunc_mubi4_and__155__a = __Vfunc_mubi4_and_hi__150__a;
    vlSelf->__Vfunc_mubi4_and__155__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 36203437967164770ull);
    __Vfunc_mubi4_and__155__a_in = __Vfunc_mubi4_and__155__a;
    __Vfunc_mubi4_and__155__b_in = __Vfunc_mubi4_and__155__b;
    vlSelfRef.__Vfunc_mubi4_and__155__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__155__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__155__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__155__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__155__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__155__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__155__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__155__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__155__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__155__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__155__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__155__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__155__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__155__out;
    __Vfunc_mubi4_and_hi__150__Vfuncout = __Vfunc_mubi4_and__155__Vfuncout;
    vlSelfRef.__PVT__addr_collision_d = __Vfunc_mubi4_and_hi__150__Vfuncout;
    vlSelfRef.__PVT__macro_write = ((([&]() {
                    vlSelfRef.__Vfunc_mubi4_or_hi__162__b 
                        = vlSelfRef.__PVT__write_pending_q;
                    vlSelfRef.__Vfunc_mubi4_or_hi__162__a 
                        = vlSelfRef.__PVT__write_en_q;
                    vlSelfRef.__Vfunc_mubi4_or__163__b 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__162__b;
                    vlSelfRef.__Vfunc_mubi4_or__163__a 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__162__a;
                    vlSelf->__Vfunc_mubi4_or__163__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9107294336439562233ull);
                    vlSelfRef.__Vfunc_mubi4_or__163__a_in 
                        = vlSelfRef.__Vfunc_mubi4_or__163__a;
                    vlSelfRef.__Vfunc_mubi4_or__163__b_in 
                        = vlSelfRef.__Vfunc_mubi4_or__163__b;
                    vlSelfRef.__Vfunc_mubi4_or__163__out 
                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__163__out)) 
                           | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__163__a_in) 
                                     | (IData)(vlSelfRef.__Vfunc_mubi4_or__163__b_in))) 
                              | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__163__a_in) 
                                       & (IData)(vlSelfRef.__Vfunc_mubi4_or__163__b_in)))));
                    vlSelfRef.__Vfunc_mubi4_or__163__out 
                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__163__out)) 
                           | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__163__a_in) 
                                       & (IData)(vlSelfRef.__Vfunc_mubi4_or__163__b_in)) 
                                      >> 2U)) | (1U 
                                                 & (((IData)(vlSelfRef.__Vfunc_mubi4_or__163__a_in) 
                                                     | (IData)(vlSelfRef.__Vfunc_mubi4_or__163__b_in)) 
                                                    >> 2U))) 
                              << 2U));
                    vlSelfRef.__Vfunc_mubi4_or__163__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_or__163__out;
                    vlSelfRef.__Vfunc_mubi4_or_hi__162__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_or__163__Vfuncout;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__161__val 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__162__Vfuncout;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__161__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__161__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__161__Vfuncout)) 
                                     & (~ ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__164__val 
                            = vlSelfRef.__PVT__read_en;
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__164__Vfuncout 
                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__164__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__164__Vfuncout)))) 
                                    & (~ (IData)(vlSelfRef.__PVT__intg_error_w_q)));
    vlSelfRef.__PVT__macro_req = ((~ (IData)(vlSelfRef.__PVT__intg_error_w_q)) 
                                  & ([&]() {
                vlSelfRef.__Vfunc_mubi4_or_hi__157__b 
                    = vlSelfRef.__PVT__write_pending_q;
                vlSelfRef.__Vfunc_mubi4_or_hi__158__b 
                    = vlSelfRef.__PVT__write_en_q;
                vlSelfRef.__Vfunc_mubi4_or_hi__158__a 
                    = vlSelfRef.__PVT__read_en;
                vlSelfRef.__Vfunc_mubi4_or__159__b 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__158__b;
                vlSelfRef.__Vfunc_mubi4_or__159__a 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__158__a;
                vlSelf->__Vfunc_mubi4_or__159__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7334049637758771734ull);
                vlSelfRef.__Vfunc_mubi4_or__159__a_in 
                    = vlSelfRef.__Vfunc_mubi4_or__159__a;
                vlSelfRef.__Vfunc_mubi4_or__159__b_in 
                    = vlSelfRef.__Vfunc_mubi4_or__159__b;
                vlSelfRef.__Vfunc_mubi4_or__159__out 
                    = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__159__out)) 
                       | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__159__a_in) 
                                 | (IData)(vlSelfRef.__Vfunc_mubi4_or__159__b_in))) 
                          | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__159__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__159__b_in)))));
                vlSelfRef.__Vfunc_mubi4_or__159__out 
                    = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__159__out)) 
                       | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__159__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__159__b_in)) 
                                  >> 2U)) | (1U & (
                                                   ((IData)(vlSelfRef.__Vfunc_mubi4_or__159__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_or__159__b_in)) 
                                                   >> 2U))) 
                          << 2U));
                vlSelfRef.__Vfunc_mubi4_or__159__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__159__out;
                vlSelfRef.__Vfunc_mubi4_or_hi__158__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__159__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_or_hi__157__a 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__158__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_or__160__b 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__157__b;
                vlSelfRef.__Vfunc_mubi4_or__160__a 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__157__a;
                vlSelf->__Vfunc_mubi4_or__160__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8852126469304839467ull);
                vlSelfRef.__Vfunc_mubi4_or__160__a_in 
                    = vlSelfRef.__Vfunc_mubi4_or__160__a;
                vlSelfRef.__Vfunc_mubi4_or__160__b_in 
                    = vlSelfRef.__Vfunc_mubi4_or__160__b;
                vlSelfRef.__Vfunc_mubi4_or__160__out 
                    = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__160__out)) 
                       | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__160__a_in) 
                                 | (IData)(vlSelfRef.__Vfunc_mubi4_or__160__b_in))) 
                          | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__160__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__160__b_in)))));
                vlSelfRef.__Vfunc_mubi4_or__160__out 
                    = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__160__out)) 
                       | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__160__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__160__b_in)) 
                                  >> 2U)) | (1U & (
                                                   ((IData)(vlSelfRef.__Vfunc_mubi4_or__160__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_or__160__b_in)) 
                                                   >> 2U))) 
                          << 2U));
                vlSelfRef.__Vfunc_mubi4_or__160__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__160__out;
                vlSelfRef.__Vfunc_mubi4_or_hi__157__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__160__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__156__val 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__157__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__156__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__156__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__156__Vfuncout)));
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__2;
    __Vfunc_prince_mult_prime_64bit__215__state_in 
        = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__215__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16556319749810299468ull);
    __Vfunc_prince_nibble_red16__216__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__215__state_in));
    __Vfunc_prince_nibble_red16__216__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__216__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__216__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__216__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__216__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__216__Vfuncout)));
    __Vfunc_prince_nibble_red16__217__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__215__state_in));
    __Vfunc_prince_nibble_red16__217__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__217__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__217__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__217__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__217__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__217__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__218__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__215__state_in));
    __Vfunc_prince_nibble_red16__218__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__218__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__218__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__218__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__218__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__218__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__219__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__215__state_in));
    __Vfunc_prince_nibble_red16__219__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__219__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__219__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__219__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__219__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__219__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__220__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__215__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__220__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__220__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__220__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__220__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__220__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__220__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__221__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__215__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__221__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__221__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__221__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__221__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__221__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__221__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__222__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__215__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__222__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__222__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__222__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__222__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__222__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__222__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__223__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__215__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__223__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__223__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__223__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__223__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__223__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__223__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__224__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__215__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__224__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__224__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__224__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__224__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__224__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__224__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__225__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__215__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__225__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__225__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__225__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__225__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__225__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__225__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__226__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__215__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__226__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__226__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__226__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__226__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__226__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__226__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__227__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__215__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__227__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__227__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__227__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__227__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__227__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__227__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__228__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__215__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__228__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__228__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__228__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__228__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__228__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__228__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__229__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__215__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__229__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__229__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__229__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__229__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__229__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__229__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__230__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__215__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__230__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__230__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__230__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__230__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__230__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__230__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__231__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__215__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__231__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__231__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__231__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__231__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__231__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__231__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__215__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__215__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__215__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__232__state_in = vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__232__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10863495727792652611ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__232__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__232__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__232__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__232__state_out;
    vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__232__Vfuncout;
    vlSelfRef.__PVT__u_write_pending_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((IData)(vlSelfRef.__PVT__macro_write) ? 9U
            : ((IData)(vlSelfRef.__PVT__rw_collision)
                ? 6U : (IData)(vlSelfRef.__PVT__write_pending_q)));
    vlSelfRef.__PVT__write_pending_o = ((IData)(vlSelfRef.__PVT__macro_write) 
                                        | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_loose__168__val 
                    = vlSelfRef.__PVT__write_en_d;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__168__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__168__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__168__Vfuncout)));
    __Vfunc_mubi4_bool_to_mubi__189__val = vlSelfRef.__PVT__macro_write;
    __Vfunc_mubi4_bool_to_mubi__189__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__189__val)
                                                  ? 6U
                                                  : 9U);
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__189__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__188__val = vlSelfRef.__PVT__macro_req;
    __Vfunc_mubi4_bool_to_mubi__188__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__188__val)
                                                  ? 6U
                                                  : 9U);
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__req_d 
        = __Vfunc_mubi4_bool_to_mubi__188__Vfuncout;
    __Vfunc_sbox4_64bit__292__state_in = (0xa4093822299f31d0ULL 
                                          ^ (vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                             ^ (((QData)((IData)(
                                                                 vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__scramble_key_q[0U])))));
    vlSelf->__Vfunc_sbox4_64bit__292__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12354160199816962680ull);
    __Vfunc_sbox4_8bit__293__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__292__state_in));
    vlSelf->__Vfunc_sbox4_8bit__293__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10408350584060559920ull);
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__293__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__293__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__293__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__293__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__292__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__292__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__293__Vfuncout)));
    __Vfunc_sbox4_8bit__293__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__292__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__293__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10408350584060559920ull);
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__293__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__293__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__293__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__293__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__292__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__292__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__293__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__293__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__292__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__293__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10408350584060559920ull);
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__293__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__293__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__293__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__293__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__292__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__292__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__293__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__293__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__292__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__293__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10408350584060559920ull);
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__293__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__293__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__293__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__293__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__292__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__292__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__293__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__293__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__292__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__293__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10408350584060559920ull);
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__293__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__293__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__293__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__293__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__292__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__292__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__293__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__293__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__292__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__293__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10408350584060559920ull);
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__293__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__293__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__293__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__293__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__292__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__292__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__293__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__293__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__292__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__293__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10408350584060559920ull);
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__293__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__293__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__293__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__293__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__292__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__292__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__293__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__293__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__292__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__293__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10408350584060559920ull);
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__293__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__293__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__293__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__293__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__293__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__293__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__292__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__292__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__293__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__292__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__292__state_out;
    vlSelfRef.gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__2 
        = __Vfunc_sbox4_64bit__292__Vfuncout;
    __Vfunc_mubi4_test_true_loose__181__val = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__181__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__181__val));
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__181__Vfuncout;
    __Vfunc_mubi4_test_true_loose__180__val = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_test_true_loose__180__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__180__val));
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__req_q_b 
        = __Vfunc_mubi4_test_true_loose__180__Vfuncout;
    __Vfunc_mubi4_and_hi__186__b = (0x0000000fU & (~ (IData)(vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__write_d)));
    __Vfunc_mubi4_and_hi__186__a = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_and__187__b = __Vfunc_mubi4_and_hi__186__b;
    __Vfunc_mubi4_and__187__a = __Vfunc_mubi4_and_hi__186__a;
    vlSelf->__Vfunc_mubi4_and__187__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12218878922283897933ull);
    __Vfunc_mubi4_and__187__a_in = __Vfunc_mubi4_and__187__a;
    __Vfunc_mubi4_and__187__b_in = __Vfunc_mubi4_and__187__b;
    vlSelfRef.__Vfunc_mubi4_and__187__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__187__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__187__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__187__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__187__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__187__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__187__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__187__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__187__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__187__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__187__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__187__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__187__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__187__out;
    __Vfunc_mubi4_and_hi__186__Vfuncout = __Vfunc_mubi4_and__187__Vfuncout;
    vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_d 
        = __Vfunc_mubi4_and_hi__186__Vfuncout;
    vlSelfRef.__PVT__ram_alert = (((([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__191__val 
                            = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__req_d;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__191__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__191__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__191__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__191__Vfuncout)) 
                                    | ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__192__val 
                            = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__write_d;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__192__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__192__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__192__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__192__Vfuncout))) 
                                   | ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_invalid__193__val 
                        = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                    vlSelfRef.__Vfunc_mubi4_test_invalid__193__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__193__val)) 
                                    | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__193__val)))));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__193__Vfuncout))) 
                                  | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__194__val 
                    = vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                vlSelfRef.__Vfunc_mubi4_test_invalid__194__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__194__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__194__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__194__Vfuncout)));
    vlSelfRef.alert_o = ((((([&]() {
                            vlSelfRef.__Vfunc_mubi4_test_invalid__174__val 
                                = vlSelfRef.__PVT__write_en_q;
                            vlSelfRef.__Vfunc_mubi4_test_invalid__174__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__174__val)) 
                                            | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__174__val)))));
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__174__Vfuncout)) 
                            | ([&]() {
                            vlSelfRef.__Vfunc_mubi4_test_invalid__175__val 
                                = vlSelfRef.__PVT__addr_collision_q;
                            vlSelfRef.__Vfunc_mubi4_test_invalid__175__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__175__val)) 
                                            | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__175__val)))));
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__175__Vfuncout))) 
                           | ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__176__val 
                            = vlSelfRef.__PVT__write_pending_q;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__176__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__176__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__176__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__176__Vfuncout))) 
                          | ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_invalid__177__val 
                        = vlSelfRef.__PVT__rvalid_q;
                    vlSelfRef.__Vfunc_mubi4_test_invalid__177__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__177__val)) 
                                    | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__177__val)))));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__177__Vfuncout))) 
                         | (IData)(vlSelfRef.__PVT__ram_alert));
}
