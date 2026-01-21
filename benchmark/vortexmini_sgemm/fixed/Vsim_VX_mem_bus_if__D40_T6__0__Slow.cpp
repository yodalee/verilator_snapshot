// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_VX_mem_bus_if__D40_T6___ctor_var_reset(Vsim_VX_mem_bus_if__D40_T6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D40_T6___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    VL_SCOPED_RAND_RESET_W(612, vlSelf->req_data, __VscopeHash, 4429487659075431607ull);
    vlSelf->rsp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1421612161635894276ull);
}
