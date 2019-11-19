// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut_dut.h"          // For This
#include "Vdut__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vdut_dut) {
    VL_CELL (VexRiscv, Vdut_VexRiscv);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vdut_dut::__Vconfigure(Vdut__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vdut_dut::~Vdut_dut() {
}

//--------------------
// Internal Methods

void Vdut_dut::_initial__TOP__dut__1(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vdut_dut::_initial__TOP__dut__1\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,95,0,3);
    VL_SIGW(__Vtemp2,95,0,3);
    VL_SIGW(__Vtemp3,95,0,3);
    // Body
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:19
    vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_re = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:56
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_re = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:126
    vlSymsp->TOP__dut.__PVT__main_soclinux_load_re = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:128
    vlSymsp->TOP__dut.__PVT__main_soclinux_reload_re = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:130
    vlSymsp->TOP__dut.__PVT__main_soclinux_en_re = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:150
    vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_re = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:229
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_re = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:528
    vlSymsp->TOP__dut.__PVT__builder_array_muxed6 = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:529
    vlSymsp->TOP__dut.__PVT__builder_array_muxed7 = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:131
    vlSymsp->TOP__dut.__PVT__main_soclinux_update_value_storage = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:137
    vlSymsp->TOP__dut.__PVT__main_soclinux_zero_pending = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:149
    vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_storage = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:228
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_storage = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:18
    vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage = 0x12345678U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:133
    vlSymsp->TOP__dut.__PVT__main_soclinux_value_status = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:320
    vlSymsp->TOP__dut.__PVT__builder_slave_sel_r = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:328
    vlSymsp->TOP__dut.__PVT__builder_interface0_bank_bus_dat_r = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:397
    vlSymsp->TOP__dut.__PVT__builder_interface1_bank_bus_dat_r = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:434
    vlSymsp->TOP__dut.__PVT__builder_interface2_bank_bus_dat_r = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:439
    vlSymsp->TOP__dut.__PVT__builder_interface3_bank_bus_dat_r = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:504
    vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1643
    __Vtemp1[0U] = 0x696e6974U;
    __Vtemp1[1U] = 0x6d5f312eU;
    __Vtemp1[2U] = 0x6d65U;
    VL_READMEM_W (true,32,1024, 0,3, __Vtemp1, vlSymsp->TOP__dut.__PVT__mem_1
		  ,0,~0);
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1663
    __Vtemp2[0U] = 0x696e6974U;
    __Vtemp2[1U] = 0x6d5f322eU;
    __Vtemp2[2U] = 0x6d65U;
    VL_READMEM_W (true,32,8388608, 0,3, __Vtemp2, vlSymsp->TOP__dut.__PVT__mem_2
		  ,0,~0);
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1683
    __Vtemp3[0U] = 0x696e6974U;
    __Vtemp3[1U] = 0x6d5f332eU;
    __Vtemp3[2U] = 0x6d65U;
    VL_READMEM_W (true,32,4096, 0,3, __Vtemp3, vlSymsp->TOP__dut.__PVT__mem_3
		  ,0,~0);
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:241
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_readable = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:211
    vlSymsp->TOP__dut.__PVT__main_uart_tx_pending = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:216
    vlSymsp->TOP__dut.__PVT__main_uart_rx_pending = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:524
    vlSymsp->TOP__dut.__PVT__builder_array_muxed2 = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:278
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:53
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status = VL_ULL(0);
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:162
    vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_ack = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:527
    vlSymsp->TOP__dut.__PVT__builder_array_muxed5 = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:304
    vlSymsp->TOP__dut.__PVT__builder_state = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1623
    VL_READMEM_Q (true,32,8192, 0,2, VL_ULL(0x6d656d2e696e6974)
		  , vlSymsp->TOP__dut.__PVT__mem,0,~0);
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:59
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp = VL_ULL(0xffffffffffffffff);
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:48
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0 = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:108
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:123
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:189
    vlSymsp->TOP__dut.__PVT__main_we = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:252
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_wrport_adr = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:289
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_wrport_adr = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:522
    vlSymsp->TOP__dut.__PVT__builder_array_muxed0 = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:58
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time = VL_ULL(0);
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:132
    vlSymsp->TOP__dut.__PVT__main_soclinux_update_value_re = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:140
    vlSymsp->TOP__dut.__PVT__main_soclinux_zero_old_trigger = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:214
    vlSymsp->TOP__dut.__PVT__main_uart_tx_old_trigger = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:219
    vlSymsp->TOP__dut.__PVT__main_uart_rx_old_trigger = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:251
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_consume = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:288
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_consume = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:139
    vlSymsp->TOP__dut.__PVT__main_soclinux_zero_clear = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:213
    vlSymsp->TOP__dut.__PVT__main_uart_tx_clear = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:223
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:305
    vlSymsp->TOP__dut.__PVT__builder_next_state = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:308
    vlSymsp->TOP__dut.__PVT__builder_shared_dat_r = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:321
    vlSymsp->TOP__dut.__PVT__builder_error = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:129
    vlSymsp->TOP__dut.__PVT__main_soclinux_en_storage = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:250
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_produce = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:287
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_produce = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:175
    vlSymsp->TOP__dut.__PVT__main_int_rst = 1U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:151
    vlSymsp->TOP__dut.__PVT__main_soclinux_value = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:227
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:24
    vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:125
    vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:127
    vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:218
    vlSymsp->TOP__dut.__PVT__main_uart_rx_clear = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:285
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0 = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:55
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage = VL_ULL(0xffffffffffffffff);
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:248
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0 = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:523
    vlSymsp->TOP__dut.__PVT__builder_array_muxed1 = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:312
    vlSymsp->TOP__dut.__PVT__builder_shared_ack = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:152
    vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:153
    vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:88
    vlSymsp->TOP__dut.__PVT__main_soclinux_rom_bus_ack = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:101
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_ack = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:116
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_ack = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:182
    vlSymsp->TOP__dut.__PVT__main_bus_ack = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:324
    vlSymsp->TOP__dut.__PVT__builder_count = 0xf4240U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:526
    vlSymsp->TOP__dut.__PVT__builder_array_muxed4 = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:319
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:525
    vlSymsp->TOP__dut.__PVT__builder_array_muxed3 = 0U;
    // INITIAL at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:318
    vlSymsp->TOP__dut.__PVT__builder_grant = 0U;
}

void Vdut_dut::_settle__TOP__dut__2(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vdut_dut::_settle__TOP__dut__2\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1157
    vlSymsp->TOP__dut.__PVT__builder_array_muxed7 = 0U;
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_fifo_out_last 
	= (1U & ((IData)(vlSymsp->TOP__dut.__PVT__memdat_2) 
		 >> 9U));
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_fifo_out_first 
	= (1U & ((IData)(vlSymsp->TOP__dut.__PVT__memdat_2) 
		 >> 8U));
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_fifo_out_last 
	= (1U & ((IData)(vlSymsp->TOP__dut.__PVT__memdat_4) 
		 >> 9U));
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_fifo_out_first 
	= (1U & ((IData)(vlSymsp->TOP__dut.__PVT__memdat_4) 
		 >> 8U));
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_fifo_out_payload_data 
	= (0xffU & (IData)(vlSymsp->TOP__dut.__PVT__memdat_2));
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_fifo_out_payload_data 
	= (0xffU & (IData)(vlSymsp->TOP__dut.__PVT__memdat_4));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_update_value0_w 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_update_value_storage;
    vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_pending_w 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_zero_pending;
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_ev_enable0_w 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_storage;
    vlSymsp->TOP__dut.__PVT__builder_csrbank4_ev_enable0_w 
	= vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_storage;
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch3_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage 
		    >> 0x18U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch2_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage 
		    >> 0x10U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch1_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage 
		    >> 8U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch0_w 
	= (0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage);
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_value3_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_value_status 
		    >> 0x18U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_value2_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_value_status 
		    >> 0x10U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_value1_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_value_status 
		    >> 8U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_value0_w 
	= (0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_value_status);
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:694
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w = 0U;
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w 
	= ((2U & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w)) 
	   | (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_pending));
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w 
	= ((1U & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w)) 
	   | ((IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_pending) 
	      << 1U));
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_source_valid 
	= vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable;
    vlSymsp->TOP__dut.__PVT__builder_csrbank4_rxempty_w 
	= (1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time7_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 0x38U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time6_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 0x30U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time5_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 0x28U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time4_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 0x20U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time3_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 0x18U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time2_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 0x10U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time1_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 8U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time0_w 
	= (0xffU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:624
    vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_ack = 0U;
    if (vlSymsp->TOP__dut.__PVT__builder_state) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_ack = 1U;
    }
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_en0_w 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_en_storage;
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:724
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_wrport_adr 
	= vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_produce;
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:756
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_wrport_adr 
	= vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_produce;
    vlSymsp->TOP__dut.__PVT__main_soclinux_zero_trigger 
	= (0U != vlSymsp->TOP__dut.__PVT__main_soclinux_value);
    vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_status_w 
	= (0U != vlSymsp->TOP__dut.__PVT__main_soclinux_value);
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_bus_errors3_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors 
		    >> 0x18U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_bus_errors2_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors 
		    >> 0x10U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_bus_errors1_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors 
		    >> 8U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_bus_errors0_w 
	= (0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors);
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_load3_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage 
		    >> 0x18U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_load2_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage 
		    >> 0x10U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_load1_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage 
		    >> 8U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_load0_w 
	= (0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage);
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload3_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage 
		    >> 0x18U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload2_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage 
		    >> 0x10U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload1_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage 
		    >> 8U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload0_w 
	= (0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage);
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_syncfifo_writable 
	= (0x10U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp7_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 0x38U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp6_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 0x30U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp5_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 0x28U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp4_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 0x20U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp3_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 0x18U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp2_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 0x10U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp1_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 8U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp0_w 
	= (0xffU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage));
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_syncfifo_writable 
	= (0x10U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0));
    vlSymsp->TOP__dut.__PVT__builder_csrbank4_txfull_w 
	= (0x10U == (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:683
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w = 0U;
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w 
	= ((2U & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w)) 
	   | (0x10U == (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0)));
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w 
	= ((1U & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w)) 
	   | (2U & ((~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable)) 
		    << 1U)));
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_syncfifo_re 
	= ((0U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0)) 
	   & ((~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_readable)) 
	      | (IData)(vlTOPp->serial_source_ready)));
    vlSymsp->TOP__dut.__PVT__builder_done = (0U == vlSymsp->TOP__dut.__PVT__builder_count);
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:851
    vlSymsp->TOP__dut.__PVT__builder_error = 0U;
    if ((0U == vlSymsp->TOP__dut.__PVT__builder_count)) {
	vlSymsp->TOP__dut.__PVT__builder_error = 1U;
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:843
    vlSymsp->TOP__dut.__PVT__builder_shared_dat_r = 
	(((((VL_NEGATE_I((IData)((1U & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel_r)))) 
	     & vlSymsp->TOP__dut.__PVT__memdat) | (
						   VL_NEGATE_I((IData)(
								       (1U 
									& ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel_r) 
									   >> 1U)))) 
						   & vlSymsp->TOP__dut.__PVT__mem_1
						   [vlSymsp->TOP__dut.__PVT__memadr])) 
	   | (VL_NEGATE_I((IData)((1U & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel_r) 
					 >> 2U)))) 
	      & vlSymsp->TOP__dut.__PVT__mem_2[vlSymsp->TOP__dut.__PVT__memadr_1])) 
	  | (VL_NEGATE_I((IData)((1U & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel_r) 
					>> 3U)))) & 
	     (((((IData)(vlSymsp->TOP__dut.__PVT__builder_interface0_bank_bus_dat_r) 
		 | (IData)(vlSymsp->TOP__dut.__PVT__builder_interface1_bank_bus_dat_r)) 
		| (IData)(vlSymsp->TOP__dut.__PVT__builder_interface2_bank_bus_dat_r)) 
	       | (IData)(vlSymsp->TOP__dut.__PVT__builder_interface3_bank_bus_dat_r)) 
	      | (IData)(vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r)))) 
	 | (VL_NEGATE_I((IData)((1U & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel_r) 
				       >> 4U)))) & 
	    vlSymsp->TOP__dut.__PVT__mem_3[vlSymsp->TOP__dut.__PVT__memadr_2]));
    if ((0U == vlSymsp->TOP__dut.__PVT__builder_count)) {
	vlSymsp->TOP__dut.__PVT__builder_shared_dat_r = 0xffffffffU;
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1102
    vlSymsp->TOP__dut.__PVT__builder_array_muxed2 = 
	((IData)(vlSymsp->TOP__dut.__PVT__builder_grant)
	  ? ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_125_)
	      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_128_)
	      : 0xfU) : 0xfU);
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1091
    vlSymsp->TOP__dut.__PVT__builder_array_muxed1 = 
	((IData)(vlSymsp->TOP__dut.__PVT__builder_grant)
	  ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_127_
	  : 0U);
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1135
    vlSymsp->TOP__dut.__PVT__builder_array_muxed5 = 
	((IData)(vlSymsp->TOP__dut.__PVT__builder_grant) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_125_));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1080
    vlSymsp->TOP__dut.__PVT__builder_array_muxed0 = 
	(0x3fffffffU & ((IData)(vlSymsp->TOP__dut.__PVT__builder_grant)
			 ? (((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_129_))
			      ? ((0xffffffe0U & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_126_) 
				 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_213_) 
				    << 2U)) : (0xfffffffcU 
					       & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_126_)) 
			    >> 2U) : ((0x3ffffff8U 
				       & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
					  >> 2U)) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_211_))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:533
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0 = 0U;
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0 
	= ((0xfffffffdU & vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0) 
	   | (((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_zero_pending) 
	       & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_storage)) 
	      << 1U));
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0 
	= ((0xfffffffeU & vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0) 
	   | (1U & (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w) 
		     & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_storage)) 
		    | (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w) 
			& (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_storage)) 
		       >> 1U))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:835
    vlSymsp->TOP__dut.__PVT__builder_shared_ack = (
						   ((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_rom_bus_ack) 
						      | (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_ack)) 
						     | (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_ack)) 
						    | (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_ack)) 
						   | (IData)(vlSymsp->TOP__dut.__PVT__main_bus_ack));
    if ((0U == vlSymsp->TOP__dut.__PVT__builder_count)) {
	vlSymsp->TOP__dut.__PVT__builder_shared_ack = 1U;
    }
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_do_read 
	= ((0U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0)) 
	   & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_syncfifo_re));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:787
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = 0U;
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = ((0x1eU 
						   & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel)) 
						  | (0U 
						     == 
						     (0xffffU 
						      & (vlSymsp->TOP__dut.__PVT__builder_array_muxed0 
							 >> 0xdU))));
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = ((0x1dU 
						   & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel)) 
						  | ((0x10000U 
						      == 
						      (0x7ffffU 
						       & (vlSymsp->TOP__dut.__PVT__builder_array_muxed0 
							  >> 0xaU))) 
						     << 1U));
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = ((0x1bU 
						   & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel)) 
						  | ((0x20U 
						      == 
						      (0x3fU 
						       & (vlSymsp->TOP__dut.__PVT__builder_array_muxed0 
							  >> 0x17U))) 
						     << 2U));
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = ((0x17U 
						   & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel)) 
						  | ((0x70U 
						      == 
						      (0x7fU 
						       & (vlSymsp->TOP__dut.__PVT__builder_array_muxed0 
							  >> 0x16U))) 
						     << 3U));
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = ((0xfU 
						   & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel)) 
						  | ((0x8000U 
						      == 
						      (0x1ffffU 
						       & (vlSymsp->TOP__dut.__PVT__builder_array_muxed0 
							  >> 0xcU))) 
						     << 4U));
    vlSymsp->TOP__dut.__PVT__main_soclinux_interface0_soc_bus_ack 
	= ((IData)(vlSymsp->TOP__dut.__PVT__builder_shared_ack) 
	   & (~ (IData)(vlSymsp->TOP__dut.__PVT__builder_grant)));
    vlSymsp->TOP__dut.__PVT__main_soclinux_interface1_soc_bus_ack 
	= ((IData)(vlSymsp->TOP__dut.__PVT__builder_shared_ack) 
	   & (IData)(vlSymsp->TOP__dut.__PVT__builder_grant));
}

