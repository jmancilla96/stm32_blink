#include "libopencm3/stm32/f4/rcc.h"
#include "libopencm3/stm32/f4/gpio.h"

static void
gpio_setup(void){

	rcc_periph_clock_enable(RCC_GPIOA);

	gpio_mode_setup(GPIOA, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO5);
}


int main (void) {

	int i;

	gpio_setup();

	for(;;) {
		gpio_clear(GPIOA, GPIO5);
		for (i = 0; i < 15000000; i++)
			__asm__("nop");

		gpio_set(GPIOA, GPIO5);
		for (i = 0; i < 5000000; i++)
                        __asm__("nop");
 





	}

return 0;




}


