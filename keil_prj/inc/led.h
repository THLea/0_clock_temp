#ifndef __LED_H__
#define __LED_H__

#include "main.h"


extern void led_init();
extern void led_set(uint8_t enable);
extern uint8_t led_get();

#endif