void Vdut_dut::_settle__TOP__dut__3(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vdut_dut::_settle__TOP__dut__3\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1146
    vlSymsp->TOP__dut.__PVT__builder_array_muxed6 = 
	((IData)(vlSymsp->TOP__dut.__PVT__builder_grant)
	  ? ((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_129_))
	      ? ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_217_)
		  ? 7U : 2U) : 0U) : ((7U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_211_))
				       ? 7U : 2U));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1124
    vlSymsp->TOP__dut.__PVT__builder_array_muxed4 = 
	((IData)(vlSymsp->TOP__dut.__PVT__builder_grant)
	  ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_)
	  : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_STB));
    vlSymsp->TOP__dut.__PVT__builder_request = (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_) 
						 << 1U) 
						| (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_CYC));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1113
    vlSymsp->TOP__dut.__PVT__builder_array_muxed3 = 
	((IData)(vlSymsp->TOP__dut.__PVT__builder_grant)
	  ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_)
	  : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_cyc 
	= ((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3) 
	   & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel) 
	      >> 1U));
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_cyc 
	= ((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3) 
	   & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel) 
	      >> 2U));
    vlSymsp->TOP__dut.__PVT__main_bus_cyc = ((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3) 
					     & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel) 
						>> 4U));
    vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_cyc 
	= ((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3) 
	   & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel) 
	      >> 3U));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:565
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we = 0U;
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we 
	= ((0xeU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we)) 
	   | ((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_cyc) 
		& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
	       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
	      & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2)));
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we 
	= ((0xdU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we)) 
	   | (0xfffffffeU & (((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_cyc) 
				& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
			       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
			      << 1U) & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we 
	= ((0xbU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we)) 
	   | (0xfffffffcU & (((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_cyc) 
				& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
			       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
			      << 2U) & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we 
	= ((7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we)) 
	   | (0xfffffff8U & (((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_cyc) 
				& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
			       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
			      << 3U) & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:575
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we = 0U;
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we 
	= ((0xeU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we)) 
	   | ((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_cyc) 
		& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
	       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
	      & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2)));
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we 
	= ((0xdU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we)) 
	   | (0xfffffffeU & (((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_cyc) 
				& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
			       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
			      << 1U) & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we 
	= ((0xbU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we)) 
	   | (0xfffffffcU & (((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_cyc) 
				& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
			       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
			      << 2U) & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we 
	= ((7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we)) 
	   | (0xfffffff8U & (((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_cyc) 
				& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
			       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
			      << 3U) & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:649
    vlSymsp->TOP__dut.__PVT__main_we = 0U;
    vlSymsp->TOP__dut.__PVT__main_we = ((0xeU & (IData)(vlSymsp->TOP__dut.__PVT__main_we)) 
					| ((((IData)(vlSymsp->TOP__dut.__PVT__main_bus_cyc) 
					     & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
					    & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
					   & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2)));
    vlSymsp->TOP__dut.__PVT__main_we = ((0xdU & (IData)(vlSymsp->TOP__dut.__PVT__main_we)) 
					| (0xfffffffeU 
					   & (((((IData)(vlSymsp->TOP__dut.__PVT__main_bus_cyc) 
						 & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
						& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
					       << 1U) 
					      & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    vlSymsp->TOP__dut.__PVT__main_we = ((0xbU & (IData)(vlSymsp->TOP__dut.__PVT__main_we)) 
					| (0xfffffffcU 
					   & (((((IData)(vlSymsp->TOP__dut.__PVT__main_bus_cyc) 
						 & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
						& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
					       << 2U) 
					      & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    vlSymsp->TOP__dut.__PVT__main_we = ((7U & (IData)(vlSymsp->TOP__dut.__PVT__main_we)) 
					| (0xfffffff8U 
					   & (((((IData)(vlSymsp->TOP__dut.__PVT__main_bus_cyc) 
						 & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
						& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
					       << 3U) 
					      & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:598
    vlSymsp->TOP__dut.__PVT__builder_next_state = vlSymsp->TOP__dut.__PVT__builder_state;
    if (vlSymsp->TOP__dut.__PVT__builder_state) {
	vlSymsp->TOP__dut.__PVT__builder_next_state = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_cyc) 
	     & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4))) {
	    vlSymsp->TOP__dut.__PVT__builder_next_state = 1U;
	}
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:612
    vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__builder_state)))) {
	if (((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_cyc) 
	     & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4))) {
	    vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr 
		= (0x3fffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
	}
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:634
    vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__builder_state)))) {
	if (((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_cyc) 
	     & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4))) {
	    vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we 
		= vlSymsp->TOP__dut.__PVT__builder_array_muxed5;
	}
    }
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_latch_re 
	= (((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (0U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp0_re 
	= (((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (0x10U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch0_re 
	= (((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (4U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_load0_re 
	= (((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (3U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload0_re 
	= (((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (7U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_en0_re 
	= (((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (8U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_update_value0_re 
	= (((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (9U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_ev_enable0_re 
	= (((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (0x10U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__main_uart_rxtx_re = ((
						   (2U 
						    == 
						    (0x1fU 
						     & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
							>> 9U))) 
						   & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
						  & (0U 
						     == 
						     (7U 
						      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank4_ev_enable0_re 
	= (((2U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (5U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset = 
	((IData)(vlSymsp->TOP__dut.__PVT__main_int_rst) 
	 | (((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			      >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	    & (0U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:587
    vlSymsp->TOP__dut.__PVT__main_soclinux_zero_clear = 0U;
    if (((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			    >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	  & (0xfU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
	 & vlSymsp->TOP__dut.__PVT__builder_array_muxed1)) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_zero_clear = 1U;
    }
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_re 
	= (((2U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (4U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:688
    vlSymsp->TOP__dut.__PVT__main_uart_tx_clear = 0U;
    if (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_re) 
	 & vlSymsp->TOP__dut.__PVT__builder_array_muxed1)) {
	vlSymsp->TOP__dut.__PVT__main_uart_tx_clear = 1U;
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:699
    vlSymsp->TOP__dut.__PVT__main_uart_rx_clear = 0U;
    if (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_re) 
	 & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
	    >> 1U))) {
	vlSymsp->TOP__dut.__PVT__main_uart_rx_clear = 1U;
    }
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_syncfifo_re 
	= ((0U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0)) 
	   & ((~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable)) 
	      | (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_clear)));
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_do_read 
	= ((0U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0)) 
	   & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_syncfifo_re));
}

VL_INLINE_OPT void Vdut_dut::_sequent__TOP__dut__4(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vdut_dut::_sequent__TOP__dut__4\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvlsb__mem_1__v0,4,0);
    VL_SIG8(__Vdlyvval__mem_1__v0,7,0);
    VL_SIG8(__Vdlyvset__mem_1__v0,0,0);
    VL_SIG8(__Vdlyvlsb__mem_1__v1,4,0);
    VL_SIG8(__Vdlyvval__mem_1__v1,7,0);
    VL_SIG8(__Vdlyvset__mem_1__v1,0,0);
    VL_SIG8(__Vdlyvlsb__mem_1__v2,4,0);
    VL_SIG8(__Vdlyvval__mem_1__v2,7,0);
    VL_SIG8(__Vdlyvset__mem_1__v2,0,0);
    VL_SIG8(__Vdlyvlsb__mem_1__v3,4,0);
    VL_SIG8(__Vdlyvval__mem_1__v3,7,0);
    VL_SIG8(__Vdlyvset__mem_1__v3,0,0);
    VL_SIG8(__Vdlyvlsb__mem_2__v0,4,0);
    VL_SIG8(__Vdlyvval__mem_2__v0,7,0);
    VL_SIG8(__Vdlyvset__mem_2__v0,0,0);
    VL_SIG8(__Vdlyvlsb__mem_2__v1,4,0);
    VL_SIG8(__Vdlyvval__mem_2__v1,7,0);
    VL_SIG8(__Vdlyvset__mem_2__v1,0,0);
    VL_SIG8(__Vdlyvlsb__mem_2__v2,4,0);
    VL_SIG8(__Vdlyvval__mem_2__v2,7,0);
    VL_SIG8(__Vdlyvset__mem_2__v2,0,0);
    VL_SIG8(__Vdlyvlsb__mem_2__v3,4,0);
    VL_SIG8(__Vdlyvval__mem_2__v3,7,0);
    VL_SIG8(__Vdlyvset__mem_2__v3,0,0);
    VL_SIG8(__Vdlyvlsb__mem_3__v0,4,0);
    VL_SIG8(__Vdlyvval__mem_3__v0,7,0);
    VL_SIG8(__Vdlyvset__mem_3__v0,0,0);
    VL_SIG8(__Vdlyvlsb__mem_3__v1,4,0);
    VL_SIG8(__Vdlyvval__mem_3__v1,7,0);
    VL_SIG8(__Vdlyvset__mem_3__v1,0,0);
    VL_SIG8(__Vdlyvlsb__mem_3__v2,4,0);
    VL_SIG8(__Vdlyvval__mem_3__v2,7,0);
    VL_SIG8(__Vdlyvset__mem_3__v2,0,0);
    VL_SIG8(__Vdlyvlsb__mem_3__v3,4,0);
    VL_SIG8(__Vdlyvval__mem_3__v3,7,0);
    VL_SIG8(__Vdlyvset__mem_3__v3,0,0);
    VL_SIG8(__Vdlyvdim0__storage__v0,3,0);
    VL_SIG8(__Vdlyvset__storage__v0,0,0);
    VL_SIG8(__Vdlyvdim0__storage_1__v0,3,0);
    VL_SIG8(__Vdlyvset__storage_1__v0,0,0);
    VL_SIG16(__Vdlyvdim0__mem_1__v0,9,0);
    VL_SIG16(__Vdlyvdim0__mem_1__v1,9,0);
    VL_SIG16(__Vdlyvdim0__mem_1__v2,9,0);
    VL_SIG16(__Vdlyvdim0__mem_1__v3,9,0);
    VL_SIG16(__Vdlyvdim0__mem_3__v0,11,0);
    VL_SIG16(__Vdlyvdim0__mem_3__v1,11,0);
    VL_SIG16(__Vdlyvdim0__mem_3__v2,11,0);
    VL_SIG16(__Vdlyvdim0__mem_3__v3,11,0);
    VL_SIG16(__Vdlyvval__storage__v0,9,0);
    VL_SIG16(__Vdlyvval__storage_1__v0,9,0);
    VL_SIG(__Vdlyvdim0__mem_2__v0,22,0);
    VL_SIG(__Vdlyvdim0__mem_2__v1,22,0);
    VL_SIG(__Vdlyvdim0__mem_2__v2,22,0);
    VL_SIG(__Vdlyvdim0__mem_2__v3,22,0);
    // Body
    __Vdlyvset__storage_1__v0 = 0U;
    __Vdlyvset__storage__v0 = 0U;
    __Vdlyvset__mem_1__v0 = 0U;
    __Vdlyvset__mem_1__v1 = 0U;
    __Vdlyvset__mem_1__v2 = 0U;
    __Vdlyvset__mem_1__v3 = 0U;
    __Vdlyvset__mem_2__v0 = 0U;
    __Vdlyvset__mem_2__v1 = 0U;
    __Vdlyvset__mem_2__v2 = 0U;
    __Vdlyvset__mem_2__v3 = 0U;
    __Vdlyvset__mem_3__v0 = 0U;
    __Vdlyvset__mem_3__v1 = 0U;
    __Vdlyvset__mem_3__v2 = 0U;
    __Vdlyvset__mem_3__v3 = 0U;
    vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time;
    vlSymsp->TOP__dut.__Vdly__main_soclinux_zero_old_trigger 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_zero_old_trigger;
    vlSymsp->TOP__dut.__Vdly__main_uart_tx_old_trigger 
	= vlSymsp->TOP__dut.__PVT__main_uart_tx_old_trigger;
    vlSymsp->TOP__dut.__Vdly__main_uart_rx_old_trigger 
	= vlSymsp->TOP__dut.__PVT__main_uart_rx_old_trigger;
    vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_consume 
	= vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_consume;
    vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_consume 
	= vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_consume;
    vlSymsp->TOP__dut.__Vdly__main_soclinux_update_value_re 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_update_value_re;
    vlSymsp->TOP__dut.__Vdly__main_soclinux_en_storage 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_en_storage;
    vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_produce 
	= vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_produce;
    vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_produce 
	= vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_produce;
    vlSymsp->TOP__dut.__Vdly__main_soclinux_value = vlSymsp->TOP__dut.__PVT__main_soclinux_value;
    vlSymsp->TOP__dut.__Vdly__main_soclinux_ctrl_bus_errors 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors;
    vlSymsp->TOP__dut.__Vdly__main_soclinux_load_storage 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage;
    vlSymsp->TOP__dut.__Vdly__main_soclinux_reload_storage 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage;
    vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_level0 
	= vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0;
    vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage;
    vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_level0 
	= vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0;
    vlSymsp->TOP__dut.__Vdly__main_soclinux_rom_bus_ack 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_rom_bus_ack;
    vlSymsp->TOP__dut.__Vdly__main_soclinux_sram_bus_ack 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_ack;
    vlSymsp->TOP__dut.__Vdly__main_soclinux_main_ram_bus_ack 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_ack;
    vlSymsp->TOP__dut.__Vdly__main_bus_ack = vlSymsp->TOP__dut.__PVT__main_bus_ack;
    vlSymsp->TOP__dut.__Vdly__builder_count = vlSymsp->TOP__dut.__PVT__builder_count;
    vlSymsp->TOP__dut.__Vdly__builder_grant = vlSymsp->TOP__dut.__PVT__builder_grant;
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1174
    if (VL_UNLIKELY((((4U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
				       >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
		     & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	VL_FINISH_MT("/home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v",1219,"");
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1691
    vlSymsp->TOP__dut.__PVT__memdat_1 = vlSymsp->TOP__dut.__PVT__storage
	[vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_wrport_adr];
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1708
    vlSymsp->TOP__dut.__PVT__memdat_3 = vlSymsp->TOP__dut.__PVT__storage_1
	[vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_wrport_adr];
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1708
    if (((IData)(vlTOPp->serial_sink_valid) & (0x10U 
					       != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0)))) {
	__Vdlyvval__storage_1__v0 = vlTOPp->serial_sink_data;
	__Vdlyvset__storage_1__v0 = 1U;
	__Vdlyvdim0__storage_1__v0 = vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_wrport_adr;
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1713
    if (vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_do_read) {
	vlSymsp->TOP__dut.__PVT__memdat_4 = vlSymsp->TOP__dut.__PVT__storage_1
	    [vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_consume];
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1691
    if (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_rxtx_re) 
	 & (0x10U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0)))) {
	__Vdlyvval__storage__v0 = (0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1);
	__Vdlyvset__storage__v0 = 1U;
	__Vdlyvdim0__storage__v0 = vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_wrport_adr;
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1696
    if (vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_do_read) {
	vlSymsp->TOP__dut.__PVT__memdat_2 = vlSymsp->TOP__dut.__PVT__storage
	    [vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_consume];
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1630
    vlSymsp->TOP__dut.__PVT__memadr = (0x3ffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1650
    vlSymsp->TOP__dut.__PVT__memadr_1 = (0x7fffffU 
					 & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1670
    vlSymsp->TOP__dut.__PVT__memadr_2 = (0xfffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1617
    vlSymsp->TOP__dut.__PVT__memdat = vlSymsp->TOP__dut.__PVT__mem
	[(0x1fffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0)];
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1630
    if ((1U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we))) {
	__Vdlyvval__mem_1__v0 = (0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1);
	__Vdlyvset__mem_1__v0 = 1U;
	__Vdlyvlsb__mem_1__v0 = 0U;
	__Vdlyvdim0__mem_1__v0 = (0x3ffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    }
    if ((2U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we))) {
	__Vdlyvval__mem_1__v1 = (0xffU & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
					  >> 8U));
	__Vdlyvset__mem_1__v1 = 1U;
	__Vdlyvlsb__mem_1__v1 = 8U;
	__Vdlyvdim0__mem_1__v1 = (0x3ffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    }
    if ((4U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we))) {
	__Vdlyvval__mem_1__v2 = (0xffU & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
					  >> 0x10U));
	__Vdlyvset__mem_1__v2 = 1U;
	__Vdlyvlsb__mem_1__v2 = 0x10U;
	__Vdlyvdim0__mem_1__v2 = (0x3ffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    }
    if ((8U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we))) {
	__Vdlyvval__mem_1__v3 = (0xffU & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
					  >> 0x18U));
	__Vdlyvset__mem_1__v3 = 1U;
	__Vdlyvlsb__mem_1__v3 = 0x18U;
	__Vdlyvdim0__mem_1__v3 = (0x3ffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1650
    if ((1U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we))) {
	__Vdlyvval__mem_2__v0 = (0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1);
	__Vdlyvset__mem_2__v0 = 1U;
	__Vdlyvlsb__mem_2__v0 = 0U;
	__Vdlyvdim0__mem_2__v0 = (0x7fffffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    }
    if ((2U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we))) {
	__Vdlyvval__mem_2__v1 = (0xffU & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
					  >> 8U));
	__Vdlyvset__mem_2__v1 = 1U;
	__Vdlyvlsb__mem_2__v1 = 8U;
	__Vdlyvdim0__mem_2__v1 = (0x7fffffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    }
    if ((4U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we))) {
	__Vdlyvval__mem_2__v2 = (0xffU & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
					  >> 0x10U));
	__Vdlyvset__mem_2__v2 = 1U;
	__Vdlyvlsb__mem_2__v2 = 0x10U;
	__Vdlyvdim0__mem_2__v2 = (0x7fffffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    }
    if ((8U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we))) {
	__Vdlyvval__mem_2__v3 = (0xffU & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
					  >> 0x18U));
	__Vdlyvset__mem_2__v3 = 1U;
	__Vdlyvlsb__mem_2__v3 = 0x18U;
	__Vdlyvdim0__mem_2__v3 = (0x7fffffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1670
    if ((1U & (IData)(vlSymsp->TOP__dut.__PVT__main_we))) {
	__Vdlyvval__mem_3__v0 = (0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1);
	__Vdlyvset__mem_3__v0 = 1U;
	__Vdlyvlsb__mem_3__v0 = 0U;
	__Vdlyvdim0__mem_3__v0 = (0xfffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    }
    if ((2U & (IData)(vlSymsp->TOP__dut.__PVT__main_we))) {
	__Vdlyvval__mem_3__v1 = (0xffU & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
					  >> 8U));
	__Vdlyvset__mem_3__v1 = 1U;
	__Vdlyvlsb__mem_3__v1 = 8U;
	__Vdlyvdim0__mem_3__v1 = (0xfffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    }
    if ((4U & (IData)(vlSymsp->TOP__dut.__PVT__main_we))) {
	__Vdlyvval__mem_3__v2 = (0xffU & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
					  >> 0x10U));
	__Vdlyvset__mem_3__v2 = 1U;
	__Vdlyvlsb__mem_3__v2 = 0x10U;
	__Vdlyvdim0__mem_3__v2 = (0xfffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    }
    if ((8U & (IData)(vlSymsp->TOP__dut.__PVT__main_we))) {
	__Vdlyvval__mem_3__v3 = (0xffU & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
					  >> 0x18U));
	__Vdlyvset__mem_3__v3 = 1U;
	__Vdlyvlsb__mem_3__v3 = 0x18U;
	__Vdlyvdim0__mem_3__v3 = (0xfffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
    }
    // ALWAYSPOST at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1709
    if (__Vdlyvset__storage_1__v0) {
	vlSymsp->TOP__dut.__PVT__storage_1[__Vdlyvdim0__storage_1__v0] 
	    = __Vdlyvval__storage_1__v0;
    }
    // ALWAYSPOST at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1692
    if (__Vdlyvset__storage__v0) {
	vlSymsp->TOP__dut.__PVT__storage[__Vdlyvdim0__storage__v0] 
	    = __Vdlyvval__storage__v0;
    }
    // ALWAYSPOST at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1631
    if (__Vdlyvset__mem_1__v0) {
	vlSymsp->TOP__dut.__PVT__mem_1[__Vdlyvdim0__mem_1__v0] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem_1__v0))) 
		& vlSymsp->TOP__dut.__PVT__mem_1[__Vdlyvdim0__mem_1__v0]) 
	       | ((IData)(__Vdlyvval__mem_1__v0) << (IData)(__Vdlyvlsb__mem_1__v0)));
    }
    if (__Vdlyvset__mem_1__v1) {
	vlSymsp->TOP__dut.__PVT__mem_1[__Vdlyvdim0__mem_1__v1] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem_1__v1))) 
		& vlSymsp->TOP__dut.__PVT__mem_1[__Vdlyvdim0__mem_1__v1]) 
	       | ((IData)(__Vdlyvval__mem_1__v1) << (IData)(__Vdlyvlsb__mem_1__v1)));
    }
    if (__Vdlyvset__mem_1__v2) {
	vlSymsp->TOP__dut.__PVT__mem_1[__Vdlyvdim0__mem_1__v2] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem_1__v2))) 
		& vlSymsp->TOP__dut.__PVT__mem_1[__Vdlyvdim0__mem_1__v2]) 
	       | ((IData)(__Vdlyvval__mem_1__v2) << (IData)(__Vdlyvlsb__mem_1__v2)));
    }
    if (__Vdlyvset__mem_1__v3) {
	vlSymsp->TOP__dut.__PVT__mem_1[__Vdlyvdim0__mem_1__v3] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem_1__v3))) 
		& vlSymsp->TOP__dut.__PVT__mem_1[__Vdlyvdim0__mem_1__v3]) 
	       | ((IData)(__Vdlyvval__mem_1__v3) << (IData)(__Vdlyvlsb__mem_1__v3)));
    }
    // ALWAYSPOST at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1651
    if (__Vdlyvset__mem_2__v0) {
	vlSymsp->TOP__dut.__PVT__mem_2[__Vdlyvdim0__mem_2__v0] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem_2__v0))) 
		& vlSymsp->TOP__dut.__PVT__mem_2[__Vdlyvdim0__mem_2__v0]) 
	       | ((IData)(__Vdlyvval__mem_2__v0) << (IData)(__Vdlyvlsb__mem_2__v0)));
    }
    if (__Vdlyvset__mem_2__v1) {
	vlSymsp->TOP__dut.__PVT__mem_2[__Vdlyvdim0__mem_2__v1] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem_2__v1))) 
		& vlSymsp->TOP__dut.__PVT__mem_2[__Vdlyvdim0__mem_2__v1]) 
	       | ((IData)(__Vdlyvval__mem_2__v1) << (IData)(__Vdlyvlsb__mem_2__v1)));
    }
    if (__Vdlyvset__mem_2__v2) {
	vlSymsp->TOP__dut.__PVT__mem_2[__Vdlyvdim0__mem_2__v2] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem_2__v2))) 
		& vlSymsp->TOP__dut.__PVT__mem_2[__Vdlyvdim0__mem_2__v2]) 
	       | ((IData)(__Vdlyvval__mem_2__v2) << (IData)(__Vdlyvlsb__mem_2__v2)));
    }
    if (__Vdlyvset__mem_2__v3) {
	vlSymsp->TOP__dut.__PVT__mem_2[__Vdlyvdim0__mem_2__v3] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem_2__v3))) 
		& vlSymsp->TOP__dut.__PVT__mem_2[__Vdlyvdim0__mem_2__v3]) 
	       | ((IData)(__Vdlyvval__mem_2__v3) << (IData)(__Vdlyvlsb__mem_2__v3)));
    }
    // ALWAYSPOST at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1671
    if (__Vdlyvset__mem_3__v0) {
	vlSymsp->TOP__dut.__PVT__mem_3[__Vdlyvdim0__mem_3__v0] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem_3__v0))) 
		& vlSymsp->TOP__dut.__PVT__mem_3[__Vdlyvdim0__mem_3__v0]) 
	       | ((IData)(__Vdlyvval__mem_3__v0) << (IData)(__Vdlyvlsb__mem_3__v0)));
    }
    if (__Vdlyvset__mem_3__v1) {
	vlSymsp->TOP__dut.__PVT__mem_3[__Vdlyvdim0__mem_3__v1] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem_3__v1))) 
		& vlSymsp->TOP__dut.__PVT__mem_3[__Vdlyvdim0__mem_3__v1]) 
	       | ((IData)(__Vdlyvval__mem_3__v1) << (IData)(__Vdlyvlsb__mem_3__v1)));
    }
    if (__Vdlyvset__mem_3__v2) {
	vlSymsp->TOP__dut.__PVT__mem_3[__Vdlyvdim0__mem_3__v2] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem_3__v2))) 
		& vlSymsp->TOP__dut.__PVT__mem_3[__Vdlyvdim0__mem_3__v2]) 
	       | ((IData)(__Vdlyvval__mem_3__v2) << (IData)(__Vdlyvlsb__mem_3__v2)));
    }
    if (__Vdlyvset__mem_3__v3) {
	vlSymsp->TOP__dut.__PVT__mem_3[__Vdlyvdim0__mem_3__v3] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem_3__v3))) 
		& vlSymsp->TOP__dut.__PVT__mem_3[__Vdlyvdim0__mem_3__v3]) 
	       | ((IData)(__Vdlyvval__mem_3__v3) << (IData)(__Vdlyvlsb__mem_3__v3)));
    }
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_fifo_out_last 
	= (1U & ((IData)(vlSymsp->TOP__dut.__PVT__memdat_4) 
		 >> 9U));
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_fifo_out_first 
	= (1U & ((IData)(vlSymsp->TOP__dut.__PVT__memdat_4) 
		 >> 8U));
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_fifo_out_last 
	= (1U & ((IData)(vlSymsp->TOP__dut.__PVT__memdat_2) 
		 >> 9U));
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_fifo_out_first 
	= (1U & ((IData)(vlSymsp->TOP__dut.__PVT__memdat_2) 
		 >> 8U));
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_fifo_out_payload_data 
	= (0xffU & (IData)(vlSymsp->TOP__dut.__PVT__memdat_2));
}

