TRIPLE=riscv64-unknown-elf
CPU=vexriscv
CPUFLAGS=-march=rv32ima    -mabi=ilp32 -D__vexriscv__
CPUENDIANNESS=little
CLANG=0
LITEX=1
COPY_TO_MAIN_RAM=1
EXECUTE_IN_PLACE=0
SOC_DIRECTORY=/home/slarson/vexriscv/litex/litex/soc
export BUILDINC_DIRECTORY
BUILDINC_DIRECTORY=/home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/software/include
LIBCOMPILER_RT_DIRECTORY=/home/slarson/vexriscv/litex/litex/soc/software/libcompiler_rt
LIBBASE_DIRECTORY=/home/slarson/vexriscv/litex/litex/soc/software/libbase
LIBNET_DIRECTORY=/home/slarson/vexriscv/litex/litex/soc/software/libnet
BIOS_DIRECTORY=/home/slarson/vexriscv/litex/litex/soc/software/bios
