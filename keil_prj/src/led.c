#include "stc8h.h"
#include "led.h"

#define LED_PORT P3
#define LED_PIN  4

sbit led_out = LED_PORT^LED_PIN;


void led_init()
{
	P3M0 |= 0x10; 
	P3M1 &= ~0x10; 
}

void led_set(uint8_t enable)
{
	led_out = enable;
}

uint8_t led_get()
{
	uint8_t state = led_out;
	
	return state;
}

