IHMC's Fork of Simple Open Source EtherCAT Slave (SOES)
====

Refer to the original [SOES](https://github.com/OpenEtherCATsociety/SOES) page for original documentation.

This fork is intended to be compiled by TI Code Composer Studio to set up EtherCAT slaves on the TMS320F28388 microcontrollers.

## TI Toolchain support

Last tested using Code Composer Studio 12.6.

This fork is meant to be compiled by the TI Arm Compiler (`ti-cgt-arm_20.2.7.LTS`), which means that any application using this must run the EtherCAT application on the Communication Module (CM) present on F2838x chips.

A local installation of C2000Ware is also needed, this fork was tested with v5.01.0 (C2000Ware_5_01_00_00).

## Usage

1. Include this repo in your CM EtherCAT project and add all subfolders (`SOES/hal`, `SOES/soes`) to the include path of the project.
2. Create the required application files, i.e., `ecat_def.h`, `ecat_options.h`, `objectlist.c` and `utypes.h` in the project directory. Note that the latter three can be either handwritten or generated using RT-Labs Ethercat Slave Editor (recommended). 
    * Refer to EtherCAT examples provided by TI to understand the contents of `ecat_def.h`
    * Also refer to the example applications in the upstream SOES repo for examples.
3. Implement the application specific input and output callback functions (`cb_set_inputs()` and `cb_set_outputs`) to handle data transfer to and from the EtherCAT stack. Depending on the EtherCAT configuration, `PDI_Isr()`, `Sync0_Isr()`, `Sync1_Isr()` and other application hooks might also need to be implemented.

Also refer to [jaha-hydrausnacks-firmware](https://github.com/ihmcrobotics/jaha-hydrausnacks-firmware) for an example. This SOES fork is set up as a submodule within that repo.

## Glossary of miscellaneous acronyms
- AL - Application Layer
- EEP - Emulated EEPROM
- ESC - EtherCAT Slave Controller
- ESCSS - EtherCAT Slave Controller Sub System
- PDI - Process Data Interface
- SII - Slave Information Interface
- SM - Sync Manager