#include "gpio.h"

void gpio_init() {
    // Enable clock for GPIOA and GPIOC
    RCC->AHB1ENR |= (1 << 0) | (1 << 2);

    // Configure PA9 and PA10 for UART1 (Alternate Function)
    GPIOA->MODER |= (2 << 18) | (2 << 20);
    GPIOA->AFR[1] |= (7 << 4) | (7 << 8);

    // Configure PC10 and PC11 for UART3 (Alternate Function)
    GPIOC->MODER |= (2 << 20) | (2 << 22);
    GPIOC->AFR[1] |= (7 << 8) | (7 << 12);

    // Configure PC6 for LED (Output mode)
    GPIOC->MODER |= (1 << 12);

    // Configure PC8 for Button (Input mode)
    GPIOC->MODER &= ~(3 << 16);
}

void delay_ms(uint32_t ms) {
    for (uint32_t i = 0; i < ms; i++) {
        for (uint32_t j = 0; j < 16000; j++) {}
    }
}
