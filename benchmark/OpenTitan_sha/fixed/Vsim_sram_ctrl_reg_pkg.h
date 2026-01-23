// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_SRAM_CTRL_REG_PKG_H_
#define VERILATED_VSIM_SRAM_CTRL_REG_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_sram_ctrl_reg_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 9> __PVT__SRAM_CTRL_REGS_PERMIT = {{
        1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
        1U
    }};

    // CONSTRUCTORS
    Vsim_sram_ctrl_reg_pkg(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_sram_ctrl_reg_pkg();
    VL_UNCOPYABLE(Vsim_sram_ctrl_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
