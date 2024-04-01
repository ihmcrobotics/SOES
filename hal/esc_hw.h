#ifndef __esc_hw__
#define __esc_hw__

#include <cc.h>

void ESC_interrupt_enable (uint32_t mask);
void ESC_interrupt_disable (uint32_t mask);

void ESC_error(uint16_t error);

#endif
