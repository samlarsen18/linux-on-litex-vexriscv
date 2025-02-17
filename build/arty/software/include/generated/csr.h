//--------------------------------------------------------------------------------
// Auto-generated by Migen (41922fd) & LiteX (97a77b95) on 2019-10-28 15:49:53
//--------------------------------------------------------------------------------
#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#ifdef CSR_ACCESSORS_DEFINED
extern void csr_writeb(uint8_t value, unsigned long addr);
extern uint8_t csr_readb(unsigned long addr);
extern void csr_writew(uint16_t value, unsigned long addr);
extern uint16_t csr_readw(unsigned long addr);
extern void csr_writel(uint32_t value, unsigned long addr);
extern uint32_t csr_readl(unsigned long addr);
#else /* ! CSR_ACCESSORS_DEFINED */
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */

/* cpu */
#define CSR_CPU_BASE 0xf0000800L
#define CSR_CPU_TIMER_LATCH_ADDR 0xf0000800L
#define CSR_CPU_TIMER_LATCH_SIZE 1
static inline unsigned char cpu_timer_latch_read(void) {
	unsigned char r = csr_readl(0xf0000800L);
	return r;
}
static inline void cpu_timer_latch_write(unsigned char value) {
	csr_writel(value, 0xf0000800L);
}
#define CSR_CPU_TIMER_TIME_ADDR 0xf0000804L
#define CSR_CPU_TIMER_TIME_SIZE 8
static inline unsigned long long int cpu_timer_time_read(void) {
	unsigned long long int r = csr_readl(0xf0000804L);
	r <<= 8;
	r |= csr_readl(0xf0000808L);
	r <<= 8;
	r |= csr_readl(0xf000080cL);
	r <<= 8;
	r |= csr_readl(0xf0000810L);
	r <<= 8;
	r |= csr_readl(0xf0000814L);
	r <<= 8;
	r |= csr_readl(0xf0000818L);
	r <<= 8;
	r |= csr_readl(0xf000081cL);
	r <<= 8;
	r |= csr_readl(0xf0000820L);
	return r;
}
#define CSR_CPU_TIMER_TIME_CMP_ADDR 0xf0000824L
#define CSR_CPU_TIMER_TIME_CMP_SIZE 8
static inline unsigned long long int cpu_timer_time_cmp_read(void) {
	unsigned long long int r = csr_readl(0xf0000824L);
	r <<= 8;
	r |= csr_readl(0xf0000828L);
	r <<= 8;
	r |= csr_readl(0xf000082cL);
	r <<= 8;
	r |= csr_readl(0xf0000830L);
	r <<= 8;
	r |= csr_readl(0xf0000834L);
	r <<= 8;
	r |= csr_readl(0xf0000838L);
	r <<= 8;
	r |= csr_readl(0xf000083cL);
	r <<= 8;
	r |= csr_readl(0xf0000840L);
	return r;
}
static inline void cpu_timer_time_cmp_write(unsigned long long int value) {
	csr_writel(value >> 56, 0xf0000824L);
	csr_writel(value >> 48, 0xf0000828L);
	csr_writel(value >> 40, 0xf000082cL);
	csr_writel(value >> 32, 0xf0000830L);
	csr_writel(value >> 24, 0xf0000834L);
	csr_writel(value >> 16, 0xf0000838L);
	csr_writel(value >> 8, 0xf000083cL);
	csr_writel(value, 0xf0000840L);
}

/* ctrl */
#define CSR_CTRL_BASE 0xf0000000L
#define CSR_CTRL_RESET_ADDR 0xf0000000L
#define CSR_CTRL_RESET_SIZE 1
static inline unsigned char ctrl_reset_read(void) {
	unsigned char r = csr_readl(0xf0000000L);
	return r;
}
static inline void ctrl_reset_write(unsigned char value) {
	csr_writel(value, 0xf0000000L);
}
#define CSR_CTRL_SCRATCH_ADDR 0xf0000004L
#define CSR_CTRL_SCRATCH_SIZE 4
static inline unsigned int ctrl_scratch_read(void) {
	unsigned int r = csr_readl(0xf0000004L);
	r <<= 8;
	r |= csr_readl(0xf0000008L);
	r <<= 8;
	r |= csr_readl(0xf000000cL);
	r <<= 8;
	r |= csr_readl(0xf0000010L);
	return r;
}
static inline void ctrl_scratch_write(unsigned int value) {
	csr_writel(value >> 24, 0xf0000004L);
	csr_writel(value >> 16, 0xf0000008L);
	csr_writel(value >> 8, 0xf000000cL);
	csr_writel(value, 0xf0000010L);
}
#define CSR_CTRL_BUS_ERRORS_ADDR 0xf0000014L
#define CSR_CTRL_BUS_ERRORS_SIZE 4
static inline unsigned int ctrl_bus_errors_read(void) {
	unsigned int r = csr_readl(0xf0000014L);
	r <<= 8;
	r |= csr_readl(0xf0000018L);
	r <<= 8;
	r |= csr_readl(0xf000001cL);
	r <<= 8;
	r |= csr_readl(0xf0000020L);
	return r;
}

