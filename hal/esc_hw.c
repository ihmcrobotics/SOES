#include "cc.h"
#include "esc_hw.h"
#include "ecat_slv.h"
#include "ethercat_slave_cm_hal.h"

void ESC_read(uint16_t address, void *buf, uint16_t len)
{
    // do the actual reading
    ESC_readBlock((ESCMEM_ADDR *)buf, address, len);

    // poll AL event without a recursive call to ESC_read
    ESCvar.ALevent = ESC_readDWord(ESCREG_ALEVENT);
}

void ESC_write(uint16_t address, void *buf, uint16_t len)
{
    // do the actual writing
    ESC_writeBlock((ESCMEM_ADDR *) buf, address, len);

    // poll AL event without a recursive call to ESC_read
    ESCvar.ALevent = ESC_readDWord(ESCREG_ALEVENT);
}

void ESC_init(const esc_cfg_t *cfg)
{
//    uint16_t hw_init = ESC_initHW();
//    if (hw_init != ESC_HW_INIT_SUCCESS)
//    {
//        ESC_error(hw_init);
//    }

    ESC_initHW();
    //TODO: reset AL events here? similar to ECAT_init() in SSC?
    ESC_ALeventmaskwrite(0x0U);
}

void ESC_reset()
{
    ESC_resetESC();
}

void ESC_interrupt_enable(uint32_t mask)
{
    uint32_t readmask;
    readmask = ESC_ALeventmaskread();
    ESC_ALeventmaskwrite(readmask | mask);
    //TODO(AM): check SOES doc, DC will need sync0 enabled here as per mask

}

void ESC_interrupt_disable(uint32_t mask)
{
    uint32_t readmask;
    readmask = ESC_ALeventmaskread();
    ESC_ALeventmaskwrite(~mask & readmask);
    //TODO(AM): check SOES doc, DC will need sync0 enabled here as per mask
}

void ESC_error(uint16_t error)
{
    for (;;)
    {
    }
}
