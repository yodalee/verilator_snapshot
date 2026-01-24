// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_PDP_CORE_unit1d___ctor_var_reset(Vsim_NV_NVDLA_PDP_CORE_unit1d* vlSelf);

Vsim_NV_NVDLA_PDP_CORE_unit1d::Vsim_NV_NVDLA_PDP_CORE_unit1d(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_NV_NVDLA_PDP_CORE_unit1d___ctor_var_reset(this);
}

void Vsim_NV_NVDLA_PDP_CORE_unit1d::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_NV_NVDLA_PDP_CORE_unit1d::~Vsim_NV_NVDLA_PDP_CORE_unit1d() {
}