/* ddrphy */
#define CSR_DDRPHY_BASE 0xf0002800L
#define CSR_DDRPHY_HALF_SYS8X_TAPS_ADDR 0xf0002800L
#define CSR_DDRPHY_HALF_SYS8X_TAPS_SIZE 1
static inline unsigned char ddrphy_half_sys8x_taps_read(void) {
	unsigned char r = csr_readl(0xf0002800L);
	return r;
}
static inline void ddrphy_half_sys8x_taps_write(unsigned char value) {
	csr_writel(value, 0xf0002800L);
}
#define CSR_DDRPHY_CDLY_RST_ADDR 0xf0002804L
#define CSR_DDRPHY_CDLY_RST_SIZE 1
static inline unsigned char ddrphy_cdly_rst_read(void) {
	unsigned char r = csr_readl(0xf0002804L);
	return r;
}
static inline void ddrphy_cdly_rst_write(unsigned char value) {
	csr_writel(value, 0xf0002804L);
}
#define CSR_DDRPHY_CDLY_INC_ADDR 0xf0002808L
#define CSR_DDRPHY_CDLY_INC_SIZE 1
static inline unsigned char ddrphy_cdly_inc_read(void) {
	unsigned char r = csr_readl(0xf0002808L);
	return r;
}
static inline void ddrphy_cdly_inc_write(unsigned char value) {
	csr_writel(value, 0xf0002808L);
}
#define CSR_DDRPHY_DLY_SEL_ADDR 0xf000280cL
#define CSR_DDRPHY_DLY_SEL_SIZE 1
static inline unsigned char ddrphy_dly_sel_read(void) {
	unsigned char r = csr_readl(0xf000280cL);
	return r;
}
static inline void ddrphy_dly_sel_write(unsigned char value) {
	csr_writel(value, 0xf000280cL);
}
#define CSR_DDRPHY_RDLY_DQ_RST_ADDR 0xf0002810L
#define CSR_DDRPHY_RDLY_DQ_RST_SIZE 1
static inline unsigned char ddrphy_rdly_dq_rst_read(void) {
	unsigned char r = csr_readl(0xf0002810L);
	return r;
}
static inline void ddrphy_rdly_dq_rst_write(unsigned char value) {
	csr_writel(value, 0xf0002810L);
}
#define CSR_DDRPHY_RDLY_DQ_INC_ADDR 0xf0002814L
#define CSR_DDRPHY_RDLY_DQ_INC_SIZE 1
static inline unsigned char ddrphy_rdly_dq_inc_read(void) {
	unsigned char r = csr_readl(0xf0002814L);
	return r;
}
static inline void ddrphy_rdly_dq_inc_write(unsigned char value) {
	csr_writel(value, 0xf0002814L);
}
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_RST_ADDR 0xf0002818L
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_RST_SIZE 1
static inline unsigned char ddrphy_rdly_dq_bitslip_rst_read(void) {
	unsigned char r = csr_readl(0xf0002818L);
	return r;
}
static inline void ddrphy_rdly_dq_bitslip_rst_write(unsigned char value) {
	csr_writel(value, 0xf0002818L);
}
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_ADDR 0xf000281cL
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_SIZE 1
static inline unsigned char ddrphy_rdly_dq_bitslip_read(void) {
	unsigned char r = csr_readl(0xf000281cL);
	return r;
}
static inline void ddrphy_rdly_dq_bitslip_write(unsigned char value) {
	csr_writel(value, 0xf000281cL);
}

/* ethmac */
#define CSR_ETHMAC_BASE 0xf0003800L
#define CSR_ETHMAC_SRAM_WRITER_SLOT_ADDR 0xf0003800L
#define CSR_ETHMAC_SRAM_WRITER_SLOT_SIZE 1
static inline unsigned char ethmac_sram_writer_slot_read(void) {
	unsigned char r = csr_readl(0xf0003800L);
	return r;
}
#define CSR_ETHMAC_SRAM_WRITER_LENGTH_ADDR 0xf0003804L
#define CSR_ETHMAC_SRAM_WRITER_LENGTH_SIZE 4
static inline unsigned int ethmac_sram_writer_length_read(void) {
	unsigned int r = csr_readl(0xf0003804L);
	r <<= 8;
	r |= csr_readl(0xf0003808L);
	r <<= 8;
	r |= csr_readl(0xf000380cL);
	r <<= 8;
	r |= csr_readl(0xf0003810L);
	return r;
}
#define CSR_ETHMAC_SRAM_WRITER_ERRORS_ADDR 0xf0003814L
#define CSR_ETHMAC_SRAM_WRITER_ERRORS_SIZE 4
static inline unsigned int ethmac_sram_writer_errors_read(void) {
	unsigned int r = csr_readl(0xf0003814L);
	r <<= 8;
	r |= csr_readl(0xf0003818L);
	r <<= 8;
	r |= csr_readl(0xf000381cL);
	r <<= 8;
	r |= csr_readl(0xf0003820L);
	return r;
}
#define CSR_ETHMAC_SRAM_WRITER_EV_STATUS_ADDR 0xf0003824L
#define CSR_ETHMAC_SRAM_WRITER_EV_STATUS_SIZE 1
static inline unsigned char ethmac_sram_writer_ev_status_read(void) {
	unsigned char r = csr_readl(0xf0003824L);
	return r;
}
static inline void ethmac_sram_writer_ev_status_write(unsigned char value) {
	csr_writel(value, 0xf0003824L);
}
#define CSR_ETHMAC_SRAM_WRITER_EV_PENDING_ADDR 0xf0003828L
#define CSR_ETHMAC_SRAM_WRITER_EV_PENDING_SIZE 1
static inline unsigned char ethmac_sram_writer_ev_pending_read(void) {
	unsigned char r = csr_readl(0xf0003828L);
	return r;
}
static inline void ethmac_sram_writer_ev_pending_write(unsigned char value) {
	csr_writel(value, 0xf0003828L);
}
#define CSR_ETHMAC_SRAM_WRITER_EV_ENABLE_ADDR 0xf000382cL
#define CSR_ETHMAC_SRAM_WRITER_EV_ENABLE_SIZE 1
static inline unsigned char ethmac_sram_writer_ev_enable_read(void) {
	unsigned char r = csr_readl(0xf000382cL);
	return r;
}
static inline void ethmac_sram_writer_ev_enable_write(unsigned char value) {
	csr_writel(value, 0xf000382cL);
}
#define CSR_ETHMAC_SRAM_READER_START_ADDR 0xf0003830L
#define CSR_ETHMAC_SRAM_READER_START_SIZE 1
static inline unsigned char ethmac_sram_reader_start_read(void) {
	unsigned char r = csr_readl(0xf0003830L);
	return r;
}
static inline void ethmac_sram_reader_start_write(unsigned char value) {
	csr_writel(value, 0xf0003830L);
}
#define CSR_ETHMAC_SRAM_READER_READY_ADDR 0xf0003834L
#define CSR_ETHMAC_SRAM_READER_READY_SIZE 1
static inline unsigned char ethmac_sram_reader_ready_read(void) {
	unsigned char r = csr_readl(0xf0003834L);
	return r;
}
#define CSR_ETHMAC_SRAM_READER_LEVEL_ADDR 0xf0003838L
#define CSR_ETHMAC_SRAM_READER_LEVEL_SIZE 1
static inline unsigned char ethmac_sram_reader_level_read(void) {
	unsigned char r = csr_readl(0xf0003838L);
	return r;
}
#define CSR_ETHMAC_SRAM_READER_SLOT_ADDR 0xf000383cL
#define CSR_ETHMAC_SRAM_READER_SLOT_SIZE 1
static inline unsigned char ethmac_sram_reader_slot_read(void) {
	unsigned char r = csr_readl(0xf000383cL);
	return r;
}
static inline void ethmac_sram_reader_slot_write(unsigned char value) {
	csr_writel(value, 0xf000383cL);
}
#define CSR_ETHMAC_SRAM_READER_LENGTH_ADDR 0xf0003840L
#define CSR_ETHMAC_SRAM_READER_LENGTH_SIZE 2
static inline unsigned short int ethmac_sram_reader_length_read(void) {
	unsigned short int r = csr_readl(0xf0003840L);
	r <<= 8;
	r |= csr_readl(0xf0003844L);
	return r;
}
static inline void ethmac_sram_reader_length_write(unsigned short int value) {
	csr_writel(value >> 8, 0xf0003840L);
	csr_writel(value, 0xf0003844L);
}
#define CSR_ETHMAC_SRAM_READER_EV_STATUS_ADDR 0xf0003848L
#define CSR_ETHMAC_SRAM_READER_EV_STATUS_SIZE 1
static inline unsigned char ethmac_sram_reader_ev_status_read(void) {
	unsigned char r = csr_readl(0xf0003848L);
	return r;
}
static inline void ethmac_sram_reader_ev_status_write(unsigned char value) {
	csr_writel(value, 0xf0003848L);
}
#define CSR_ETHMAC_SRAM_READER_EV_PENDING_ADDR 0xf000384cL
#define CSR_ETHMAC_SRAM_READER_EV_PENDING_SIZE 1
static inline unsigned char ethmac_sram_reader_ev_pending_read(void) {
	unsigned char r = csr_readl(0xf000384cL);
	return r;
}
static inline void ethmac_sram_reader_ev_pending_write(unsigned char value) {
	csr_writel(value, 0xf000384cL);
}
#define CSR_ETHMAC_SRAM_READER_EV_ENABLE_ADDR 0xf0003850L
#define CSR_ETHMAC_SRAM_READER_EV_ENABLE_SIZE 1
static inline unsigned char ethmac_sram_reader_ev_enable_read(void) {
	unsigned char r = csr_readl(0xf0003850L);
	return r;
}
static inline void ethmac_sram_reader_ev_enable_write(unsigned char value) {
	csr_writel(value, 0xf0003850L);
}
#define CSR_ETHMAC_PREAMBLE_CRC_ADDR 0xf0003854L
#define CSR_ETHMAC_PREAMBLE_CRC_SIZE 1
static inline unsigned char ethmac_preamble_crc_read(void) {
	unsigned char r = csr_readl(0xf0003854L);
	return r;
}
#define CSR_ETHMAC_PREAMBLE_ERRORS_ADDR 0xf0003858L
#define CSR_ETHMAC_PREAMBLE_ERRORS_SIZE 4
static inline unsigned int ethmac_preamble_errors_read(void) {
	unsigned int r = csr_readl(0xf0003858L);
	r <<= 8;
	r |= csr_readl(0xf000385cL);
	r <<= 8;
	r |= csr_readl(0xf0003860L);
	r <<= 8;
	r |= csr_readl(0xf0003864L);
	return r;
}
#define CSR_ETHMAC_CRC_ERRORS_ADDR 0xf0003868L
#define CSR_ETHMAC_CRC_ERRORS_SIZE 4
static inline unsigned int ethmac_crc_errors_read(void) {
	unsigned int r = csr_readl(0xf0003868L);
	r <<= 8;
	r |= csr_readl(0xf000386cL);
	r <<= 8;
	r |= csr_readl(0xf0003870L);
	r <<= 8;
	r |= csr_readl(0xf0003874L);
	return r;
}

