// Verilated -*- C++ -*-
// DESCRIPTION: main() calling loop, created with Verilator --main

#include "verilated.h"
#include "Vsim.h"
#include <chrono>
#include <iostream>
#include "verilated_fst_c.h"
#include <cstdio>
#include <cstring>

//======================

int main(int argc, char** argv, char**) {
    using namespace std::chrono;
    auto tic = high_resolution_clock::now();

    // FST option parsing: last argument must be "1" or "0"
    bool dump_fst = false;
    if (argc > 1 && argv[argc-1][0] == '1') {
        dump_fst = true;
        --argc;
    }

    Verilated::debug(0);
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->commandArgs(argc, argv);

    const std::unique_ptr<Vsim> topp{new Vsim{contextp.get(), ""}};

    // Tracing (fst)
    VerilatedFstC* tfp = nullptr;
    if (dump_fst) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedFstC;
        topp->trace(tfp, 99);
        tfp->open("NVDLAgnet.fst");
    }

    while (VL_LIKELY(!contextp->gotFinish())) {
        topp->eval();
        if (tfp) tfp->dump(contextp->time());
        // Advance time
        if (!topp->eventsPending()) break;
        contextp->time(topp->nextTimeSlot());
    }

    if (VL_LIKELY(!contextp->gotFinish())) {
        VL_DEBUG_IF(VL_PRINTF("+ Exiting without $finish; no events left\n"););
    }

    topp->final();

    if (tfp) {
        tfp->close();
        delete tfp;
    }

    contextp->statsPrintSummary();

    auto toc = high_resolution_clock::now();
    std::cout << duration_cast<microseconds>(toc - tic).count() << "us" << std::endl;

    return 0;
}
