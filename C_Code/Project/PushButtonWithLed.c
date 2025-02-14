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
void gpio_init();

uint32_t *ABH1=(uint32_t*)0x40023830;
uint32_t *GPIOC_Moder=(uint32_t*)0x40020800;
uint32_t *GPIO_IDR=(uint32_t*)0x40020810;
uint32_t *GPIOA_Moder=(uint32_t*)0x40020000;
uint32_t *GPIOA_ODR=(uint32_t*)0x40020014;

int main(void)
{
	gpio_init();
while(1){
	while(*GPIO_IDR &(1<<13)){
		*GPIOA_ODR &=~(1<<5);
	}
		*GPIOA_ODR |= (1<<5);


}

}
void gpio_init(){
	*ABH1 |= (1<<0);
	*ABH1 |= (1<<2);
    *GPIOA_Moder &=(~(1<<11));
    *GPIOA_Moder|=(1<<10);

    *GPIOC_Moder &=(~(1<<26));
    *GPIOC_Moder &=(~(1<<27));

}

