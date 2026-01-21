// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_VX_mem_bus_if__D10_T3___ctor_var_reset(Vsim_VX_mem_bus_if__D10_T3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D10_T3___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12465084953323796564ull);
    VL_SCOPED_RAND_RESET_W(179, vlSelf->req_data, __VscopeHash, 4429487659075431607ull);
    vlSelf->req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16539944981316001420ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->rsp_data, __VscopeHash, 3559817494807160352ull);
}