/* ethphy */
#define CSR_ETHPHY_BASE 0xf0003000L
#define CSR_ETHPHY_CRG_RESET_ADDR 0xf0003000L
#define CSR_ETHPHY_CRG_RESET_SIZE 1
static inline unsigned char ethphy_crg_reset_read(void) {
	unsigned char r = csr_readl(0xf0003000L);
	return r;
}
static inline void ethphy_crg_reset_write(unsigned char value) {
	csr_writel(value, 0xf0003000L);
}
#define CSR_ETHPHY_MDIO_W_ADDR 0xf0003004L
#define CSR_ETHPHY_MDIO_W_SIZE 1
static inline unsigned char ethphy_mdio_w_read(void) {
	unsigned char r = csr_readl(0xf0003004L);
	return r;
}
static inline void ethphy_mdio_w_write(unsigned char value) {
	csr_writel(value, 0xf0003004L);
}
#define CSR_ETHPHY_MDIO_R_ADDR 0xf0003008L
#define CSR_ETHPHY_MDIO_R_SIZE 1
static inline unsigned char ethphy_mdio_r_read(void) {
	unsigned char r = csr_readl(0xf0003008L);
	return r;
}

/* i2c0 */
#define CSR_I2C0_BASE 0xf0008800L
#define CSR_I2C0_W_ADDR 0xf0008800L
#define CSR_I2C0_W_SIZE 1
static inline unsigned char i2c0_w_read(void) {
	unsigned char r = csr_readl(0xf0008800L);
	return r;
}
static inline void i2c0_w_write(unsigned char value) {
	csr_writel(value, 0xf0008800L);
}
#define CSR_I2C0_W_SCL_OFFSET 0
#define CSR_I2C0_W_SCL_SIZE 1
#define CSR_I2C0_W_OE_OFFSET 1
#define CSR_I2C0_W_OE_SIZE 1
#define CSR_I2C0_W_SDA_OFFSET 2
#define CSR_I2C0_W_SDA_SIZE 1
#define CSR_I2C0_R_ADDR 0xf0008804L
#define CSR_I2C0_R_SIZE 1
static inline unsigned char i2c0_r_read(void) {
	unsigned char r = csr_readl(0xf0008804L);
	return r;
}
#define CSR_I2C0_R_SDA_OFFSET 0
#define CSR_I2C0_R_SDA_SIZE 1

/* leds */
#define CSR_LEDS_BASE 0xf0005800L
#define CSR_LEDS_OUT_ADDR 0xf0005800L
#define CSR_LEDS_OUT_SIZE 1
static inline unsigned char leds_out_read(void) {
	unsigned char r = csr_readl(0xf0005800L);
	return r;
}
static inline void leds_out_write(unsigned char value) {
	csr_writel(value, 0xf0005800L);
}

