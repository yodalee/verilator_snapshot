// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CACC_CALC_int16___ctor_var_reset(Vsim_NV_NVDLA_CACC_CALC_int16* vlSelf);

Vsim_NV_NVDLA_CACC_CALC_int16::Vsim_NV_NVDLA_CACC_CALC_int16(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_NV_NVDLA_CACC_CALC_int16___ctor_var_reset(this);
}

void Vsim_NV_NVDLA_CACC_CALC_int16::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_NV_NVDLA_CACC_CALC_int16::~Vsim_NV_NVDLA_CACC_CALC_int16() {
}
