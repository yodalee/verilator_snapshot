// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_mubi4_sync__Rz103___ctor_var_reset(Vsim_prim_mubi4_sync__Rz103* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__Rz103___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->mubi_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9457581145832603685ull);
    vlSelf->mubi_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7877937283296971435ull);
    vlSelf->__PVT__gen_flops__DOT__mubi_sync = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7339850125848064099ull);
    vlSelf->__PVT__gen_flops__DOT__u_prim_flop_2sync__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4839573531641071855ull);
}