/* rgb_led_b0 */
#define CSR_RGB_LED_B0_BASE 0xf0007000L
#define CSR_RGB_LED_B0_ENABLE_ADDR 0xf0007000L
#define CSR_RGB_LED_B0_ENABLE_SIZE 1
static inline unsigned char rgb_led_b0_enable_read(void) {
	unsigned char r = csr_readl(0xf0007000L);
	return r;
}
static inline void rgb_led_b0_enable_write(unsigned char value) {
	csr_writel(value, 0xf0007000L);
}
#define CSR_RGB_LED_B0_WIDTH_ADDR 0xf0007004L
#define CSR_RGB_LED_B0_WIDTH_SIZE 4
static inline unsigned int rgb_led_b0_width_read(void) {
	unsigned int r = csr_readl(0xf0007004L);
	r <<= 8;
	r |= csr_readl(0xf0007008L);
	r <<= 8;
	r |= csr_readl(0xf000700cL);
	r <<= 8;
	r |= csr_readl(0xf0007010L);
	return r;
}
static inline void rgb_led_b0_width_write(unsigned int value) {
	csr_writel(value >> 24, 0xf0007004L);
	csr_writel(value >> 16, 0xf0007008L);
	csr_writel(value >> 8, 0xf000700cL);
	csr_writel(value, 0xf0007010L);
}
#define CSR_RGB_LED_B0_PERIOD_ADDR 0xf0007014L
#define CSR_RGB_LED_B0_PERIOD_SIZE 4
static inline unsigned int rgb_led_b0_period_read(void) {
	unsigned int r = csr_readl(0xf0007014L);
	r <<= 8;
	r |= csr_readl(0xf0007018L);
	r <<= 8;
	r |= csr_readl(0xf000701cL);
	r <<= 8;
	r |= csr_readl(0xf0007020L);
	return r;
}
static inline void rgb_led_b0_period_write(unsigned int value) {
	csr_writel(value >> 24, 0xf0007014L);
	csr_writel(value >> 16, 0xf0007018L);
	csr_writel(value >> 8, 0xf000701cL);
	csr_writel(value, 0xf0007020L);
}

/* rgb_led_g0 */
#define CSR_RGB_LED_G0_BASE 0xf0006800L
#define CSR_RGB_LED_G0_ENABLE_ADDR 0xf0006800L
#define CSR_RGB_LED_G0_ENABLE_SIZE 1
static inline unsigned char rgb_led_g0_enable_read(void) {
	unsigned char r = csr_readl(0xf0006800L);
	return r;
}
static inline void rgb_led_g0_enable_write(unsigned char value) {
	csr_writel(value, 0xf0006800L);
}
#define CSR_RGB_LED_G0_WIDTH_ADDR 0xf0006804L
#define CSR_RGB_LED_G0_WIDTH_SIZE 4
static inline unsigned int rgb_led_g0_width_read(void) {
	unsigned int r = csr_readl(0xf0006804L);
	r <<= 8;
	r |= csr_readl(0xf0006808L);
	r <<= 8;
	r |= csr_readl(0xf000680cL);
	r <<= 8;
	r |= csr_readl(0xf0006810L);
	return r;
}
static inline void rgb_led_g0_width_write(unsigned int value) {
	csr_writel(value >> 24, 0xf0006804L);
	csr_writel(value >> 16, 0xf0006808L);
	csr_writel(value >> 8, 0xf000680cL);
	csr_writel(value, 0xf0006810L);
}
#define CSR_RGB_LED_G0_PERIOD_ADDR 0xf0006814L
#define CSR_RGB_LED_G0_PERIOD_SIZE 4
static inline unsigned int rgb_led_g0_period_read(void) {
	unsigned int r = csr_readl(0xf0006814L);
	r <<= 8;
	r |= csr_readl(0xf0006818L);
	r <<= 8;
	r |= csr_readl(0xf000681cL);
	r <<= 8;
	r |= csr_readl(0xf0006820L);
	return r;
}
static inline void rgb_led_g0_period_write(unsigned int value) {
	csr_writel(value >> 24, 0xf0006814L);
	csr_writel(value >> 16, 0xf0006818L);
	csr_writel(value >> 8, 0xf000681cL);
	csr_writel(value, 0xf0006820L);
}

/* rgb_led_r0 */
#define CSR_RGB_LED_R0_BASE 0xf0006000L
#define CSR_RGB_LED_R0_ENABLE_ADDR 0xf0006000L
#define CSR_RGB_LED_R0_ENABLE_SIZE 1
static inline unsigned char rgb_led_r0_enable_read(void) {
	unsigned char r = csr_readl(0xf0006000L);
	return r;
}
static inline void rgb_led_r0_enable_write(unsigned char value) {
	csr_writel(value, 0xf0006000L);
}
#define CSR_RGB_LED_R0_WIDTH_ADDR 0xf0006004L
#define CSR_RGB_LED_R0_WIDTH_SIZE 4
static inline unsigned int rgb_led_r0_width_read(void) {
	unsigned int r = csr_readl(0xf0006004L);
	r <<= 8;
	r |= csr_readl(0xf0006008L);
	r <<= 8;
	r |= csr_readl(0xf000600cL);
	r <<= 8;
	r |= csr_readl(0xf0006010L);
	return r;
}
static inline void rgb_led_r0_width_write(unsigned int value) {
	csr_writel(value >> 24, 0xf0006004L);
	csr_writel(value >> 16, 0xf0006008L);
	csr_writel(value >> 8, 0xf000600cL);
	csr_writel(value, 0xf0006010L);
}
#define CSR_RGB_LED_R0_PERIOD_ADDR 0xf0006014L
#define CSR_RGB_LED_R0_PERIOD_SIZE 4
static inline unsigned int rgb_led_r0_period_read(void) {
	unsigned int r = csr_readl(0xf0006014L);
	r <<= 8;
	r |= csr_readl(0xf0006018L);
	r <<= 8;
	r |= csr_readl(0xf000601cL);
	r <<= 8;
	r |= csr_readl(0xf0006020L);
	return r;
}
static inline void rgb_led_r0_period_write(unsigned int value) {
	csr_writel(value >> 24, 0xf0006014L);
	csr_writel(value >> 16, 0xf0006018L);
	csr_writel(value >> 8, 0xf000601cL);
	csr_writel(value, 0xf0006020L);
}

