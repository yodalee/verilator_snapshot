// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_SIM_SRAM_IF_H_
#define VERILATED_VSIM_SIM_SRAM_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_sim_sram_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    IData/*31:0*/ start_addr;
    VL_INW(tl_h2d,108,0,4);
    VL_INW(tl_d2h,65,0,3);

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_sim_sram_if(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_sim_sram_if();
    VL_UNCOPYABLE(Vsim_sim_sram_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsim_sim_sram_if* obj);

#endif  // guard
