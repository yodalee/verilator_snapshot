// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CACC_CALC_int8___ctor_var_reset(Vsim_NV_NVDLA_CACC_CALC_int8* vlSelf);

Vsim_NV_NVDLA_CACC_CALC_int8::Vsim_NV_NVDLA_CACC_CALC_int8(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_NV_NVDLA_CACC_CALC_int8___ctor_var_reset(this);
}

void Vsim_NV_NVDLA_CACC_CALC_int8::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_NV_NVDLA_CACC_CALC_int8::~Vsim_NV_NVDLA_CACC_CALC_int8() {
}