/* sdram */
#define CSR_SDRAM_BASE 0xf0004000L
#define CSR_SDRAM_DFII_CONTROL_ADDR 0xf0004000L
#define CSR_SDRAM_DFII_CONTROL_SIZE 1
static inline unsigned char sdram_dfii_control_read(void) {
	unsigned char r = csr_readl(0xf0004000L);
	return r;
}
static inline void sdram_dfii_control_write(unsigned char value) {
	csr_writel(value, 0xf0004000L);
}
#define CSR_SDRAM_DFII_PI0_COMMAND_ADDR 0xf0004004L
#define CSR_SDRAM_DFII_PI0_COMMAND_SIZE 1
static inline unsigned char sdram_dfii_pi0_command_read(void) {
	unsigned char r = csr_readl(0xf0004004L);
	return r;
}
static inline void sdram_dfii_pi0_command_write(unsigned char value) {
	csr_writel(value, 0xf0004004L);
}
#define CSR_SDRAM_DFII_PI0_COMMAND_ISSUE_ADDR 0xf0004008L
#define CSR_SDRAM_DFII_PI0_COMMAND_ISSUE_SIZE 1
static inline unsigned char sdram_dfii_pi0_command_issue_read(void) {
	unsigned char r = csr_readl(0xf0004008L);
	return r;
}
static inline void sdram_dfii_pi0_command_issue_write(unsigned char value) {
	csr_writel(value, 0xf0004008L);
}
#define CSR_SDRAM_DFII_PI0_ADDRESS_ADDR 0xf000400cL
#define CSR_SDRAM_DFII_PI0_ADDRESS_SIZE 2
static inline unsigned short int sdram_dfii_pi0_address_read(void) {
	unsigned short int r = csr_readl(0xf000400cL);
	r <<= 8;
	r |= csr_readl(0xf0004010L);
	return r;
}
static inline void sdram_dfii_pi0_address_write(unsigned short int value) {
	csr_writel(value >> 8, 0xf000400cL);
	csr_writel(value, 0xf0004010L);
}
#define CSR_SDRAM_DFII_PI0_BADDRESS_ADDR 0xf0004014L
#define CSR_SDRAM_DFII_PI0_BADDRESS_SIZE 1
static inline unsigned char sdram_dfii_pi0_baddress_read(void) {
	unsigned char r = csr_readl(0xf0004014L);
	return r;
}
static inline void sdram_dfii_pi0_baddress_write(unsigned char value) {
	csr_writel(value, 0xf0004014L);
}
#define CSR_SDRAM_DFII_PI0_WRDATA_ADDR 0xf0004018L
#define CSR_SDRAM_DFII_PI0_WRDATA_SIZE 4
static inline unsigned int sdram_dfii_pi0_wrdata_read(void) {
	unsigned int r = csr_readl(0xf0004018L);
	r <<= 8;
	r |= csr_readl(0xf000401cL);
	r <<= 8;
	r |= csr_readl(0xf0004020L);
	r <<= 8;
	r |= csr_readl(0xf0004024L);
	return r;
}
static inline void sdram_dfii_pi0_wrdata_write(unsigned int value) {
	csr_writel(value >> 24, 0xf0004018L);
	csr_writel(value >> 16, 0xf000401cL);
	csr_writel(value >> 8, 0xf0004020L);
	csr_writel(value, 0xf0004024L);
}
#define CSR_SDRAM_DFII_PI0_RDDATA_ADDR 0xf0004028L
#define CSR_SDRAM_DFII_PI0_RDDATA_SIZE 4
static inline unsigned int sdram_dfii_pi0_rddata_read(void) {
	unsigned int r = csr_readl(0xf0004028L);
	r <<= 8;
	r |= csr_readl(0xf000402cL);
	r <<= 8;
	r |= csr_readl(0xf0004030L);
	r <<= 8;
	r |= csr_readl(0xf0004034L);
	return r;
}
#define CSR_SDRAM_DFII_PI1_COMMAND_ADDR 0xf0004038L
#define CSR_SDRAM_DFII_PI1_COMMAND_SIZE 1
static inline unsigned char sdram_dfii_pi1_command_read(void) {
	unsigned char r = csr_readl(0xf0004038L);
	return r;
}
static inline void sdram_dfii_pi1_command_write(unsigned char value) {
	csr_writel(value, 0xf0004038L);
}
#define CSR_SDRAM_DFII_PI1_COMMAND_ISSUE_ADDR 0xf000403cL
#define CSR_SDRAM_DFII_PI1_COMMAND_ISSUE_SIZE 1
static inline unsigned char sdram_dfii_pi1_command_issue_read(void) {
	unsigned char r = csr_readl(0xf000403cL);
	return r;
}
static inline void sdram_dfii_pi1_command_issue_write(unsigned char value) {
	csr_writel(value, 0xf000403cL);
}
#define CSR_SDRAM_DFII_PI1_ADDRESS_ADDR 0xf0004040L
#define CSR_SDRAM_DFII_PI1_ADDRESS_SIZE 2
static inline unsigned short int sdram_dfii_pi1_address_read(void) {
	unsigned short int r = csr_readl(0xf0004040L);
	r <<= 8;
	r |= csr_readl(0xf0004044L);
	return r;
}
static inline void sdram_dfii_pi1_address_write(unsigned short int value) {
	csr_writel(value >> 8, 0xf0004040L);
	csr_writel(value, 0xf0004044L);
}
#define CSR_SDRAM_DFII_PI1_BADDRESS_ADDR 0xf0004048L
#define CSR_SDRAM_DFII_PI1_BADDRESS_SIZE 1
static inline unsigned char sdram_dfii_pi1_baddress_read(void) {
	unsigned char r = csr_readl(0xf0004048L);
	return r;
}
static inline void sdram_dfii_pi1_baddress_write(unsigned char value) {
	csr_writel(value, 0xf0004048L);
}
#define CSR_SDRAM_DFII_PI1_WRDATA_ADDR 0xf000404cL
#define CSR_SDRAM_DFII_PI1_WRDATA_SIZE 4
static inline unsigned int sdram_dfii_pi1_wrdata_read(void) {
	unsigned int r = csr_readl(0xf000404cL);
	r <<= 8;
	r |= csr_readl(0xf0004050L);
	r <<= 8;
	r |= csr_readl(0xf0004054L);
	r <<= 8;
	r |= csr_readl(0xf0004058L);
	return r;
}
static inline void sdram_dfii_pi1_wrdata_write(unsigned int value) {
	csr_writel(value >> 24, 0xf000404cL);
	csr_writel(value >> 16, 0xf0004050L);
	csr_writel(value >> 8, 0xf0004054L);
	csr_writel(value, 0xf0004058L);
}
#define CSR_SDRAM_DFII_PI1_RDDATA_ADDR 0xf000405cL
#define CSR_SDRAM_DFII_PI1_RDDATA_SIZE 4
static inline unsigned int sdram_dfii_pi1_rddata_read(void) {
	unsigned int r = csr_readl(0xf000405cL);
	r <<= 8;
	r |= csr_readl(0xf0004060L);
	r <<= 8;
	r |= csr_readl(0xf0004064L);
	r <<= 8;
	r |= csr_readl(0xf0004068L);
	return r;
}
#define CSR_SDRAM_DFII_PI2_COMMAND_ADDR 0xf000406cL
#define CSR_SDRAM_DFII_PI2_COMMAND_SIZE 1
static inline unsigned char sdram_dfii_pi2_command_read(void) {
	unsigned char r = csr_readl(0xf000406cL);
	return r;
}
static inline void sdram_dfii_pi2_command_write(unsigned char value) {
	csr_writel(value, 0xf000406cL);
}
#define CSR_SDRAM_DFII_PI2_COMMAND_ISSUE_ADDR 0xf0004070L
#define CSR_SDRAM_DFII_PI2_COMMAND_ISSUE_SIZE 1
static inline unsigned char sdram_dfii_pi2_command_issue_read(void) {
	unsigned char r = csr_readl(0xf0004070L);
	return r;
}
static inline void sdram_dfii_pi2_command_issue_write(unsigned char value) {
	csr_writel(value, 0xf0004070L);
}
#define CSR_SDRAM_DFII_PI2_ADDRESS_ADDR 0xf0004074L
#define CSR_SDRAM_DFII_PI2_ADDRESS_SIZE 2
static inline unsigned short int sdram_dfii_pi2_address_read(void) {
	unsigned short int r = csr_readl(0xf0004074L);
	r <<= 8;
	r |= csr_readl(0xf0004078L);
	return r;
}
static inline void sdram_dfii_pi2_address_write(unsigned short int value) {
	csr_writel(value >> 8, 0xf0004074L);
	csr_writel(value, 0xf0004078L);
}
#define CSR_SDRAM_DFII_PI2_BADDRESS_ADDR 0xf000407cL
#define CSR_SDRAM_DFII_PI2_BADDRESS_SIZE 1
static inline unsigned char sdram_dfii_pi2_baddress_read(void) {
	unsigned char r = csr_readl(0xf000407cL);
	return r;
}
static inline void sdram_dfii_pi2_baddress_write(unsigned char value) {
	csr_writel(value, 0xf000407cL);
}
#define CSR_SDRAM_DFII_PI2_WRDATA_ADDR 0xf0004080L
#define CSR_SDRAM_DFII_PI2_WRDATA_SIZE 4
static inline unsigned int sdram_dfii_pi2_wrdata_read(void) {
	unsigned int r = csr_readl(0xf0004080L);
	r <<= 8;
	r |= csr_readl(0xf0004084L);
	r <<= 8;
	r |= csr_readl(0xf0004088L);
	r <<= 8;
	r |= csr_readl(0xf000408cL);
	return r;
}
static inline void sdram_dfii_pi2_wrdata_write(unsigned int value) {
	csr_writel(value >> 24, 0xf0004080L);
	csr_writel(value >> 16, 0xf0004084L);
	csr_writel(value >> 8, 0xf0004088L);
	csr_writel(value, 0xf000408cL);
}
#define CSR_SDRAM_DFII_PI2_RDDATA_ADDR 0xf0004090L
#define CSR_SDRAM_DFII_PI2_RDDATA_SIZE 4
static inline unsigned int sdram_dfii_pi2_rddata_read(void) {
	unsigned int r = csr_readl(0xf0004090L);
	r <<= 8;
	r |= csr_readl(0xf0004094L);
	r <<= 8;
	r |= csr_readl(0xf0004098L);
	r <<= 8;
	r |= csr_readl(0xf000409cL);
	return r;
}
#define CSR_SDRAM_DFII_PI3_COMMAND_ADDR 0xf00040a0L
#define CSR_SDRAM_DFII_PI3_COMMAND_SIZE 1
static inline unsigned char sdram_dfii_pi3_command_read(void) {
	unsigned char r = csr_readl(0xf00040a0L);
	return r;
}
static inline void sdram_dfii_pi3_command_write(unsigned char value) {
	csr_writel(value, 0xf00040a0L);
}
#define CSR_SDRAM_DFII_PI3_COMMAND_ISSUE_ADDR 0xf00040a4L
#define CSR_SDRAM_DFII_PI3_COMMAND_ISSUE_SIZE 1
static inline unsigned char sdram_dfii_pi3_command_issue_read(void) {
	unsigned char r = csr_readl(0xf00040a4L);
	return r;
}
static inline void sdram_dfii_pi3_command_issue_write(unsigned char value) {
	csr_writel(value, 0xf00040a4L);
}
#define CSR_SDRAM_DFII_PI3_ADDRESS_ADDR 0xf00040a8L
#define CSR_SDRAM_DFII_PI3_ADDRESS_SIZE 2
static inline unsigned short int sdram_dfii_pi3_address_read(void) {
	unsigned short int r = csr_readl(0xf00040a8L);
	r <<= 8;
	r |= csr_readl(0xf00040acL);
	return r;
}
static inline void sdram_dfii_pi3_address_write(unsigned short int value) {
	csr_writel(value >> 8, 0xf00040a8L);
	csr_writel(value, 0xf00040acL);
}
#define CSR_SDRAM_DFII_PI3_BADDRESS_ADDR 0xf00040b0L
#define CSR_SDRAM_DFII_PI3_BADDRESS_SIZE 1
static inline unsigned char sdram_dfii_pi3_baddress_read(void) {
	unsigned char r = csr_readl(0xf00040b0L);
	return r;
}
static inline void sdram_dfii_pi3_baddress_write(unsigned char value) {
	csr_writel(value, 0xf00040b0L);
}
#define CSR_SDRAM_DFII_PI3_WRDATA_ADDR 0xf00040b4L
#define CSR_SDRAM_DFII_PI3_WRDATA_SIZE 4
static inline unsigned int sdram_dfii_pi3_wrdata_read(void) {
	unsigned int r = csr_readl(0xf00040b4L);
	r <<= 8;
	r |= csr_readl(0xf00040b8L);
	r <<= 8;
	r |= csr_readl(0xf00040bcL);
	r <<= 8;
	r |= csr_readl(0xf00040c0L);
	return r;
}
static inline void sdram_dfii_pi3_wrdata_write(unsigned int value) {
	csr_writel(value >> 24, 0xf00040b4L);
	csr_writel(value >> 16, 0xf00040b8L);
	csr_writel(value >> 8, 0xf00040bcL);
	csr_writel(value, 0xf00040c0L);
}
#define CSR_SDRAM_DFII_PI3_RDDATA_ADDR 0xf00040c4L
#define CSR_SDRAM_DFII_PI3_RDDATA_SIZE 4
static inline unsigned int sdram_dfii_pi3_rddata_read(void) {
	unsigned int r = csr_readl(0xf00040c4L);
	r <<= 8;
	r |= csr_readl(0xf00040c8L);
	r <<= 8;
	r |= csr_readl(0xf00040ccL);
	r <<= 8;
	r |= csr_readl(0xf00040d0L);
	return r;
}

