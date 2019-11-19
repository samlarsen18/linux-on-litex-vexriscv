rm -rf obj_dir/
make -C . -f /home/slarson/vexriscv/litex/litex/build/sim/core/Makefile CC_SRCS="--cc /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v --cc /home/slarson/vexriscv/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v "   OPT_LEVEL=O3
mkdir -p modules && cp obj_dir/*.so modules
