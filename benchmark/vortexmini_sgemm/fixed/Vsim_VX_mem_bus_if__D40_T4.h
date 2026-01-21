// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_VX_MEM_BUS_IF__D40_T4_H_
#define VERILATED_VSIM_VX_MEM_BUS_IF__D40_T4_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_VX_mem_bus_if__D40_T4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ req_ready;
    CData/*0:0*/ rsp_ready;
    VlWide<20>/*609:0*/ req_data;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_VX_mem_bus_if__D40_T4(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_VX_mem_bus_if__D40_T4();
    VL_UNCOPYABLE(Vsim_VX_mem_bus_if__D40_T4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsim_VX_mem_bus_if__D40_T4* obj);

#endif  // guard
