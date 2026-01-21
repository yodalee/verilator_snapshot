# About this repo

An experiment to rewrite `fstapi.c` for better Verilator simulation speed.

# Prerequisite

Clone the [libfstpp](https://github.com/johnjohnlin/libfstpp) in the path `external`.

# Project structure
Common code is under `src/`, and all the benchmark code are under `benchmark/`

* `src/gtkwave`:  Original fstapi C implementation from GtkWave.
* `src/verilatorshare`: The snapshot of files to built a verilator project. Copied from version 5.042.
* `benchmark/`: The directory of overall benchmark cases and test cases
* `benchmark/*/fixed`: The verilated cpp code, generated from verilog code using Verilator 5.0.42
* `benchmark/*/firmware`: The firmware that are required to run the firmware

# How to run
I have snapshot the Verilator output, and you just need to follow the standard cmake process. No Verilator is needed at all. You need a C++20 compiler as Verilator --timing needs it.

```
cmake -B build src -DCMAKE_BUILD_TYPE=Release
cd build
make -j $(nproc)
```

Build the testbench you would like to run
```
make ${benchmark}
make ${benchmark}_gtkwave

Run the case under their directory, with option to disable/enable fst file dumping.
```
cd ${benchmark}
./${benchmark} 0         # No FST version
./${benchmark}_gtkwave 1 # gtkwave version
./${benchmark} 1         # cpp FST version
```

# Reference

Please refer to the [unofficial document](https://blog.timhutt.co.uk/fst_spec/) of the fst waveform specification

# Profiling results

We collect following benchmark:
1. [RSA256](https://github.com/yodalee/rsa256)
2. [picorv32](https://github.com/YosysHQ/picorv32)
3. [Vortex:mini:sgemm](https://github.com/vortexgpgpu/vortex) from [rtlmeter](https://github.com/verilator/rtlmeter)

CPU: AMD Ryzen 9 7950X, release mode, cell is the runtime (ms).

| Mode        | RSA256 | picorv32 | vortex:mini:sgemm |
|:------------|-------:|---------:|------------------:|
| GtkWave FST |  163.5 |   1287.7 |           44722.4 |
| This FST    |   73.9 |    825.9 |           35042.3 |
| No FST      |    7.5 |     78.4 |            7436.3 |
