// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_VX_MEM_BUS_IF__D4_T3_H_
#define VERILATED_VSIM_VX_MEM_BUS_IF__D4_T3_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_VX_mem_bus_if__D4_T3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ req_valid;
    CData/*0:0*/ req_ready;
    VlWide<3>/*72:0*/ req_data;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_VX_mem_bus_if__D4_T3(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_VX_mem_bus_if__D4_T3();
    VL_UNCOPYABLE(Vsim_VX_mem_bus_if__D4_T3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsim_VX_mem_bus_if__D4_T3* obj);

#endif  // guard
