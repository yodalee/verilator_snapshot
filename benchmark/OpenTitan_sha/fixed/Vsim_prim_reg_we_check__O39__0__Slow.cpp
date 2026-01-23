// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_reg_we_check__O39___ctor_var_reset(Vsim_prim_reg_we_check__O39* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_reg_we_check__O39___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->oh_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 16598430225602142758ull);
    vlSelf->en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2395839182665444169ull);
    vlSelf->err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11052201151567880375ull);
    vlSelf->__PVT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 11848474061166706113ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14068447993876640897ull);
    VL_SCOPED_RAND_RESET_W(127, vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree, __VscopeHash, 9113870672904820748ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9015259094613616618ull);
    VL_SCOPED_RAND_RESET_W(127, vlSelf->__PVT__u_prim_onehot_check__DOT__err_tree, __VscopeHash, 12336082083746189837ull);
    vlSelf->__PVT__u_prim_onehot_check__DOT__oh0_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3626467492295292407ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->u_prim_onehot_check__DOT____VdfgRegularize_h0c9e6cb2_0_63, __VscopeHash, 1846228269299058280ull);
}
