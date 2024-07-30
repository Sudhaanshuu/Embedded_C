#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>
#include <stm32f4xx.h>

void gpio_init();
void delay_ms(uint32_t ms);

#endif // GPIO_H
