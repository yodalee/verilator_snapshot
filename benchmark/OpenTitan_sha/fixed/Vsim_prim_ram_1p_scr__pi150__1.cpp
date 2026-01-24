// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_ram_1p_scr__pi150___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__tag_bank__0(Vsim_prim_ram_1p_scr__pi150* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_ram_1p_scr__pi150___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_rams__DOT__gen_rams_inner__BRA__1__KET____DOT__gen_scramble_rams__DOT__tag_bank__0\n"); );
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
    vlSelfRef.__PVT__rdata = (0x0fffffffU & (vlSelfRef.__PVT__u_prim_ram_1p_adv__DOT__rdata_sram 
                                             ^ (IData)(vlSelfRef.__PVT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_o)));
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
