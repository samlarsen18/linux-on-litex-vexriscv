#ifndef __GENERATED_SDRAM_PHY_H
#define __GENERATED_SDRAM_PHY_H
#include <hw/common.h>
#include <generated/csr.h>
#include <hw/flags.h>

#define DFII_NPHASES 2

static void cdelay(int i);

__attribute__((unused)) static void command_p0(int cmd)
{
    sdram_dfii_pi0_command_write(cmd);
    sdram_dfii_pi0_command_issue_write(1);
}
__attribute__((unused)) static void command_p1(int cmd)
{
    sdram_dfii_pi1_command_write(cmd);
    sdram_dfii_pi1_command_issue_write(1);
}


#define sdram_dfii_pird_address_write(X) sdram_dfii_pi1_address_write(X)
#define sdram_dfii_piwr_address_write(X) sdram_dfii_pi0_address_write(X)
#define sdram_dfii_pird_baddress_write(X) sdram_dfii_pi1_baddress_write(X)
#define sdram_dfii_piwr_baddress_write(X) sdram_dfii_pi0_baddress_write(X)
#define command_prd(X) command_p1(X)
#define command_pwr(X) command_p0(X)

#define DFII_PIX_DATA_SIZE CSR_SDRAM_DFII_PI0_WRDATA_SIZE

const unsigned long sdram_dfii_pix_wrdata_addr[2] = {
    CSR_SDRAM_DFII_PI0_WRDATA_ADDR,
	CSR_SDRAM_DFII_PI1_WRDATA_ADDR
};

const unsigned long sdram_dfii_pix_rddata_addr[2] = {
    CSR_SDRAM_DFII_PI0_RDDATA_ADDR,
	CSR_SDRAM_DFII_PI1_RDDATA_ADDR
};

static void init_sequence(void)
{
	/* Bring CKE high */
	sdram_dfii_pi0_address_write(0x0);
	sdram_dfii_pi0_baddress_write(0);
	sdram_dfii_control_write(DFII_CONTROL_CKE|DFII_CONTROL_ODT|DFII_CONTROL_RESET_N);
	cdelay(20000);

	/* Precharge All */
	sdram_dfii_pi0_address_write(0x400);
	sdram_dfii_pi0_baddress_write(0);
	command_p0(DFII_COMMAND_RAS|DFII_COMMAND_WE|DFII_COMMAND_CS);

	/* Load Extended Mode Register 3 */
	sdram_dfii_pi0_address_write(0x0);
	sdram_dfii_pi0_baddress_write(3);
	command_p0(DFII_COMMAND_RAS|DFII_COMMAND_CAS|DFII_COMMAND_WE|DFII_COMMAND_CS);

	/* Load Extended Mode Register 2 */
	sdram_dfii_pi0_address_write(0x0);
	sdram_dfii_pi0_baddress_write(2);
	command_p0(DFII_COMMAND_RAS|DFII_COMMAND_CAS|DFII_COMMAND_WE|DFII_COMMAND_CS);

	/* Load Extended Mode Register */
	sdram_dfii_pi0_address_write(0x0);
	sdram_dfii_pi0_baddress_write(1);
	command_p0(DFII_COMMAND_RAS|DFII_COMMAND_CAS|DFII_COMMAND_WE|DFII_COMMAND_CS);

	/* Load Mode Register / Reset DLL, CL=3, BL=4 */
	sdram_dfii_pi0_address_write(0x532);
	sdram_dfii_pi0_baddress_write(0);
	command_p0(DFII_COMMAND_RAS|DFII_COMMAND_CAS|DFII_COMMAND_WE|DFII_COMMAND_CS);
	cdelay(200);

	/* Precharge All */
	sdram_dfii_pi0_address_write(0x400);
	sdram_dfii_pi0_baddress_write(0);
	command_p0(DFII_COMMAND_RAS|DFII_COMMAND_WE|DFII_COMMAND_CS);

	/* Auto Refresh */
	sdram_dfii_pi0_address_write(0x0);
	sdram_dfii_pi0_baddress_write(0);
	command_p0(DFII_COMMAND_RAS|DFII_COMMAND_CAS|DFII_COMMAND_CS);
	cdelay(4);

	/* Auto Refresh */
	sdram_dfii_pi0_address_write(0x0);
	sdram_dfii_pi0_baddress_write(0);
	command_p0(DFII_COMMAND_RAS|DFII_COMMAND_CAS|DFII_COMMAND_CS);
	cdelay(4);

	/* Load Mode Register / CL=3, BL=4 */
	sdram_dfii_pi0_address_write(0x432);
	sdram_dfii_pi0_baddress_write(0);
	command_p0(DFII_COMMAND_RAS|DFII_COMMAND_CAS|DFII_COMMAND_WE|DFII_COMMAND_CS);
	cdelay(200);

	/* Load Extended Mode Register / OCD Default */
	sdram_dfii_pi0_address_write(0x380);
	sdram_dfii_pi0_baddress_write(1);
	command_p0(DFII_COMMAND_RAS|DFII_COMMAND_CAS|DFII_COMMAND_WE|DFII_COMMAND_CS);

	/* Load Extended Mode Register / OCD Exit */
	sdram_dfii_pi0_address_write(0x0);
	sdram_dfii_pi0_baddress_write(1);
	command_p0(DFII_COMMAND_RAS|DFII_COMMAND_CAS|DFII_COMMAND_WE|DFII_COMMAND_CS);

}
#endif