/* spi */
#define CSR_SPI_BASE 0xf0008000L
#define CSR_SPI_CONTROL_ADDR 0xf0008000L
#define CSR_SPI_CONTROL_SIZE 2
static inline unsigned short int spi_control_read(void) {
	unsigned short int r = csr_readl(0xf0008000L);
	r <<= 8;
	r |= csr_readl(0xf0008004L);
	return r;
}
static inline void spi_control_write(unsigned short int value) {
	csr_writel(value >> 8, 0xf0008000L);
	csr_writel(value, 0xf0008004L);
}
#define CSR_SPI_CONTROL_START_OFFSET 0
#define CSR_SPI_CONTROL_START_SIZE 1
#define CSR_SPI_CONTROL_LENGTH_OFFSET 8
#define CSR_SPI_CONTROL_LENGTH_SIZE 8
#define CSR_SPI_STATUS_ADDR 0xf0008008L
#define CSR_SPI_STATUS_SIZE 1
static inline unsigned char spi_status_read(void) {
	unsigned char r = csr_readl(0xf0008008L);
	return r;
}
#define CSR_SPI_STATUS_DONE_OFFSET 0
#define CSR_SPI_STATUS_DONE_SIZE 1
#define CSR_SPI_MOSI_ADDR 0xf000800cL
#define CSR_SPI_MOSI_SIZE 1
static inline unsigned char spi_mosi_read(void) {
	unsigned char r = csr_readl(0xf000800cL);
	return r;
}
static inline void spi_mosi_write(unsigned char value) {
	csr_writel(value, 0xf000800cL);
}
#define CSR_SPI_MISO_ADDR 0xf0008010L
#define CSR_SPI_MISO_SIZE 1
static inline unsigned char spi_miso_read(void) {
	unsigned char r = csr_readl(0xf0008010L);
	return r;
}
#define CSR_SPI_CS_ADDR 0xf0008014L
#define CSR_SPI_CS_SIZE 1
static inline unsigned char spi_cs_read(void) {
	unsigned char r = csr_readl(0xf0008014L);
	return r;
}
static inline void spi_cs_write(unsigned char value) {
	csr_writel(value, 0xf0008014L);
}
#define CSR_SPI_LOOPBACK_ADDR 0xf0008018L
#define CSR_SPI_LOOPBACK_SIZE 1
static inline unsigned char spi_loopback_read(void) {
	unsigned char r = csr_readl(0xf0008018L);
	return r;
}
static inline void spi_loopback_write(unsigned char value) {
	csr_writel(value, 0xf0008018L);
}

