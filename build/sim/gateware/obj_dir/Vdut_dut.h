// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef _Vdut_dut_H_
#define _Vdut_dut_H_

#include "verilated_heavy.h"
#include "Vdut__Dpi.h"

class Vdut__Syms;
class Vdut_VexRiscv;
class VerilatedVcd;

//----------

VL_MODULE(Vdut_dut) {
  public:
    // CELLS
    Vdut_VexRiscv*     	VexRiscv;
    
    // PORTS
    VL_IN8(sys_clk,0,0);
    VL_OUT8(serial_source_valid,0,0);
    VL_IN8(serial_source_ready,0,0);
    VL_OUT8(serial_source_data,7,0);
    VL_IN8(serial_sink_valid,0,0);
    VL_OUT8(serial_sink_ready,0,0);
    VL_IN8(serial_sink_data,7,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__main_soclinux_ctrl_re,0,0);
    VL_SIG8(__PVT__main_soclinux_vexriscv_latch_re,0,0);
    VL_SIG8(__PVT__main_soclinux_vexriscv_time_cmp_re,0,0);
    VL_SIG8(__PVT__main_soclinux_interface0_soc_bus_ack,0,0);
    VL_SIG8(__PVT__main_soclinux_interface1_soc_bus_ack,0,0);
    VL_SIG8(__PVT__main_soclinux_rom_bus_ack,0,0);
    VL_SIG8(__PVT__main_soclinux_sram_bus_cyc,0,0);
    VL_SIG8(__PVT__main_soclinux_sram_bus_ack,0,0);
    VL_SIG8(__PVT__main_soclinux_sram_we,3,0);
    VL_SIG8(__PVT__main_soclinux_main_ram_bus_cyc,0,0);
    VL_SIG8(__PVT__main_soclinux_main_ram_bus_ack,0,0);
    VL_SIG8(__PVT__main_soclinux_main_ram_we,3,0);
    VL_SIG8(__PVT__main_soclinux_load_re,0,0);
    VL_SIG8(__PVT__main_soclinux_reload_re,0,0);
    VL_SIG8(__PVT__main_soclinux_en_storage,0,0);
    VL_SIG8(__PVT__main_soclinux_en_re,0,0);
    VL_SIG8(__PVT__main_soclinux_update_value_storage,0,0);
    VL_SIG8(__PVT__main_soclinux_update_value_re,0,0);
    VL_SIG8(__PVT__main_soclinux_zero_pending,0,0);
    VL_SIG8(__PVT__main_soclinux_zero_trigger,0,0);
    VL_SIG8(__PVT__main_soclinux_zero_clear,0,0);
    VL_SIG8(__PVT__main_soclinux_zero_old_trigger,0,0);
    VL_SIG8(__PVT__main_soclinux_eventmanager_status_w,0,0);
    VL_SIG8(__PVT__main_soclinux_eventmanager_pending_w,0,0);
    VL_SIG8(__PVT__main_soclinux_eventmanager_storage,0,0);
    VL_SIG8(__PVT__main_soclinux_eventmanager_re,0,0);
    VL_SIG8(__PVT__main_soclinux_interface_we,0,0);
    VL_SIG8(__PVT__main_soclinux_bus_wishbone_cyc,0,0);
    VL_SIG8(__PVT__main_soclinux_bus_wishbone_ack,0,0);
    VL_SIG8(__PVT__main_int_rst,0,0);
    VL_SIG8(__PVT__main_bus_cyc,0,0);
    VL_SIG8(__PVT__main_bus_ack,0,0);
    VL_SIG8(__PVT__main_we,3,0);
    VL_SIG8(__PVT__main_uart_rxtx_re,0,0);
    VL_SIG8(__PVT__main_uart_tx_pending,0,0);
    VL_SIG8(__PVT__main_uart_tx_clear,0,0);
    VL_SIG8(__PVT__main_uart_tx_old_trigger,0,0);
    VL_SIG8(__PVT__main_uart_rx_pending,0,0);
    VL_SIG8(__PVT__main_uart_rx_clear,0,0);
    VL_SIG8(__PVT__main_uart_rx_old_trigger,0,0);
    VL_SIG8(__PVT__main_uart_eventmanager_status_w,1,0);
    VL_SIG8(__PVT__main_uart_eventmanager_pending_re,0,0);
    VL_SIG8(__PVT__main_uart_eventmanager_pending_w,1,0);
    VL_SIG8(__PVT__main_uart_eventmanager_storage,1,0);
    VL_SIG8(__PVT__main_uart_eventmanager_re,0,0);
    VL_SIG8(__PVT__main_uart_tx_fifo_readable,0,0);
    VL_SIG8(__PVT__main_uart_tx_fifo_syncfifo_writable,0,0);
    VL_SIG8(__PVT__main_uart_tx_fifo_syncfifo_re,0,0);
    VL_SIG8(__PVT__main_uart_tx_fifo_level0,4,0);
    VL_SIG8(__PVT__main_uart_tx_fifo_produce,3,0);
    VL_SIG8(__PVT__main_uart_tx_fifo_consume,3,0);
    VL_SIG8(__PVT__main_uart_tx_fifo_wrport_adr,3,0);
    VL_SIG8(__PVT__main_uart_tx_fifo_do_read,0,0);
    VL_SIG8(__PVT__main_uart_tx_fifo_fifo_out_payload_data,7,0);
    VL_SIG8(__PVT__main_uart_tx_fifo_fifo_out_first,0,0);
    VL_SIG8(__PVT__main_uart_tx_fifo_fifo_out_last,0,0);
    VL_SIG8(__PVT__main_uart_rx_fifo_source_valid,0,0);
    VL_SIG8(__PVT__main_uart_rx_fifo_readable,0,0);
    VL_SIG8(__PVT__main_uart_rx_fifo_syncfifo_writable,0,0);
    VL_SIG8(__PVT__main_uart_rx_fifo_syncfifo_re,0,0);
    VL_SIG8(__PVT__main_uart_rx_fifo_level0,4,0);
    VL_SIG8(__PVT__main_uart_rx_fifo_produce,3,0);
    VL_SIG8(__PVT__main_uart_rx_fifo_consume,3,0);
    VL_SIG8(__PVT__main_uart_rx_fifo_wrport_adr,3,0);
    VL_SIG8(__PVT__main_uart_rx_fifo_do_read,0,0);
    VL_SIG8(__PVT__main_uart_rx_fifo_fifo_out_payload_data,7,0);
    VL_SIG8(__PVT__main_uart_rx_fifo_fifo_out_first,0,0);
    VL_SIG8(__PVT__main_uart_rx_fifo_fifo_out_last,0,0);
    VL_SIG8(__PVT__builder_state,0,0);
    VL_SIG8(__PVT__builder_next_state,0,0);
    VL_SIG8(__PVT__builder_shared_ack,0,0);
    VL_SIG8(__PVT__builder_request,1,0);
    VL_SIG8(__PVT__builder_grant,0,0);
    VL_SIG8(__PVT__builder_slave_sel,4,0);
    VL_SIG8(__PVT__builder_slave_sel_r,4,0);
    VL_SIG8(__PVT__builder_error,0,0);
    VL_SIG8(__PVT__builder_done,0,0);
    VL_SIG8(__PVT__builder_interface0_bank_bus_dat_r,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time7_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time6_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time5_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time4_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time3_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time2_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time1_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time0_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time_cmp7_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time_cmp6_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time_cmp5_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time_cmp4_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time_cmp3_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time_cmp2_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time_cmp1_w,7,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time_cmp0_re,0,0);
    VL_SIG8(__PVT__builder_csrbank0_timer_time_cmp0_w,7,0);
    VL_SIG8(__PVT__builder_interface1_bank_bus_dat_r,7,0);
    VL_SIG8(__PVT__builder_csrbank1_scratch3_w,7,0);
    VL_SIG8(__PVT__builder_csrbank1_scratch2_w,7,0);
    VL_SIG8(__PVT__builder_csrbank1_scratch1_w,7,0);
    VL_SIG8(__PVT__builder_csrbank1_scratch0_re,0,0);
    VL_SIG8(__PVT__builder_csrbank1_scratch0_w,7,0);
    VL_SIG8(__PVT__builder_csrbank1_bus_errors3_w,7,0);
    VL_SIG8(__PVT__builder_csrbank1_bus_errors2_w,7,0);
    VL_SIG8(__PVT__builder_csrbank1_bus_errors1_w,7,0);
    VL_SIG8(__PVT__builder_csrbank1_bus_errors0_w,7,0);
    VL_SIG8(__PVT__builder_interface2_bank_bus_dat_r,7,0);
    VL_SIG8(__PVT__builder_interface3_bank_bus_dat_r,7,0);
    VL_SIG8(__PVT__builder_csrbank3_load3_w,7,0);
    VL_SIG8(__PVT__builder_csrbank3_load2_w,7,0);
    VL_SIG8(__PVT__builder_csrbank3_load1_w,7,0);
    VL_SIG8(__PVT__builder_csrbank3_load0_re,0,0);
    VL_SIG8(__PVT__builder_csrbank3_load0_w,7,0);
    VL_SIG8(__PVT__builder_csrbank3_reload3_w,7,0);
    VL_SIG8(__PVT__builder_csrbank3_reload2_w,7,0);
    VL_SIG8(__PVT__builder_csrbank3_reload1_w,7,0);
    VL_SIG8(__PVT__builder_csrbank3_reload0_re,0,0);
    VL_SIG8(__PVT__builder_csrbank3_reload0_w,7,0);
    VL_SIG8(__PVT__builder_csrbank3_en0_re,0,0);
    VL_SIG8(__PVT__builder_csrbank3_en0_w,0,0);
    VL_SIG8(__PVT__builder_csrbank3_update_value0_re,0,0);
    VL_SIG8(__PVT__builder_csrbank3_update_value0_w,0,0);
    VL_SIG8(__PVT__builder_csrbank3_value3_w,7,0);
    VL_SIG8(__PVT__builder_csrbank3_value2_w,7,0);
    VL_SIG8(__PVT__builder_csrbank3_value1_w,7,0);
    VL_SIG8(__PVT__builder_csrbank3_value0_w,7,0);
    VL_SIG8(__PVT__builder_csrbank3_ev_enable0_re,0,0);
    VL_SIG8(__PVT__builder_csrbank3_ev_enable0_w,0,0);
    VL_SIG8(__PVT__builder_interface4_bank_bus_dat_r,7,0);
    VL_SIG8(__PVT__builder_csrbank4_txfull_w,0,0);
    VL_SIG8(__PVT__builder_csrbank4_rxempty_w,0,0);
    VL_SIG8(__PVT__builder_csrbank4_ev_enable0_re,0,0);
    VL_SIG8(__PVT__builder_csrbank4_ev_enable0_w,1,0);
    VL_SIG8(__PVT__builder_array_muxed2,3,0);
    VL_SIG8(__PVT__builder_array_muxed3,0,0);
    VL_SIG8(__PVT__builder_array_muxed4,0,0);
    VL_SIG8(__PVT__builder_array_muxed5,0,0);
    VL_SIG8(__PVT__builder_array_muxed6,2,0);
    VL_SIG8(__PVT__builder_array_muxed7,1,0);
    VL_SIG16(__PVT__main_soclinux_interface_adr,13,0);
    VL_SIG16(__PVT__memadr,9,0);
    VL_SIG16(__PVT__memadr_2,11,0);
    VL_SIG16(__PVT__memdat_1,9,0);
    VL_SIG16(__PVT__memdat_2,9,0);
    VL_SIG16(__PVT__memdat_3,9,0);
    VL_SIG16(__PVT__memdat_4,9,0);
    VL_SIG(__PVT__main_soclinux_ctrl_storage,31,0);
    VL_SIG(__PVT__main_soclinux_ctrl_bus_errors,31,0);
    VL_SIG(__PVT__main_soclinux_vexriscv_interrupt0,31,0);
    VL_SIG(__PVT__main_soclinux_load_storage,31,0);
    VL_SIG(__PVT__main_soclinux_reload_storage,31,0);
    VL_SIG(__PVT__main_soclinux_value_status,31,0);
    VL_SIG(__PVT__main_soclinux_value,31,0);
    VL_SIG(__PVT__builder_shared_dat_r,31,0);
    VL_SIG(__PVT__builder_count,19,0);
    VL_SIG(__PVT__builder_array_muxed0,29,0);
    VL_SIG(__PVT__builder_array_muxed1,31,0);
    VL_SIG(__PVT__memdat,31,0);
    VL_SIG(__PVT__memadr_1,22,0);
    VL_SIG64(__PVT__main_soclinux_vexriscv_time_status,63,0);
    VL_SIG64(__PVT__main_soclinux_vexriscv_time_cmp_storage,63,0);
    VL_SIG64(__PVT__main_soclinux_vexriscv_time,63,0);
    VL_SIG64(__PVT__main_soclinux_vexriscv_time_cmp,63,0);
    VL_SIG(__PVT__mem[8192],31,0);
    VL_SIG(__PVT__mem_1[1024],31,0);
    VL_SIG(__PVT__mem_2[8388608],31,0);
    VL_SIG(__PVT__mem_3[4096],31,0);
    VL_SIG16(__PVT__storage[16],9,0);
    VL_SIG16(__PVT__storage_1[16],9,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vcellinp__VexRiscv__reset,0,0);
    VL_SIG8(__Vdly__main_soclinux_rom_bus_ack,0,0);
    VL_SIG8(__Vdly__main_soclinux_sram_bus_ack,0,0);
    VL_SIG8(__Vdly__main_soclinux_main_ram_bus_ack,0,0);
    VL_SIG8(__Vdly__main_soclinux_zero_old_trigger,0,0);
    VL_SIG8(__Vdly__main_bus_ack,0,0);
    VL_SIG8(__Vdly__main_uart_tx_old_trigger,0,0);
    VL_SIG8(__Vdly__main_uart_rx_old_trigger,0,0);
    VL_SIG8(__Vdly__main_uart_tx_fifo_produce,3,0);
    VL_SIG8(__Vdly__main_uart_tx_fifo_consume,3,0);
    VL_SIG8(__Vdly__main_uart_tx_fifo_level0,4,0);
    VL_SIG8(__Vdly__main_uart_rx_fifo_produce,3,0);
    VL_SIG8(__Vdly__main_uart_rx_fifo_consume,3,0);
    VL_SIG8(__Vdly__main_uart_rx_fifo_level0,4,0);
    VL_SIG8(__Vdly__builder_grant,0,0);
    VL_SIG8(__Vdly__main_soclinux_en_storage,0,0);
    VL_SIG8(__Vdly__main_soclinux_update_value_re,0,0);
    VL_SIG(__Vdly__main_soclinux_ctrl_bus_errors,31,0);
    VL_SIG(__Vdly__main_soclinux_value,31,0);
    VL_SIG(__Vdly__builder_count,19,0);
    VL_SIG(__Vdly__main_soclinux_load_storage,31,0);
    VL_SIG(__Vdly__main_soclinux_reload_storage,31,0);
    VL_SIG64(__Vdly__main_soclinux_vexriscv_time,63,0);
    VL_SIG64(__Vdly__main_soclinux_vexriscv_time_cmp_storage,63,0);
    
    // INTERNAL VARIABLES
  private:
    Vdut__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vdut_dut& operator= (const Vdut_dut&);  ///< Copying not allowed
    Vdut_dut(const Vdut_dut&);  ///< Copying not allowed
  public:
    Vdut_dut(const char* name="TOP");
    ~Vdut_dut();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vdut__Syms* symsp, bool first);
    static void _combo__TOP__dut__6(Vdut__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _initial__TOP__dut__1(Vdut__Syms* __restrict vlSymsp);
    static void _sequent__TOP__dut__4(Vdut__Syms* __restrict vlSymsp);
    static void _sequent__TOP__dut__5(Vdut__Syms* __restrict vlSymsp);
    static void _settle__TOP__dut__2(Vdut__Syms* __restrict vlSymsp);
    static void _settle__TOP__dut__3(Vdut__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
