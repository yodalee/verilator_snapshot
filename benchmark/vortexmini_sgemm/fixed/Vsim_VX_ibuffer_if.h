// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_VX_IBUFFER_IF_H_
#define VERILATED_VSIM_VX_IBUFFER_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_VX_ibuffer_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ready;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_VX_ibuffer_if(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_VX_ibuffer_if();
    VL_UNCOPYABLE(Vsim_VX_ibuffer_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsim_VX_ibuffer_if* obj);

#endif  // guard
