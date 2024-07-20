#include <stdint.h>
#include <stm32f4xx.h>

uint32_t volatile *pNVICIRQEnReg = (uint32_t*)0xE000E100;

void GPIO_init();
void TIM2_init();
void TIM3_init();
void delay();

int main(void)
{
    GPIO_init();
    TIM2_init();
    TIM3_init();
    *pNVICIRQEnReg |= (1<<28);
    while(1){

    	GPIOC->ODR |= (1 << 6);  // Set PC6
    	delay();
//    	GPIOC->ODR &= ~(1 << 6); // Reset PC6
//    	delay();



    }
}

void GPIO_init() {

    RCC->AHB1ENR |= (1 << 0);  // GPIOA
    RCC->AHB1ENR |= (1 << 2);  // GPIOC

    GPIOA->MODER |= (1 << 10);
    GPIOA->MODER &= ~(1 << 11);

    GPIOC->MODER &= ~(1 << 16);
    GPIOC->MODER &= ~(1 << 17);

    GPIOC->MODER |= (1 << 12);
    GPIOC->MODER &= ~(1 << 13);

    GPIOC->PUPDR &= ~(1 << 16);
    GPIOC->PUPDR |= (1 << 17);
}
