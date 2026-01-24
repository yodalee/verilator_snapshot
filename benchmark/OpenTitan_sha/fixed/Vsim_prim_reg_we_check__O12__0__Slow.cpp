// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_reg_we_check__O12___ctor_var_reset(Vsim_prim_reg_we_check__O12* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_reg_we_check__O12___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->oh_i = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16598430225602142758ull);
    vlSelf->en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2395839182665444169ull);
    vlSelf->err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11052201151567880375ull);
    vlSelf->__PVT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11848474061166706113ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14068447993876640897ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7845158944772694959ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10975695107601830194ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11826442415562352722ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7123294390376398329ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16053048745178211571ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15958837446199910313ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4829516717529307891ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5963298313838676378ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13202589559761497419ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3636870284421835288ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6055334860858885820ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15963841339130825842ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12203039814392571152ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 700964636316356323ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5929548773987305575ull);
}
