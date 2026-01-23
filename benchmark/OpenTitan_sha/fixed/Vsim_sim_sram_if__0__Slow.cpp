// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_sim_sram_if___ctor_var_reset(Vsim_sim_sram_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_sim_sram_if___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_h2d, __VscopeHash, 11979313815134412315ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_d2h, __VscopeHash, 13683165509534211701ull);
    vlSelf->start_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2718407343958340223ull);
}
