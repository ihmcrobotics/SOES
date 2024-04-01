#ifndef _ECATDEF_H_
#define _ECATDEF_H_

#include <stdlib.h>
#include <string.h>

/**
 AL_EVENT_ENABLED: If an interrupt routine shall be called when one of the Events in the AL Event Register (0x220) changes, <br>
 this switch has to be defined to 1 (synchronous modes are supported). <br>
 If the AL Event register shall only be polled, this switch has to be defined to 0 (only free run mode is supported). */
#ifndef AL_EVENT_ENABLED
#define AL_EVENT_ENABLED                          1 //This define was already evaluated by ET9300 Project Handler(V. 1.5.3.0)!
#endif

/**
 DC_SUPPORTED: If distributed clocks should be supported by the slave, this switch shall be set.<br>
 NOTE: The DC support needs also be set in the "ESC_CONFIG_DATA" settings. */
#ifndef DC_SUPPORTED
#define DC_SUPPORTED                              0 //This define was already evaluated by ET9300 Project Handler(V. 1.5.3.0)!
#endif

/**
 ECAT_TIMER_INT: If this switch is set, then the watchdog time for the EtherCAT watchdog will be checked in a timer interrupt routine. */
#ifndef ECAT_TIMER_INT
#define ECAT_TIMER_INT                            0 //This define was already evaluated by ET9300 Project Handler(V. 1.5.3.0)!
#endif

#ifndef WATCHDOG_ENABLE
#define WATCHDOG_ENABLE                            0 //This define was already evaluated by ET9300 Project Handler(V. 1.5.3.0)!
#endif


/*-----------------------------------------------------------------------------------------
 ------
 ------  Application Specific Defines
 ------
 -----------------------------------------------------------------------------------------*/

/**
 VENDOR_ID: Object 0x1018 SI1 (Vendor ID)     <br>
 An unique EtherCAT Vendor ID is required. Please find all valid Vendor IDs listed at www.ethercat.org/en/vendor_id_list.html.<br>
 If your company is not listed, please assign an ID for free at www.ethercat.org/memberarea/vendor_id.asp */
#ifndef VENDOR_ID
#define VENDOR_ID                                 0x603
#endif

/**
 PRODUCT_CODE: Object 0x1018 SI2 (EtherCAT product code) */
#ifndef PRODUCT_CODE
#define PRODUCT_CODE                              0x0000ABCD
#endif

/**
 REVISION_NUMBER: Object 0x1018 SI3 (EtherCAT product revision number) */
#ifndef REVISION_NUMBER
#define REVISION_NUMBER                           0x0000BEEF
#endif

/**
 SERIAL_NUMBER: Object 0x1018 SI4 (EtherCAT product serial number) */
#ifndef SERIAL_NUMBER
#define SERIAL_NUMBER                             0x0000DEAD
#endif

/**
 DEVICE_PROFILE_TYPE: Slave device type (Object 0x1000)  */
#ifndef DEVICE_PROFILE_TYPE
#define DEVICE_PROFILE_TYPE                       0x00001389
#endif

/**
 DEVICE_NAME: Name of the slave device (Object 0x1008) */
#ifndef DEVICE_NAME
#define DEVICE_NAME                               "Current_Control_Test"
#endif

/**
 DEVICE_HW_VERSION: Hardware version of the slave device (Object 0x1009) */
#ifndef DEVICE_HW_VERSION
#define DEVICE_HW_VERSION                         "0.69"
#endif

/**
 DEVICE_SW_VERSION: Software version of the slave device (Object 0x100A) */
#ifndef DEVICE_SW_VERSION
#define DEVICE_SW_VERSION                         "4.20"
#endif

#endif // _ECATDEF_H_
