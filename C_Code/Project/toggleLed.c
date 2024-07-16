
#include <stdint.h>
uint32_t *AHB1ENB=(uint32_t*)0x40023830;

uint32_t *suGPIOC_LED_ODR=(uint32_t*)0x40020814;
uint32_t *suGPIOC_MODER6=(uint32_t*)0x40020800;

uint32_t *suGPIOALED_ODR=(uint32_t*)0x40020014;
uint32_t *suGPIOAMODER5=(uint32_t*)0x40020000;

uint32_t *suGPIOC_Button_IDR=(uint32_t*)0x40020810;
uint32_t *suGPIOC_BUTTON_MODER8=(uint32_t*)0x40020800;
uint32_t *suGPIOC_PUPDR=(uint32_t*)0x4002080c;

void GPIO_init();

int main(void)
{
	GPIO_init();

	*suGPIOC_LED_ODR |=(1<<6);
	while(1){


		while(*suGPIOC_Button_IDR & (1<<8))
		{

			*suGPIOC_LED_ODR^=(1<<6);

			*suGPIOALED_ODR^=(1<<5);

			while(*suGPIOC_Button_IDR & (1<<8));
		}
}
}
void GPIO_init(){
	*AHB1ENB|=(1<<0);
	*AHB1ENB|=(1<<2);

	*suGPIOC_BUTTON_MODER8&=~(1<<16);
	*suGPIOC_BUTTON_MODER8&=~(1<<17);

	*suGPIOC_MODER6|=(1<<12);
	*suGPIOC_MODER6&=~(1<<13);

	*suGPIOAMODER5|=(1<<10);
	*suGPIOAMODER5&=~(1<<11);

	//Pull Down
	*suGPIOC_PUPDR|=(1<<17);
	*suGPIOC_PUPDR&=~(1<<16);

}
