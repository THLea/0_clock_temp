#include "stc8h.h"
#include "intrins.h"
#include "main.h"
#include "led.h"

//system resource init(such as clock frequency etc.)
static void system_init();
//such as led, seg, rtc chip, sensor etc.
static void peripheral_init();

void Delay500ms()		//@24.000MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 61;
	j = 225;
	k = 62;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main()
{
	system_init();
	peripheral_init();
	
	while(1)
	{
		led_set(!led_get());
		Delay500ms();
	}
}

void system_init()
{}
	
void peripheral_init()
{
	led_init();
}

