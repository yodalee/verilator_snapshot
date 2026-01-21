// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_VX_MEM_BUS_IF__D40_T8_H_
#define VERILATED_VSIM_VX_MEM_BUS_IF__D40_T8_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_VX_mem_bus_if__D40_T8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<20>/*613:0*/ req_data;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_VX_mem_bus_if__D40_T8(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_VX_mem_bus_if__D40_T8();
    VL_UNCOPYABLE(Vsim_VX_mem_bus_if__D40_T8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsim_VX_mem_bus_if__D40_T8* obj);

#endif  // guard
