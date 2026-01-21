// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_VX_MEM_BUS_IF__D4_T2_H_
#define VERILATED_VSIM_VX_MEM_BUS_IF__D4_T2_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_VX_mem_bus_if__D4_T2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ req_ready;
    CData/*0:0*/ rsp_ready;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_VX_mem_bus_if__D4_T2(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_VX_mem_bus_if__D4_T2();
    VL_UNCOPYABLE(Vsim_VX_mem_bus_if__D4_T2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsim_VX_mem_bus_if__D4_T2* obj);

#endif  // guard
