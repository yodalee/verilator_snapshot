// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_mubi4_sync__N2_A0___ctor_var_reset(Vsim_prim_mubi4_sync__N2_A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__N2_A0___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->mubi_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9457581145832603685ull);
    vlSelf->mubi_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7877937283296971435ull);
    vlSelf->__PVT__gen_no_flops__DOT__unused_logic = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16799914484158036638ull);
}
