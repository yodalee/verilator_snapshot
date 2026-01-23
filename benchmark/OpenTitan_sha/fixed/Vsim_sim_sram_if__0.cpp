// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

std::string VL_TO_STRING(const Vsim_sim_sram_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_sim_sram_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
