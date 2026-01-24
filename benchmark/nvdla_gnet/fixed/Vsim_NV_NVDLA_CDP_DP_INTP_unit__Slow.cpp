// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___ctor_var_reset(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf);

Vsim_NV_NVDLA_CDP_DP_INTP_unit::Vsim_NV_NVDLA_CDP_DP_INTP_unit(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_NV_NVDLA_CDP_DP_INTP_unit___ctor_var_reset(this);
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_NV_NVDLA_CDP_DP_INTP_unit::~Vsim_NV_NVDLA_CDP_DP_INTP_unit() {
}
