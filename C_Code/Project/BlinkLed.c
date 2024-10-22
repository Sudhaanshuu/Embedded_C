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
uint32_t* suAHB1_Enabler=(uint32_t*) 0x40023830;//RCC AHB1
uint32_t* suGPIOA_Moder=(uint32_t*) 0x40020000;//GPIO MODER
uint32_t* suGPIOAODR=(uint32_t*)0x40020014;//GPIOA ODR


int main(void)
{
	gpio_init();

while(1){
*suGPIOAODR |= (1<<5);
for(int i=0;i<50000;i++){

}
*suGPIOAODR &= ~(1<<5);
for(int i=0;i<50000;i++){

}

}

}
void gpio_init(){
	*suAHB1_Enabler |=  (1<<0);
	*suGPIOA_Moder &=(~(1<<11));
	*suGPIOA_Moder |=(1<<10);
}


