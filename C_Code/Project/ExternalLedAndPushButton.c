/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
uint32_t *ABh1_RCC=(uint32_t*)0x40023830;
uint32_t *GPIOC_ODR_LED=(uint32_t*)0x40020814;
uint32_t *GPIOC_MODER_LED6=(uint32_t*)0x40020800;
uint32_t *GPIOC_IDR_B=(uint32_t*)0x40020810;
uint32_t *GPIOC_MODER8_B=(uint32_t*)0x40020800;
uint32_t *GPIOC_PUPDR=(uint32_t*)0x4002080C;


void gpio_init();

int main(void)
{
	gpio_init();
	while(1) {
	        if (*GPIOC_IDR_B & (1 << 8)) {
	            *GPIOC_ODR_LED |= (1 << 6);
	        } else {
	            *GPIOC_ODR_LED &= ~(1 << 6);
	        }
	    }
}
void gpio_init(){
	*ABh1_RCC |= (1<<0);
	*ABh1_RCC |= (1<<2);


	*GPIOC_MODER_LED6 &=(~(1<<13));
	*GPIOC_MODER_LED6 |=(1<<12);

	*GPIOC_MODER8_B &=(~(1<<16));
	*GPIOC_MODER8_B &=(~(1<<17));

	*GPIOC_PUPDR &=(~(1<<16));
	*GPIOC_PUPDR |=(1<<17);

}
