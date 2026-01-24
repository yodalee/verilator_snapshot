// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_lc_sync___ctor_var_reset(Vsim_prim_lc_sync* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_lc_sync___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->lc_en_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16406504534124540799ull);
    vlSelf->lc_en_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16343096869173629824ull);
    vlSelf->__PVT__lc_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15733913109164491653ull);
    vlSelf->__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4839573531641071855ull);
}
