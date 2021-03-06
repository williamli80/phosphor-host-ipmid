#ifndef __HOST_IPMI_CHASSIS_HANDLER_H__
#define __HOST_IPMI_CHASSIS_HANDLER_H__

#include <stdint.h>

// IPMI commands for Chassis net functions.
enum ipmi_netfn_app_cmds
{
	// Chassis Control
	IPMI_CMD_CHASSIS_CONTROL	  = 0x02,
    // Get capability bits
    IPMI_CMD_GET_SYS_BOOT_OPTIONS = 0x09,
};

// Command specific completion codes
enum ipmi_chassis_return_codes
{
    IPMI_CC_PARM_NOT_SUPPORTED = 0x80,
};

// Various Chassis operations under a single command.
enum ipmi_chassis_control_cmds : uint8_t
{
	CMD_POWER_OFF 			   = 0x00,
	CMD_POWER_ON 			   = 0x01,
	CMD_POWER_CYCLE 		   = 0x02,
	CMD_HARD_RESET 			   = 0x03,
	CMD_PULSE_DIAGNOSTIC_INTR  = 0x04,
	CMD_SOFT_OFF_VIA_OVER_TEMP = 0x05,
};

#endif
