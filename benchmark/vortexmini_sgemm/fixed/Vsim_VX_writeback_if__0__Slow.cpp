// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_VX_writeback_if___ctor_var_reset(Vsim_VX_writeback_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_writeback_if___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    VL_SCOPED_RAND_RESET_W(174, vlSelf->data, __VscopeHash, 10363016170300574568ull);
}