VL_INLINE_OPT void Vdut_dut::_sequent__TOP__dut__5(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vdut_dut::_sequent__TOP__dut__5\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1174
    if ((0xffffffffU != vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors)) {
	if (vlSymsp->TOP__dut.__PVT__builder_error) {
	    vlSymsp->TOP__dut.__Vdly__main_soclinux_ctrl_bus_errors 
		= ((IData)(1U) + vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors);
	}
    }
    vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time 
	= (VL_ULL(1) + vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time);
    if (vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_latch_re) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
	    = vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time;
    }
    if (vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_latch_re) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp 
	    = vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage;
    }
    vlSymsp->TOP__dut.__Vdly__main_soclinux_rom_bus_ack = 0U;
    if (((((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3) 
	   & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel)) 
	  & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
	 & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_rom_bus_ack)))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_rom_bus_ack = 1U;
    }
    vlSymsp->TOP__dut.__Vdly__main_soclinux_sram_bus_ack = 0U;
    if ((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_cyc) 
	  & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
	 & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_ack)))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_sram_bus_ack = 1U;
    }
    vlSymsp->TOP__dut.__Vdly__main_soclinux_main_ram_bus_ack = 0U;
    if ((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_cyc) 
	  & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
	 & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_ack)))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_main_ram_bus_ack = 1U;
    }
    vlSymsp->TOP__dut.__Vdly__main_soclinux_value = 
	((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_en_storage)
	  ? ((0U == vlSymsp->TOP__dut.__PVT__main_soclinux_value)
	      ? vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage
	      : (vlSymsp->TOP__dut.__PVT__main_soclinux_value 
		 - (IData)(1U))) : vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage);
    if (vlSymsp->TOP__dut.__PVT__main_soclinux_update_value_re) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_value_status 
	    = vlSymsp->TOP__dut.__PVT__main_soclinux_value;
    }
    if (vlSymsp->TOP__dut.__PVT__main_soclinux_zero_clear) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_zero_pending = 0U;
    }
    vlSymsp->TOP__dut.__Vdly__main_soclinux_zero_old_trigger 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_zero_trigger;
    if (((~ (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_zero_trigger)) 
	 & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_zero_old_trigger))) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_zero_pending = 1U;
    }
    vlSymsp->TOP__dut.__PVT__builder_state = vlSymsp->TOP__dut.__PVT__builder_next_state;
    vlSymsp->TOP__dut.__Vdly__main_bus_ack = 0U;
    if ((((IData)(vlSymsp->TOP__dut.__PVT__main_bus_cyc) 
	  & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
	 & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_bus_ack)))) {
	vlSymsp->TOP__dut.__Vdly__main_bus_ack = 1U;
    }
    if (vlSymsp->TOP__dut.__PVT__main_uart_tx_clear) {
	vlSymsp->TOP__dut.__PVT__main_uart_tx_pending = 0U;
    }
    vlSymsp->TOP__dut.__Vdly__main_uart_tx_old_trigger 
	= (1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_syncfifo_writable)));
    if (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_syncfifo_writable) 
	 & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_old_trigger))) {
	vlSymsp->TOP__dut.__PVT__main_uart_tx_pending = 1U;
    }
    if (vlSymsp->TOP__dut.__PVT__main_uart_rx_clear) {
	vlSymsp->TOP__dut.__PVT__main_uart_rx_pending = 0U;
    }
    vlSymsp->TOP__dut.__Vdly__main_uart_rx_old_trigger 
	= (1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_source_valid)));
    if (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_source_valid) 
	 & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_old_trigger))) {
	vlSymsp->TOP__dut.__PVT__main_uart_rx_pending = 1U;
    }
    if (vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_syncfifo_re) {
	vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_readable = 1U;
    } else {
	if (vlTOPp->serial_source_ready) {
	    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_readable = 0U;
	}
    }
    if (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_rxtx_re) 
	 & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_syncfifo_writable))) {
	vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_produce 
	    = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_produce)));
    }
    if (vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_do_read) {
	vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_consume 
	    = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_consume)));
    }
    if (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_rxtx_re) 
	 & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_syncfifo_writable))) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_do_read)))) {
	    vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_level0 
		= (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0)));
	}
    } else {
	if (vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_do_read) {
	    vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_level0 
		= (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0) 
			    - (IData)(1U)));
	}
    }
    if (vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_syncfifo_re) {
	vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable = 1U;
    } else {
	if (vlSymsp->TOP__dut.__PVT__main_uart_rx_clear) {
	    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable = 0U;
	}
    }
    if (((IData)(vlTOPp->serial_sink_valid) & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_syncfifo_writable))) {
	vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_produce 
	    = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_produce)));
    }
    if (vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_do_read) {
	vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_consume 
	    = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_consume)));
    }
    if (((IData)(vlTOPp->serial_sink_valid) & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_syncfifo_writable))) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_do_read)))) {
	    vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_level0 
		= (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0)));
	}
    } else {
	if (vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_do_read) {
	    vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_level0 
		= (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0) 
			    - (IData)(1U)));
	}
    }
    if (vlSymsp->TOP__dut.__PVT__builder_grant) {
	if (vlSymsp->TOP__dut.__PVT__builder_grant) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__dut.__PVT__builder_request) 
			  >> 1U)))) {
		if ((1U & (IData)(vlSymsp->TOP__dut.__PVT__builder_request))) {
		    vlSymsp->TOP__dut.__Vdly__builder_grant = 0U;
		}
	    }
	}
    } else {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__builder_request)))) {
	    if ((2U & (IData)(vlSymsp->TOP__dut.__PVT__builder_request))) {
		vlSymsp->TOP__dut.__Vdly__builder_grant = 1U;
	    }
	}
    }
    vlSymsp->TOP__dut.__PVT__builder_slave_sel_r = vlSymsp->TOP__dut.__PVT__builder_slave_sel;
    if ((((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4) 
	  & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3)) 
	 & (~ (IData)(vlSymsp->TOP__dut.__PVT__builder_shared_ack)))) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__builder_done)))) {
	    vlSymsp->TOP__dut.__Vdly__builder_count 
		= (0xfffffU & (vlSymsp->TOP__dut.__PVT__builder_count 
			       - (IData)(1U)));
	}
    } else {
	vlSymsp->TOP__dut.__Vdly__builder_count = 0xf4240U;
    }
    vlSymsp->TOP__dut.__PVT__builder_interface0_bank_bus_dat_r = 0U;
    if ((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			 >> 9U)))) {
	if (((((((((0U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))) 
		   | (1U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		  | (2U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		 | (3U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		| (4U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
	       | (5U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
	      | (6U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
	     | (7U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	    vlSymsp->TOP__dut.__PVT__builder_interface0_bank_bus_dat_r 
		= ((0U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
		    ? 0U : ((1U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
			     ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time7_w)
			     : ((2U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
				 ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time6_w)
				 : ((3U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
				     ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time5_w)
				     : ((4U == (0x1fU 
						& (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
					 ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time4_w)
					 : ((5U == 
					     (0x1fU 
					      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
					     ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time3_w)
					     : ((6U 
						 == 
						 (0x1fU 
						  & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
						 ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time2_w)
						 : (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time1_w))))))));
	} else {
	    if (((((((((8U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))) 
		       | (9U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		      | (0xaU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		     | (0xbU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		    | (0xcU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		   | (0xdU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		  | (0xeU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		 | (0xfU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
		vlSymsp->TOP__dut.__PVT__builder_interface0_bank_bus_dat_r 
		    = ((8U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
		        ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time0_w)
		        : ((9U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
			    ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp7_w)
			    : ((0xaU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
			        ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp6_w)
			        : ((0xbU == (0x1fU 
					     & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
				    ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp5_w)
				    : ((0xcU == (0x1fU 
						 & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
				        ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp4_w)
				        : ((0xdU == 
					    (0x1fU 
					     & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
					    ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp3_w)
					    : ((0xeU 
						== 
						(0x1fU 
						 & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
					        ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp2_w)
					        : (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp1_w))))))));
	    } else {
		if ((0x10U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) {
		    vlSymsp->TOP__dut.__PVT__builder_interface0_bank_bus_dat_r 
			= vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp0_w;
		}
	    }
	}
    }
    if ((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (9U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage 
	    = ((VL_ULL(0xffffffffffffff) & vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage) 
	       | ((QData)((IData)((0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1))) 
		  << 0x38U));
    }
    if ((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (0xaU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage 
	    = ((VL_ULL(0xff00ffffffffffff) & vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage) 
	       | ((QData)((IData)((0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1))) 
		  << 0x30U));
    }
    if ((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (0xbU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage 
	    = ((VL_ULL(0xffff00ffffffffff) & vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage) 
	       | ((QData)((IData)((0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1))) 
		  << 0x28U));
    }
    if ((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (0xcU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage 
	    = ((VL_ULL(0xffffff00ffffffff) & vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage) 
	       | ((QData)((IData)((0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1))) 
		  << 0x20U));
    }
    if ((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (0xdU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage 
	    = ((VL_ULL(0xffffffff00ffffff) & vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage) 
	       | ((QData)((IData)((0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1))) 
		  << 0x18U));
    }
    if ((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (0xeU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage 
	    = ((VL_ULL(0xffffffffff00ffff) & vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage) 
	       | ((QData)((IData)((0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1))) 
		  << 0x10U));
    }
    if ((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (0xfU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage 
	    = ((VL_ULL(0xffffffffffff00ff) & vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage) 
	       | ((QData)((IData)((0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1))) 
		  << 8U));
    }
    if (vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp0_re) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage 
	    = ((VL_ULL(0xffffffffffffff00) & vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage) 
	       | (IData)((IData)((0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1))));
    }
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_re 
	= vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp0_re;
    vlSymsp->TOP__dut.__PVT__builder_interface1_bank_bus_dat_r = 0U;
    if ((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			 >> 9U)))) {
	if (((((((((0U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))) 
		   | (1U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		  | (2U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		 | (3U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		| (4U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
	       | (5U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
	      | (6U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
	     | (7U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	    vlSymsp->TOP__dut.__PVT__builder_interface1_bank_bus_dat_r 
		= ((0U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
		    ? 0U : ((1U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
			     ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch3_w)
			     : ((2U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
				 ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch2_w)
				 : ((3U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
				     ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch1_w)
				     : ((4U == (0xfU 
						& (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
					 ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch0_w)
					 : ((5U == 
					     (0xfU 
					      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
					     ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank1_bus_errors3_w)
					     : ((6U 
						 == 
						 (0xfU 
						  & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
						 ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank1_bus_errors2_w)
						 : (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank1_bus_errors1_w))))))));
	} else {
	    if ((8U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) {
		vlSymsp->TOP__dut.__PVT__builder_interface1_bank_bus_dat_r 
		    = vlSymsp->TOP__dut.__PVT__builder_csrbank1_bus_errors0_w;
	    }
	}
    }
    if ((((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (1U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage 
	    = ((0xffffffU & vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage) 
	       | (0xff000000U & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
				 << 0x18U)));
    }
    if ((((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (2U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage 
	    = ((0xff00ffffU & vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage) 
	       | (0xff0000U & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
			       << 0x10U)));
    }
    if ((((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (3U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage 
	    = ((0xffff00ffU & vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage) 
	       | (0xff00U & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
			     << 8U)));
    }
    if (vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch0_re) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage 
	    = ((0xffffff00U & vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage) 
	       | (0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1));
    }
    vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_re 
	= vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch0_re;
    vlSymsp->TOP__dut.__PVT__builder_interface2_bank_bus_dat_r = 0U;
    if ((4U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			 >> 9U)))) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) {
	    vlSymsp->TOP__dut.__PVT__builder_interface2_bank_bus_dat_r = 0U;
	}
    }
    vlSymsp->TOP__dut.__PVT__builder_interface3_bank_bus_dat_r = 0U;
    if ((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			 >> 9U)))) {
	if (((((((((0U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))) 
		   | (1U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		  | (2U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		 | (3U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		| (4U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
	       | (5U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
	      | (6U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
	     | (7U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	    vlSymsp->TOP__dut.__PVT__builder_interface3_bank_bus_dat_r 
		= ((0U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
		    ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_load3_w)
		    : ((1U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
		        ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_load2_w)
		        : ((2U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
			    ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_load1_w)
			    : ((3U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
			        ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_load0_w)
			        : ((4U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
				    ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload3_w)
				    : ((5U == (0x1fU 
					       & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
				        ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload2_w)
				        : ((6U == (0x1fU 
						   & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
					    ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload1_w)
					    : (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload0_w))))))));
	} else {
	    if (((((((((8U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))) 
		       | (9U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		      | (0xaU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		     | (0xbU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		    | (0xcU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		   | (0xdU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		  | (0xeU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
		 | (0xfU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
		vlSymsp->TOP__dut.__PVT__builder_interface3_bank_bus_dat_r 
		    = ((8U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
		        ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_en0_w)
		        : ((9U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
			    ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_update_value0_w)
			    : ((0xaU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
			        ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_value3_w)
			        : ((0xbU == (0x1fU 
					     & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
				    ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_value2_w)
				    : ((0xcU == (0x1fU 
						 & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
				        ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_value1_w)
				        : ((0xdU == 
					    (0x1fU 
					     & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
					    ? (IData)(vlSymsp->TOP__dut.__PVT__builder_csrbank3_value0_w)
					    : ((0xeU 
						== 
						(0x1fU 
						 & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))
					        ? (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_status_w)
					        : (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_pending_w))))))));
	    } else {
		if ((0x10U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) {
		    vlSymsp->TOP__dut.__PVT__builder_interface3_bank_bus_dat_r 
			= vlSymsp->TOP__dut.__PVT__builder_csrbank3_ev_enable0_w;
		}
	    }
	}
    }
    if ((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (0U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_load_storage 
	    = ((0xffffffU & vlSymsp->TOP__dut.__Vdly__main_soclinux_load_storage) 
	       | (0xff000000U & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
				 << 0x18U)));
    }
    if ((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (1U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_load_storage 
	    = ((0xff00ffffU & vlSymsp->TOP__dut.__Vdly__main_soclinux_load_storage) 
	       | (0xff0000U & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
			       << 0x10U)));
    }
    if ((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (2U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_load_storage 
	    = ((0xffff00ffU & vlSymsp->TOP__dut.__Vdly__main_soclinux_load_storage) 
	       | (0xff00U & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
			     << 8U)));
    }
    if (vlSymsp->TOP__dut.__PVT__builder_csrbank3_load0_re) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_load_storage 
	    = ((0xffffff00U & vlSymsp->TOP__dut.__Vdly__main_soclinux_load_storage) 
	       | (0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1));
    }
    vlSymsp->TOP__dut.__PVT__main_soclinux_load_re 
	= vlSymsp->TOP__dut.__PVT__builder_csrbank3_load0_re;
    if ((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (4U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_reload_storage 
	    = ((0xffffffU & vlSymsp->TOP__dut.__Vdly__main_soclinux_reload_storage) 
	       | (0xff000000U & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
				 << 0x18U)));
    }
    if ((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (5U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_reload_storage 
	    = ((0xff00ffffU & vlSymsp->TOP__dut.__Vdly__main_soclinux_reload_storage) 
	       | (0xff0000U & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
			       << 0x10U)));
    }
    if ((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			   >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	 & (6U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_reload_storage 
	    = ((0xffff00ffU & vlSymsp->TOP__dut.__Vdly__main_soclinux_reload_storage) 
	       | (0xff00U & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
			     << 8U)));
    }
    if (vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload0_re) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_reload_storage 
	    = ((0xffffff00U & vlSymsp->TOP__dut.__Vdly__main_soclinux_reload_storage) 
	       | (0xffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed1));
    }
    vlSymsp->TOP__dut.__PVT__main_soclinux_reload_re 
	= vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload0_re;
    if (vlSymsp->TOP__dut.__PVT__builder_csrbank3_en0_re) {
	vlSymsp->TOP__dut.__Vdly__main_soclinux_en_storage 
	    = (1U & vlSymsp->TOP__dut.__PVT__builder_array_muxed1);
    }
    vlSymsp->TOP__dut.__PVT__main_soclinux_en_re = vlSymsp->TOP__dut.__PVT__builder_csrbank3_en0_re;
    if (vlSymsp->TOP__dut.__PVT__builder_csrbank3_update_value0_re) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_update_value_storage 
	    = (1U & vlSymsp->TOP__dut.__PVT__builder_array_muxed1);
    }
    vlSymsp->TOP__dut.__Vdly__main_soclinux_update_value_re 
	= vlSymsp->TOP__dut.__PVT__builder_csrbank3_update_value0_re;
    if (vlSymsp->TOP__dut.__PVT__builder_csrbank3_ev_enable0_re) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_storage 
	    = (1U & vlSymsp->TOP__dut.__PVT__builder_array_muxed1);
    }
    vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_re 
	= vlSymsp->TOP__dut.__PVT__builder_csrbank3_ev_enable0_re;
    vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r = 0U;
    if ((2U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			 >> 9U)))) {
	if ((0U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) {
	    vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r 
		= vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_fifo_out_payload_data;
	} else {
	    if ((1U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) {
		vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r 
		    = vlSymsp->TOP__dut.__PVT__builder_csrbank4_txfull_w;
	    } else {
		if ((2U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) {
		    vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r 
			= vlSymsp->TOP__dut.__PVT__builder_csrbank4_rxempty_w;
		} else {
		    if ((3U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) {
			vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r 
			    = vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w;
		    } else {
			if ((4U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) {
			    vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r 
				= vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w;
			} else {
			    if ((5U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) {
				vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r 
				    = vlSymsp->TOP__dut.__PVT__builder_csrbank4_ev_enable0_w;
			    }
			}
		    }
		}
	    }
	}
    }
    if (vlSymsp->TOP__dut.__PVT__builder_csrbank4_ev_enable0_re) {
	vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_storage 
	    = (3U & vlSymsp->TOP__dut.__PVT__builder_array_muxed1);
    }
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_re 
	= vlSymsp->TOP__dut.__PVT__builder_csrbank4_ev_enable0_re;
    if (vlSymsp->TOP__dut.__PVT__main_int_rst) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage = 0x12345678U;
	vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_re = 0U;
	vlSymsp->TOP__dut.__Vdly__main_soclinux_ctrl_bus_errors = 0U;
	vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status = VL_ULL(0);
	vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage = VL_ULL(0xffffffffffffffff);
	vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_re = 0U;
	vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time = VL_ULL(0);
	vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp = VL_ULL(0xffffffffffffffff);
	vlSymsp->TOP__dut.__Vdly__main_soclinux_rom_bus_ack = 0U;
	vlSymsp->TOP__dut.__Vdly__main_soclinux_sram_bus_ack = 0U;
	vlSymsp->TOP__dut.__Vdly__main_soclinux_main_ram_bus_ack = 0U;
	vlSymsp->TOP__dut.__Vdly__main_soclinux_load_storage = 0U;
	vlSymsp->TOP__dut.__PVT__main_soclinux_load_re = 0U;
	vlSymsp->TOP__dut.__Vdly__main_soclinux_reload_storage = 0U;
	vlSymsp->TOP__dut.__PVT__main_soclinux_reload_re = 0U;
	vlSymsp->TOP__dut.__Vdly__main_soclinux_en_storage = 0U;
	vlSymsp->TOP__dut.__PVT__main_soclinux_en_re = 0U;
	vlSymsp->TOP__dut.__PVT__main_soclinux_update_value_storage = 0U;
	vlSymsp->TOP__dut.__Vdly__main_soclinux_update_value_re = 0U;
	vlSymsp->TOP__dut.__PVT__main_soclinux_value_status = 0U;
	vlSymsp->TOP__dut.__PVT__main_soclinux_zero_pending = 0U;
	vlSymsp->TOP__dut.__Vdly__main_soclinux_zero_old_trigger = 0U;
	vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_storage = 0U;
	vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_re = 0U;
	vlSymsp->TOP__dut.__Vdly__main_soclinux_value = 0U;
	vlSymsp->TOP__dut.__Vdly__main_bus_ack = 0U;
	vlSymsp->TOP__dut.__PVT__main_uart_tx_pending = 0U;
	vlSymsp->TOP__dut.__Vdly__main_uart_tx_old_trigger = 0U;
	vlSymsp->TOP__dut.__PVT__main_uart_rx_pending = 0U;
	vlSymsp->TOP__dut.__Vdly__main_uart_rx_old_trigger = 0U;
	vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_storage = 0U;
	vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_re = 0U;
	vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_readable = 0U;
	vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_level0 = 0U;
	vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_produce = 0U;
	vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_consume = 0U;
	vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable = 0U;
	vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_level0 = 0U;
	vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_produce = 0U;
	vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_consume = 0U;
	vlSymsp->TOP__dut.__PVT__builder_state = 0U;
	vlSymsp->TOP__dut.__Vdly__builder_grant = 0U;
	vlSymsp->TOP__dut.__PVT__builder_slave_sel_r = 0U;
	vlSymsp->TOP__dut.__Vdly__builder_count = 0xf4240U;
	vlSymsp->TOP__dut.__PVT__builder_interface0_bank_bus_dat_r = 0U;
	vlSymsp->TOP__dut.__PVT__builder_interface1_bank_bus_dat_r = 0U;
	vlSymsp->TOP__dut.__PVT__builder_interface2_bank_bus_dat_r = 0U;
	vlSymsp->TOP__dut.__PVT__builder_interface3_bank_bus_dat_r = 0U;
	vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r = 0U;
    }
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time 
	= vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time;
    vlSymsp->TOP__dut.__PVT__main_soclinux_zero_old_trigger 
	= vlSymsp->TOP__dut.__Vdly__main_soclinux_zero_old_trigger;
    vlSymsp->TOP__dut.__PVT__main_uart_tx_old_trigger 
	= vlSymsp->TOP__dut.__Vdly__main_uart_tx_old_trigger;
    vlSymsp->TOP__dut.__PVT__main_uart_rx_old_trigger 
	= vlSymsp->TOP__dut.__Vdly__main_uart_rx_old_trigger;
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_consume 
	= vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_consume;
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_consume 
	= vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_consume;
    vlSymsp->TOP__dut.__PVT__main_soclinux_update_value_re 
	= vlSymsp->TOP__dut.__Vdly__main_soclinux_update_value_re;
    vlSymsp->TOP__dut.__PVT__builder_request = (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_) 
						 << 1U) 
						| (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSymsp->TOP__dut.__PVT__main_soclinux_en_storage 
	= vlSymsp->TOP__dut.__Vdly__main_soclinux_en_storage;
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_produce 
	= vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_produce;
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_produce 
	= vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_produce;
    vlSymsp->TOP__dut.__PVT__main_soclinux_value = vlSymsp->TOP__dut.__Vdly__main_soclinux_value;
    vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors 
	= vlSymsp->TOP__dut.__Vdly__main_soclinux_ctrl_bus_errors;
    vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage 
	= vlSymsp->TOP__dut.__Vdly__main_soclinux_load_storage;
    vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage 
	= vlSymsp->TOP__dut.__Vdly__main_soclinux_reload_storage;
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_fifo_out_payload_data 
	= (0xffU & (IData)(vlSymsp->TOP__dut.__PVT__memdat_4));
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0 
	= vlSymsp->TOP__dut.__Vdly__main_uart_rx_fifo_level0;
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
	= vlSymsp->TOP__dut.__Vdly__main_soclinux_vexriscv_time_cmp_storage;
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0 
	= vlSymsp->TOP__dut.__Vdly__main_uart_tx_fifo_level0;
    vlSymsp->TOP__dut.__PVT__main_soclinux_rom_bus_ack 
	= vlSymsp->TOP__dut.__Vdly__main_soclinux_rom_bus_ack;
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_ack 
	= vlSymsp->TOP__dut.__Vdly__main_soclinux_sram_bus_ack;
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_ack 
	= vlSymsp->TOP__dut.__Vdly__main_soclinux_main_ram_bus_ack;
    vlSymsp->TOP__dut.__PVT__main_bus_ack = vlSymsp->TOP__dut.__Vdly__main_bus_ack;
    vlSymsp->TOP__dut.__PVT__builder_count = vlSymsp->TOP__dut.__Vdly__builder_count;
    vlSymsp->TOP__dut.__PVT__builder_grant = vlSymsp->TOP__dut.__Vdly__builder_grant;
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_en0_w 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_en_storage;
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_update_value0_w 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_update_value_storage;
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:724
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_wrport_adr 
	= vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_produce;
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:756
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_wrport_adr 
	= vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_produce;
    vlSymsp->TOP__dut.__PVT__main_soclinux_zero_trigger 
	= (0U != vlSymsp->TOP__dut.__PVT__main_soclinux_value);
    vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_status_w 
	= (0U != vlSymsp->TOP__dut.__PVT__main_soclinux_value);
    vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_pending_w 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_zero_pending;
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_ev_enable0_w 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_storage;
    vlSymsp->TOP__dut.__PVT__builder_csrbank4_ev_enable0_w 
	= vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_storage;
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_bus_errors3_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors 
		    >> 0x18U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_bus_errors2_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors 
		    >> 0x10U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_bus_errors1_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors 
		    >> 8U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_bus_errors0_w 
	= (0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors);
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_value3_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_value_status 
		    >> 0x18U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_value2_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_value_status 
		    >> 0x10U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_value1_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_value_status 
		    >> 8U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_value0_w 
	= (0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_value_status);
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch3_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage 
		    >> 0x18U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch2_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage 
		    >> 0x10U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch1_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage 
		    >> 8U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch0_w 
	= (0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage);
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_load3_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage 
		    >> 0x18U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_load2_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage 
		    >> 0x10U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_load1_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage 
		    >> 8U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_load0_w 
	= (0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage);
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload3_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage 
		    >> 0x18U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload2_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage 
		    >> 0x10U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload1_w 
	= (0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage 
		    >> 8U));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload0_w 
	= (0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage);
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1169
    vlSymsp->TOP__dut.__PVT__main_int_rst = 0U;
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:694
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w = 0U;
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w 
	= ((2U & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w)) 
	   | (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_pending));
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w 
	= ((1U & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w)) 
	   | ((IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_pending) 
	      << 1U));
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_syncfifo_writable 
	= (0x10U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0));
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_source_valid 
	= vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable;
    vlSymsp->TOP__dut.__PVT__builder_csrbank4_rxempty_w 
	= (1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time7_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 0x38U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time6_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 0x30U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time5_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 0x28U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time4_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 0x20U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time3_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 0x18U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time2_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 0x10U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time1_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
			    >> 8U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time0_w 
	= (0xffU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp7_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 0x38U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp6_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 0x30U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp5_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 0x28U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp4_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 0x20U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp3_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 0x18U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp2_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 0x10U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp1_w 
	= (0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage 
			    >> 8U)));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp0_w 
	= (0xffU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage));
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_syncfifo_writable 
	= (0x10U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0));
    vlSymsp->TOP__dut.__PVT__builder_csrbank4_txfull_w 
	= (0x10U == (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:683
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w = 0U;
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w 
	= ((2U & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w)) 
	   | (0x10U == (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0)));
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w 
	= ((1U & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w)) 
	   | (2U & ((~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable)) 
		    << 1U)));
    vlSymsp->TOP__dut.__PVT__builder_done = (0U == vlSymsp->TOP__dut.__PVT__builder_count);
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:851
    vlSymsp->TOP__dut.__PVT__builder_error = 0U;
    if ((0U == vlSymsp->TOP__dut.__PVT__builder_count)) {
	vlSymsp->TOP__dut.__PVT__builder_error = 1U;
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:843
    vlSymsp->TOP__dut.__PVT__builder_shared_dat_r = 
	(((((VL_NEGATE_I((IData)((1U & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel_r)))) 
	     & vlSymsp->TOP__dut.__PVT__memdat) | (
						   VL_NEGATE_I((IData)(
								       (1U 
									& ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel_r) 
									   >> 1U)))) 
						   & vlSymsp->TOP__dut.__PVT__mem_1
						   [vlSymsp->TOP__dut.__PVT__memadr])) 
	   | (VL_NEGATE_I((IData)((1U & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel_r) 
					 >> 2U)))) 
	      & vlSymsp->TOP__dut.__PVT__mem_2[vlSymsp->TOP__dut.__PVT__memadr_1])) 
	  | (VL_NEGATE_I((IData)((1U & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel_r) 
					>> 3U)))) & 
	     (((((IData)(vlSymsp->TOP__dut.__PVT__builder_interface0_bank_bus_dat_r) 
		 | (IData)(vlSymsp->TOP__dut.__PVT__builder_interface1_bank_bus_dat_r)) 
		| (IData)(vlSymsp->TOP__dut.__PVT__builder_interface2_bank_bus_dat_r)) 
	       | (IData)(vlSymsp->TOP__dut.__PVT__builder_interface3_bank_bus_dat_r)) 
	      | (IData)(vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r)))) 
	 | (VL_NEGATE_I((IData)((1U & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel_r) 
				       >> 4U)))) & 
	    vlSymsp->TOP__dut.__PVT__mem_3[vlSymsp->TOP__dut.__PVT__memadr_2]));
    if ((0U == vlSymsp->TOP__dut.__PVT__builder_count)) {
	vlSymsp->TOP__dut.__PVT__builder_shared_dat_r = 0xffffffffU;
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:624
    vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_ack = 0U;
    if (vlSymsp->TOP__dut.__PVT__builder_state) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_ack = 1U;
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1102
    vlSymsp->TOP__dut.__PVT__builder_array_muxed2 = 
	((IData)(vlSymsp->TOP__dut.__PVT__builder_grant)
	  ? ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_125_)
	      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_128_)
	      : 0xfU) : 0xfU);
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1091
    vlSymsp->TOP__dut.__PVT__builder_array_muxed1 = 
	((IData)(vlSymsp->TOP__dut.__PVT__builder_grant)
	  ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_127_
	  : 0U);
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1135
    vlSymsp->TOP__dut.__PVT__builder_array_muxed5 = 
	((IData)(vlSymsp->TOP__dut.__PVT__builder_grant) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_125_));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1124
    vlSymsp->TOP__dut.__PVT__builder_array_muxed4 = 
	((IData)(vlSymsp->TOP__dut.__PVT__builder_grant)
	  ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_)
	  : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_STB));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1113
    vlSymsp->TOP__dut.__PVT__builder_array_muxed3 = 
	((IData)(vlSymsp->TOP__dut.__PVT__builder_grant)
	  ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_)
	  : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_CYC));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1080
    vlSymsp->TOP__dut.__PVT__builder_array_muxed0 = 
	(0x3fffffffU & ((IData)(vlSymsp->TOP__dut.__PVT__builder_grant)
			 ? (((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_129_))
			      ? ((0xffffffe0U & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_126_) 
				 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_213_) 
				    << 2U)) : (0xfffffffcU 
					       & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_126_)) 
			    >> 2U) : ((0x3ffffff8U 
				       & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
					  >> 2U)) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_211_))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:1146
    vlSymsp->TOP__dut.__PVT__builder_array_muxed6 = 
	((IData)(vlSymsp->TOP__dut.__PVT__builder_grant)
	  ? ((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_129_))
	      ? ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_217_)
		  ? 7U : 2U) : 0U) : ((7U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_211_))
				       ? 7U : 2U));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:533
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0 = 0U;
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0 
	= ((0xfffffffdU & vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0) 
	   | (((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_zero_pending) 
	       & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_storage)) 
	      << 1U));
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0 
	= ((0xfffffffeU & vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0) 
	   | (1U & (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w) 
		     & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_storage)) 
		    | (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w) 
			& (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_storage)) 
		       >> 1U))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:835
    vlSymsp->TOP__dut.__PVT__builder_shared_ack = (
						   ((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_rom_bus_ack) 
						      | (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_ack)) 
						     | (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_ack)) 
						    | (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_ack)) 
						   | (IData)(vlSymsp->TOP__dut.__PVT__main_bus_ack));
    if ((0U == vlSymsp->TOP__dut.__PVT__builder_count)) {
	vlSymsp->TOP__dut.__PVT__builder_shared_ack = 1U;
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:787
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = 0U;
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = ((0x1eU 
						   & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel)) 
						  | (0U 
						     == 
						     (0xffffU 
						      & (vlSymsp->TOP__dut.__PVT__builder_array_muxed0 
							 >> 0xdU))));
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = ((0x1dU 
						   & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel)) 
						  | ((0x10000U 
						      == 
						      (0x7ffffU 
						       & (vlSymsp->TOP__dut.__PVT__builder_array_muxed0 
							  >> 0xaU))) 
						     << 1U));
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = ((0x1bU 
						   & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel)) 
						  | ((0x20U 
						      == 
						      (0x3fU 
						       & (vlSymsp->TOP__dut.__PVT__builder_array_muxed0 
							  >> 0x17U))) 
						     << 2U));
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = ((0x17U 
						   & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel)) 
						  | ((0x70U 
						      == 
						      (0x7fU 
						       & (vlSymsp->TOP__dut.__PVT__builder_array_muxed0 
							  >> 0x16U))) 
						     << 3U));
    vlSymsp->TOP__dut.__PVT__builder_slave_sel = ((0xfU 
						   & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel)) 
						  | ((0x8000U 
						      == 
						      (0x1ffffU 
						       & (vlSymsp->TOP__dut.__PVT__builder_array_muxed0 
							  >> 0xcU))) 
						     << 4U));
    vlSymsp->TOP__dut.__PVT__main_soclinux_interface0_soc_bus_ack 
	= ((IData)(vlSymsp->TOP__dut.__PVT__builder_shared_ack) 
	   & (~ (IData)(vlSymsp->TOP__dut.__PVT__builder_grant)));
    vlSymsp->TOP__dut.__PVT__main_soclinux_interface1_soc_bus_ack 
	= ((IData)(vlSymsp->TOP__dut.__PVT__builder_shared_ack) 
	   & (IData)(vlSymsp->TOP__dut.__PVT__builder_grant));
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_cyc 
	= ((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3) 
	   & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel) 
	      >> 1U));
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_cyc 
	= ((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3) 
	   & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel) 
	      >> 2U));
    vlSymsp->TOP__dut.__PVT__main_bus_cyc = ((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3) 
					     & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel) 
						>> 4U));
    vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_cyc 
	= ((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3) 
	   & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel) 
	      >> 3U));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:565
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we = 0U;
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we 
	= ((0xeU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we)) 
	   | ((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_cyc) 
		& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
	       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
	      & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2)));
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we 
	= ((0xdU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we)) 
	   | (0xfffffffeU & (((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_cyc) 
				& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
			       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
			      << 1U) & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we 
	= ((0xbU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we)) 
	   | (0xfffffffcU & (((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_cyc) 
				& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
			       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
			      << 2U) & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we 
	= ((7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we)) 
	   | (0xfffffff8U & (((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_cyc) 
				& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
			       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
			      << 3U) & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:575
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we = 0U;
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we 
	= ((0xeU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we)) 
	   | ((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_cyc) 
		& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
	       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
	      & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2)));
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we 
	= ((0xdU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we)) 
	   | (0xfffffffeU & (((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_cyc) 
				& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
			       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
			      << 1U) & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we 
	= ((0xbU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we)) 
	   | (0xfffffffcU & (((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_cyc) 
				& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
			       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
			      << 2U) & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we 
	= ((7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we)) 
	   | (0xfffffff8U & (((((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_cyc) 
				& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
			       & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
			      << 3U) & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:649
    vlSymsp->TOP__dut.__PVT__main_we = 0U;
    vlSymsp->TOP__dut.__PVT__main_we = ((0xeU & (IData)(vlSymsp->TOP__dut.__PVT__main_we)) 
					| ((((IData)(vlSymsp->TOP__dut.__PVT__main_bus_cyc) 
					     & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
					    & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
					   & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2)));
    vlSymsp->TOP__dut.__PVT__main_we = ((0xdU & (IData)(vlSymsp->TOP__dut.__PVT__main_we)) 
					| (0xfffffffeU 
					   & (((((IData)(vlSymsp->TOP__dut.__PVT__main_bus_cyc) 
						 & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
						& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
					       << 1U) 
					      & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    vlSymsp->TOP__dut.__PVT__main_we = ((0xbU & (IData)(vlSymsp->TOP__dut.__PVT__main_we)) 
					| (0xfffffffcU 
					   & (((((IData)(vlSymsp->TOP__dut.__PVT__main_bus_cyc) 
						 & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
						& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
					       << 2U) 
					      & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    vlSymsp->TOP__dut.__PVT__main_we = ((7U & (IData)(vlSymsp->TOP__dut.__PVT__main_we)) 
					| (0xfffffff8U 
					   & (((((IData)(vlSymsp->TOP__dut.__PVT__main_bus_cyc) 
						 & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4)) 
						& (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed5)) 
					       << 3U) 
					      & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed2))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:598
    vlSymsp->TOP__dut.__PVT__builder_next_state = vlSymsp->TOP__dut.__PVT__builder_state;
    if (vlSymsp->TOP__dut.__PVT__builder_state) {
	vlSymsp->TOP__dut.__PVT__builder_next_state = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_cyc) 
	     & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4))) {
	    vlSymsp->TOP__dut.__PVT__builder_next_state = 1U;
	}
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:612
    vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__builder_state)))) {
	if (((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_cyc) 
	     & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4))) {
	    vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr 
		= (0x3fffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0);
	}
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:634
    vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__builder_state)))) {
	if (((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_cyc) 
	     & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4))) {
	    vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we 
		= vlSymsp->TOP__dut.__PVT__builder_array_muxed5;
	}
    }
    vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_latch_re 
	= (((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (0U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp0_re 
	= (((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (0x10U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch0_re 
	= (((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (4U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_load0_re 
	= (((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (3U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload0_re 
	= (((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (7U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_en0_re 
	= (((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (8U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_update_value0_re 
	= (((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (9U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank3_ev_enable0_re 
	= (((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (0x10U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__main_uart_rxtx_re = ((
						   (2U 
						    == 
						    (0x1fU 
						     & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
							>> 9U))) 
						   & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
						  & (0U 
						     == 
						     (7U 
						      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__PVT__builder_csrbank4_ev_enable0_re 
	= (((2U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (5U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset = 
	((IData)(vlSymsp->TOP__dut.__PVT__main_int_rst) 
	 | (((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			      >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	    & (0U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:587
    vlSymsp->TOP__dut.__PVT__main_soclinux_zero_clear = 0U;
    if (((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			    >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	  & (0xfU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))) 
	 & vlSymsp->TOP__dut.__PVT__builder_array_muxed1)) {
	vlSymsp->TOP__dut.__PVT__main_soclinux_zero_clear = 1U;
    }
    vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_re 
	= (((2U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
			     >> 9U))) & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
	   & (4U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))));
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:688
    vlSymsp->TOP__dut.__PVT__main_uart_tx_clear = 0U;
    if (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_re) 
	 & vlSymsp->TOP__dut.__PVT__builder_array_muxed1)) {
	vlSymsp->TOP__dut.__PVT__main_uart_tx_clear = 1U;
    }
    // ALWAYS at /home/slarson/vexriscv/linux-on-litex-vexriscv/build/sim/gateware/dut.v:699
    vlSymsp->TOP__dut.__PVT__main_uart_rx_clear = 0U;
    if (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_re) 
	 & (vlSymsp->TOP__dut.__PVT__builder_array_muxed1 
	    >> 1U))) {
	vlSymsp->TOP__dut.__PVT__main_uart_rx_clear = 1U;
    }
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_syncfifo_re 
	= ((0U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0)) 
	   & ((~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable)) 
	      | (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_clear)));
    vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_do_read 
	= ((0U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0)) 
	   & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_syncfifo_re));
}

VL_INLINE_OPT void Vdut_dut::_combo__TOP__dut__6(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vdut_dut::_combo__TOP__dut__6\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_syncfifo_re 
	= ((0U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0)) 
	   & ((~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_readable)) 
	      | (IData)(vlTOPp->serial_source_ready)));
    vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_do_read 
	= ((0U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0)) 
	   & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_syncfifo_re));
}

void Vdut_dut::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vdut_dut::_ctor_var_reset\n"); );
    // Body
    sys_clk = VL_RAND_RESET_I(1);
    serial_source_valid = VL_RAND_RESET_I(1);
    serial_source_ready = VL_RAND_RESET_I(1);
    serial_source_data = VL_RAND_RESET_I(8);
    serial_sink_valid = VL_RAND_RESET_I(1);
    serial_sink_ready = VL_RAND_RESET_I(1);
    serial_sink_data = VL_RAND_RESET_I(8);
    __PVT__main_soclinux_ctrl_storage = VL_RAND_RESET_I(32);
    __PVT__main_soclinux_ctrl_re = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_ctrl_bus_errors = VL_RAND_RESET_I(32);
    __PVT__main_soclinux_vexriscv_interrupt0 = VL_RAND_RESET_I(32);
    __PVT__main_soclinux_vexriscv_latch_re = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_vexriscv_time_status = VL_RAND_RESET_Q(64);
    __PVT__main_soclinux_vexriscv_time_cmp_storage = VL_RAND_RESET_Q(64);
    __PVT__main_soclinux_vexriscv_time_cmp_re = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_vexriscv_time = VL_RAND_RESET_Q(64);
    __PVT__main_soclinux_vexriscv_time_cmp = VL_RAND_RESET_Q(64);
    __PVT__main_soclinux_interface0_soc_bus_ack = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_interface1_soc_bus_ack = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_rom_bus_ack = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_sram_bus_cyc = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_sram_bus_ack = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_sram_we = VL_RAND_RESET_I(4);
    __PVT__main_soclinux_main_ram_bus_cyc = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_main_ram_bus_ack = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_main_ram_we = VL_RAND_RESET_I(4);
    __PVT__main_soclinux_load_storage = VL_RAND_RESET_I(32);
    __PVT__main_soclinux_load_re = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_reload_storage = VL_RAND_RESET_I(32);
    __PVT__main_soclinux_reload_re = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_en_storage = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_en_re = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_update_value_storage = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_update_value_re = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_value_status = VL_RAND_RESET_I(32);
    __PVT__main_soclinux_zero_pending = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_zero_trigger = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_zero_clear = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_zero_old_trigger = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_eventmanager_status_w = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_eventmanager_pending_w = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_eventmanager_storage = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_eventmanager_re = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_value = VL_RAND_RESET_I(32);
    __PVT__main_soclinux_interface_adr = VL_RAND_RESET_I(14);
    __PVT__main_soclinux_interface_we = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_bus_wishbone_cyc = VL_RAND_RESET_I(1);
    __PVT__main_soclinux_bus_wishbone_ack = VL_RAND_RESET_I(1);
    __PVT__main_int_rst = VL_RAND_RESET_I(1);
    __PVT__main_bus_cyc = VL_RAND_RESET_I(1);
    __PVT__main_bus_ack = VL_RAND_RESET_I(1);
    __PVT__main_we = VL_RAND_RESET_I(4);
    __PVT__main_uart_rxtx_re = VL_RAND_RESET_I(1);
    __PVT__main_uart_tx_pending = VL_RAND_RESET_I(1);
    __PVT__main_uart_tx_clear = VL_RAND_RESET_I(1);
    __PVT__main_uart_tx_old_trigger = VL_RAND_RESET_I(1);
    __PVT__main_uart_rx_pending = VL_RAND_RESET_I(1);
    __PVT__main_uart_rx_clear = VL_RAND_RESET_I(1);
    __PVT__main_uart_rx_old_trigger = VL_RAND_RESET_I(1);
    __PVT__main_uart_eventmanager_status_w = VL_RAND_RESET_I(2);
    __PVT__main_uart_eventmanager_pending_re = VL_RAND_RESET_I(1);
    __PVT__main_uart_eventmanager_pending_w = VL_RAND_RESET_I(2);
    __PVT__main_uart_eventmanager_storage = VL_RAND_RESET_I(2);
    __PVT__main_uart_eventmanager_re = VL_RAND_RESET_I(1);
    __PVT__main_uart_tx_fifo_readable = VL_RAND_RESET_I(1);
    __PVT__main_uart_tx_fifo_syncfifo_writable = VL_RAND_RESET_I(1);
    __PVT__main_uart_tx_fifo_syncfifo_re = VL_RAND_RESET_I(1);
    __PVT__main_uart_tx_fifo_level0 = VL_RAND_RESET_I(5);
    __PVT__main_uart_tx_fifo_produce = VL_RAND_RESET_I(4);
    __PVT__main_uart_tx_fifo_consume = VL_RAND_RESET_I(4);
    __PVT__main_uart_tx_fifo_wrport_adr = VL_RAND_RESET_I(4);
    __PVT__main_uart_tx_fifo_do_read = VL_RAND_RESET_I(1);
    __PVT__main_uart_tx_fifo_fifo_out_payload_data = VL_RAND_RESET_I(8);
    __PVT__main_uart_tx_fifo_fifo_out_first = VL_RAND_RESET_I(1);
    __PVT__main_uart_tx_fifo_fifo_out_last = VL_RAND_RESET_I(1);
    __PVT__main_uart_rx_fifo_source_valid = VL_RAND_RESET_I(1);
    __PVT__main_uart_rx_fifo_readable = VL_RAND_RESET_I(1);
    __PVT__main_uart_rx_fifo_syncfifo_writable = VL_RAND_RESET_I(1);
    __PVT__main_uart_rx_fifo_syncfifo_re = VL_RAND_RESET_I(1);
    __PVT__main_uart_rx_fifo_level0 = VL_RAND_RESET_I(5);
    __PVT__main_uart_rx_fifo_produce = VL_RAND_RESET_I(4);
    __PVT__main_uart_rx_fifo_consume = VL_RAND_RESET_I(4);
    __PVT__main_uart_rx_fifo_wrport_adr = VL_RAND_RESET_I(4);
    __PVT__main_uart_rx_fifo_do_read = VL_RAND_RESET_I(1);
    __PVT__main_uart_rx_fifo_fifo_out_payload_data = VL_RAND_RESET_I(8);
    __PVT__main_uart_rx_fifo_fifo_out_first = VL_RAND_RESET_I(1);
    __PVT__main_uart_rx_fifo_fifo_out_last = VL_RAND_RESET_I(1);
    __PVT__builder_state = VL_RAND_RESET_I(1);
    __PVT__builder_next_state = VL_RAND_RESET_I(1);
    __PVT__builder_shared_dat_r = VL_RAND_RESET_I(32);
    __PVT__builder_shared_ack = VL_RAND_RESET_I(1);
    __PVT__builder_request = VL_RAND_RESET_I(2);
    __PVT__builder_grant = VL_RAND_RESET_I(1);
    __PVT__builder_slave_sel = VL_RAND_RESET_I(5);
    __PVT__builder_slave_sel_r = VL_RAND_RESET_I(5);
    __PVT__builder_error = VL_RAND_RESET_I(1);
    __PVT__builder_done = VL_RAND_RESET_I(1);
    __PVT__builder_count = VL_RAND_RESET_I(20);
    __PVT__builder_interface0_bank_bus_dat_r = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time7_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time6_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time5_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time4_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time3_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time2_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time1_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time0_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time_cmp7_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time_cmp6_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time_cmp5_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time_cmp4_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time_cmp3_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time_cmp2_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time_cmp1_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank0_timer_time_cmp0_re = VL_RAND_RESET_I(1);
    __PVT__builder_csrbank0_timer_time_cmp0_w = VL_RAND_RESET_I(8);
    __PVT__builder_interface1_bank_bus_dat_r = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank1_scratch3_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank1_scratch2_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank1_scratch1_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank1_scratch0_re = VL_RAND_RESET_I(1);
    __PVT__builder_csrbank1_scratch0_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank1_bus_errors3_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank1_bus_errors2_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank1_bus_errors1_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank1_bus_errors0_w = VL_RAND_RESET_I(8);
    __PVT__builder_interface2_bank_bus_dat_r = VL_RAND_RESET_I(8);
    __PVT__builder_interface3_bank_bus_dat_r = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_load3_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_load2_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_load1_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_load0_re = VL_RAND_RESET_I(1);
    __PVT__builder_csrbank3_load0_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_reload3_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_reload2_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_reload1_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_reload0_re = VL_RAND_RESET_I(1);
    __PVT__builder_csrbank3_reload0_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_en0_re = VL_RAND_RESET_I(1);
    __PVT__builder_csrbank3_en0_w = VL_RAND_RESET_I(1);
    __PVT__builder_csrbank3_update_value0_re = VL_RAND_RESET_I(1);
    __PVT__builder_csrbank3_update_value0_w = VL_RAND_RESET_I(1);
    __PVT__builder_csrbank3_value3_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_value2_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_value1_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_value0_w = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank3_ev_enable0_re = VL_RAND_RESET_I(1);
    __PVT__builder_csrbank3_ev_enable0_w = VL_RAND_RESET_I(1);
    __PVT__builder_interface4_bank_bus_dat_r = VL_RAND_RESET_I(8);
    __PVT__builder_csrbank4_txfull_w = VL_RAND_RESET_I(1);
    __PVT__builder_csrbank4_rxempty_w = VL_RAND_RESET_I(1);
    __PVT__builder_csrbank4_ev_enable0_re = VL_RAND_RESET_I(1);
    __PVT__builder_csrbank4_ev_enable0_w = VL_RAND_RESET_I(2);
    __PVT__builder_array_muxed0 = VL_RAND_RESET_I(30);
    __PVT__builder_array_muxed1 = VL_RAND_RESET_I(32);
    __PVT__builder_array_muxed2 = VL_RAND_RESET_I(4);
    __PVT__builder_array_muxed3 = VL_RAND_RESET_I(1);
    __PVT__builder_array_muxed4 = VL_RAND_RESET_I(1);
    __PVT__builder_array_muxed5 = VL_RAND_RESET_I(1);
    __PVT__builder_array_muxed6 = VL_RAND_RESET_I(3);
    __PVT__builder_array_muxed7 = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<8192; ++__Vi0) {
	    __PVT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__memdat = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    __PVT__mem_1[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__memadr = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<8388608; ++__Vi0) {
	    __PVT__mem_2[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__memadr_1 = VL_RAND_RESET_I(23);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    __PVT__mem_3[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__memadr_2 = VL_RAND_RESET_I(12);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    __PVT__storage[__Vi0] = VL_RAND_RESET_I(10);
    }}
    __PVT__memdat_1 = VL_RAND_RESET_I(10);
    __PVT__memdat_2 = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    __PVT__storage_1[__Vi0] = VL_RAND_RESET_I(10);
    }}
    __PVT__memdat_3 = VL_RAND_RESET_I(10);
    __PVT__memdat_4 = VL_RAND_RESET_I(10);
    __Vcellinp__VexRiscv__reset = VL_RAND_RESET_I(1);
    __Vdly__main_soclinux_ctrl_bus_errors = VL_RAND_RESET_I(32);
    __Vdly__main_soclinux_vexriscv_time = VL_RAND_RESET_Q(64);
    __Vdly__main_soclinux_rom_bus_ack = VL_RAND_RESET_I(1);
    __Vdly__main_soclinux_sram_bus_ack = VL_RAND_RESET_I(1);
    __Vdly__main_soclinux_main_ram_bus_ack = VL_RAND_RESET_I(1);
    __Vdly__main_soclinux_value = VL_RAND_RESET_I(32);
    __Vdly__main_soclinux_zero_old_trigger = VL_RAND_RESET_I(1);
    __Vdly__main_bus_ack = VL_RAND_RESET_I(1);
    __Vdly__main_uart_tx_old_trigger = VL_RAND_RESET_I(1);
    __Vdly__main_uart_rx_old_trigger = VL_RAND_RESET_I(1);
    __Vdly__main_uart_tx_fifo_produce = VL_RAND_RESET_I(4);
    __Vdly__main_uart_tx_fifo_consume = VL_RAND_RESET_I(4);
    __Vdly__main_uart_tx_fifo_level0 = VL_RAND_RESET_I(5);
    __Vdly__main_uart_rx_fifo_produce = VL_RAND_RESET_I(4);
    __Vdly__main_uart_rx_fifo_consume = VL_RAND_RESET_I(4);
    __Vdly__main_uart_rx_fifo_level0 = VL_RAND_RESET_I(5);
    __Vdly__builder_grant = VL_RAND_RESET_I(1);
    __Vdly__builder_count = VL_RAND_RESET_I(20);
    __Vdly__main_soclinux_vexriscv_time_cmp_storage = VL_RAND_RESET_Q(64);
    __Vdly__main_soclinux_load_storage = VL_RAND_RESET_I(32);
    __Vdly__main_soclinux_reload_storage = VL_RAND_RESET_I(32);
    __Vdly__main_soclinux_en_storage = VL_RAND_RESET_I(1);
    __Vdly__main_soclinux_update_value_re = VL_RAND_RESET_I(1);
}
