// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_IBEX_PKG_H_
#define VERILATED_VSIM_IBEX_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_ibex_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<QData/*33:0*/, 16> __PVT__PmpAddrRst = {{
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL
    }};

    // CONSTRUCTORS
    Vsim_ibex_pkg(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_ibex_pkg();
    VL_UNCOPYABLE(Vsim_ibex_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
