IHMC's Fork of Simple Open Source EtherCAT Slave (SOES)
====

Refer to the original [SOES](https://github.com/OpenEtherCATsociety/SOES) page for documentation.

This fork is intended to be compiled by TI Code Composer Studio to set up EtherCat slaves on the TMS320F28388 microcontrollers.

## TI Toolchain support

Last tested using Code Composer Studio 12.6.

This fork is meant to be compiled by the TI Arm Compiler (`ti-cgt-arm_20.2.7.LTS`), which means that any application using this must run the EtherCAT application on the Communication Module (CM) present on F2838x chips.

A local installation of C2000Ware is also needed, this fork was tested with v5.01.0 (C2000Ware_5_01_00_00).

## Glossary of miscellaneous terms
- AL - Application Layer
- EEP - Emulated EEPROM
- ESC - EtherCAT Slave Controller
- ESCSS - EtherCAT Slave Controller Sub System
- PDI - Process Data Interface
- SM - Sync Manager