/* spiflash */
#define CSR_SPIFLASH_BASE 0xf0005000L
#define CSR_SPIFLASH_BITBANG_ADDR 0xf0005000L
#define CSR_SPIFLASH_BITBANG_SIZE 1
static inline unsigned char spiflash_bitbang_read(void) {
	unsigned char r = csr_readl(0xf0005000L);
	return r;
}
static inline void spiflash_bitbang_write(unsigned char value) {
	csr_writel(value, 0xf0005000L);
}
#define CSR_SPIFLASH_BITBANG_MOSI_OFFSET 0
#define CSR_SPIFLASH_BITBANG_MOSI_SIZE 1
#define CSR_SPIFLASH_BITBANG_CLK_OFFSET 1
#define CSR_SPIFLASH_BITBANG_CLK_SIZE 1
#define CSR_SPIFLASH_BITBANG_CS_N_OFFSET 2
#define CSR_SPIFLASH_BITBANG_CS_N_SIZE 1
#define CSR_SPIFLASH_BITBANG_DIR_OFFSET 3
#define CSR_SPIFLASH_BITBANG_DIR_SIZE 1
#define CSR_SPIFLASH_MISO_ADDR 0xf0005004L
#define CSR_SPIFLASH_MISO_SIZE 1
static inline unsigned char spiflash_miso_read(void) {
	unsigned char r = csr_readl(0xf0005004L);
	return r;
}
#define CSR_SPIFLASH_BITBANG_EN_ADDR 0xf0005008L
#define CSR_SPIFLASH_BITBANG_EN_SIZE 1
static inline unsigned char spiflash_bitbang_en_read(void) {
	unsigned char r = csr_readl(0xf0005008L);
	return r;
}
static inline void spiflash_bitbang_en_write(unsigned char value) {
	csr_writel(value, 0xf0005008L);
}

/* switches */
#define CSR_SWITCHES_BASE 0xf0007800L
#define CSR_SWITCHES_OUT_ADDR 0xf0007800L
#define CSR_SWITCHES_OUT_SIZE 1
static inline unsigned char switches_out_read(void) {
	unsigned char r = csr_readl(0xf0007800L);
	return r;
}
static inline void switches_out_write(unsigned char value) {
	csr_writel(value, 0xf0007800L);
}

/* timer0 */
#define CSR_TIMER0_BASE 0xf0001800L
#define CSR_TIMER0_LOAD_ADDR 0xf0001800L
#define CSR_TIMER0_LOAD_SIZE 4
static inline unsigned int timer0_load_read(void) {
	unsigned int r = csr_readl(0xf0001800L);
	r <<= 8;
	r |= csr_readl(0xf0001804L);
	r <<= 8;
	r |= csr_readl(0xf0001808L);
	r <<= 8;
	r |= csr_readl(0xf000180cL);
	return r;
}
static inline void timer0_load_write(unsigned int value) {
	csr_writel(value >> 24, 0xf0001800L);
	csr_writel(value >> 16, 0xf0001804L);
	csr_writel(value >> 8, 0xf0001808L);
	csr_writel(value, 0xf000180cL);
}
#define CSR_TIMER0_RELOAD_ADDR 0xf0001810L
#define CSR_TIMER0_RELOAD_SIZE 4
static inline unsigned int timer0_reload_read(void) {
	unsigned int r = csr_readl(0xf0001810L);
	r <<= 8;
	r |= csr_readl(0xf0001814L);
	r <<= 8;
	r |= csr_readl(0xf0001818L);
	r <<= 8;
	r |= csr_readl(0xf000181cL);
	return r;
}
static inline void timer0_reload_write(unsigned int value) {
	csr_writel(value >> 24, 0xf0001810L);
	csr_writel(value >> 16, 0xf0001814L);
	csr_writel(value >> 8, 0xf0001818L);
	csr_writel(value, 0xf000181cL);
}
#define CSR_TIMER0_EN_ADDR 0xf0001820L
#define CSR_TIMER0_EN_SIZE 1
static inline unsigned char timer0_en_read(void) {
	unsigned char r = csr_readl(0xf0001820L);
	return r;
}
static inline void timer0_en_write(unsigned char value) {
	csr_writel(value, 0xf0001820L);
}
#define CSR_TIMER0_UPDATE_VALUE_ADDR 0xf0001824L
#define CSR_TIMER0_UPDATE_VALUE_SIZE 1
static inline unsigned char timer0_update_value_read(void) {
	unsigned char r = csr_readl(0xf0001824L);
	return r;
}
static inline void timer0_update_value_write(unsigned char value) {
	csr_writel(value, 0xf0001824L);
}
#define CSR_TIMER0_VALUE_ADDR 0xf0001828L
#define CSR_TIMER0_VALUE_SIZE 4
static inline unsigned int timer0_value_read(void) {
	unsigned int r = csr_readl(0xf0001828L);
	r <<= 8;
	r |= csr_readl(0xf000182cL);
	r <<= 8;
	r |= csr_readl(0xf0001830L);
	r <<= 8;
	r |= csr_readl(0xf0001834L);
	return r;
}
#define CSR_TIMER0_EV_STATUS_ADDR 0xf0001838L
#define CSR_TIMER0_EV_STATUS_SIZE 1
static inline unsigned char timer0_ev_status_read(void) {
	unsigned char r = csr_readl(0xf0001838L);
	return r;
}
static inline void timer0_ev_status_write(unsigned char value) {
	csr_writel(value, 0xf0001838L);
}
#define CSR_TIMER0_EV_PENDING_ADDR 0xf000183cL
#define CSR_TIMER0_EV_PENDING_SIZE 1
static inline unsigned char timer0_ev_pending_read(void) {
	unsigned char r = csr_readl(0xf000183cL);
	return r;
}
static inline void timer0_ev_pending_write(unsigned char value) {
	csr_writel(value, 0xf000183cL);
}
#define CSR_TIMER0_EV_ENABLE_ADDR 0xf0001840L
#define CSR_TIMER0_EV_ENABLE_SIZE 1
static inline unsigned char timer0_ev_enable_read(void) {
	unsigned char r = csr_readl(0xf0001840L);
	return r;
}
static inline void timer0_ev_enable_write(unsigned char value) {
	csr_writel(value, 0xf0001840L);
}

/* uart */
#define CSR_UART_BASE 0xf0001000L
#define CSR_UART_RXTX_ADDR 0xf0001000L
#define CSR_UART_RXTX_SIZE 1
static inline unsigned char uart_rxtx_read(void) {
	unsigned char r = csr_readl(0xf0001000L);
	return r;
}
static inline void uart_rxtx_write(unsigned char value) {
	csr_writel(value, 0xf0001000L);
}
#define CSR_UART_TXFULL_ADDR 0xf0001004L
#define CSR_UART_TXFULL_SIZE 1
static inline unsigned char uart_txfull_read(void) {
	unsigned char r = csr_readl(0xf0001004L);
	return r;
}
#define CSR_UART_RXEMPTY_ADDR 0xf0001008L
#define CSR_UART_RXEMPTY_SIZE 1
static inline unsigned char uart_rxempty_read(void) {
	unsigned char r = csr_readl(0xf0001008L);
	return r;
}
#define CSR_UART_EV_STATUS_ADDR 0xf000100cL
#define CSR_UART_EV_STATUS_SIZE 1
static inline unsigned char uart_ev_status_read(void) {
	unsigned char r = csr_readl(0xf000100cL);
	return r;
}
static inline void uart_ev_status_write(unsigned char value) {
	csr_writel(value, 0xf000100cL);
}
#define CSR_UART_EV_PENDING_ADDR 0xf0001010L
#define CSR_UART_EV_PENDING_SIZE 1
static inline unsigned char uart_ev_pending_read(void) {
	unsigned char r = csr_readl(0xf0001010L);
	return r;
}
static inline void uart_ev_pending_write(unsigned char value) {
	csr_writel(value, 0xf0001010L);
}
#define CSR_UART_EV_ENABLE_ADDR 0xf0001014L
#define CSR_UART_EV_ENABLE_SIZE 1
static inline unsigned char uart_ev_enable_read(void) {
	unsigned char r = csr_readl(0xf0001014L);
	return r;
}
static inline void uart_ev_enable_write(unsigned char value) {
	csr_writel(value, 0xf0001014L);
}

/* uart_phy */
#define CSR_UART_PHY_BASE 0xf0002000L
#define CSR_UART_PHY_TUNING_WORD_ADDR 0xf0002000L
#define CSR_UART_PHY_TUNING_WORD_SIZE 4
static inline unsigned int uart_phy_tuning_word_read(void) {
	unsigned int r = csr_readl(0xf0002000L);
	r <<= 8;
	r |= csr_readl(0xf0002004L);
	r <<= 8;
	r |= csr_readl(0xf0002008L);
	r <<= 8;
	r |= csr_readl(0xf000200cL);
	return r;
}
static inline void uart_phy_tuning_word_write(unsigned int value) {
	csr_writel(value >> 24, 0xf0002000L);
	csr_writel(value >> 16, 0xf0002004L);
	csr_writel(value >> 8, 0xf0002008L);
	csr_writel(value, 0xf000200cL);
}

/* xadc */
#define CSR_XADC_BASE 0xf0009000L
#define CSR_XADC_TEMPERATURE_ADDR 0xf0009000L
#define CSR_XADC_TEMPERATURE_SIZE 2
static inline unsigned short int xadc_temperature_read(void) {
	unsigned short int r = csr_readl(0xf0009000L);
	r <<= 8;
	r |= csr_readl(0xf0009004L);
	return r;
}
#define CSR_XADC_VCCINT_ADDR 0xf0009008L
#define CSR_XADC_VCCINT_SIZE 2
static inline unsigned short int xadc_vccint_read(void) {
	unsigned short int r = csr_readl(0xf0009008L);
	r <<= 8;
	r |= csr_readl(0xf000900cL);
	return r;
}
#define CSR_XADC_VCCAUX_ADDR 0xf0009010L
#define CSR_XADC_VCCAUX_SIZE 2
static inline unsigned short int xadc_vccaux_read(void) {
	unsigned short int r = csr_readl(0xf0009010L);
	r <<= 8;
	r |= csr_readl(0xf0009014L);
	return r;
}
#define CSR_XADC_VCCBRAM_ADDR 0xf0009018L
#define CSR_XADC_VCCBRAM_SIZE 2
static inline unsigned short int xadc_vccbram_read(void) {
	unsigned short int r = csr_readl(0xf0009018L);
	r <<= 8;
	r |= csr_readl(0xf000901cL);
	return r;
}

#endif
