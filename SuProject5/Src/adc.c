#include "adc.h"

void pc9_adc_init() {
    RCC->AHB1ENR |= (1 << 2); // Enable clock for GPIOC
    GPIOC->MODER |= (3 << 18);  // Set PC9 to analog mode

    RCC->APB2ENR |= (1 << 8); // Enable clock for ADC1

    ADC1->SQR1 &= ~(0xF << 20);
    ADC1->SQR3 |= (9 << 0); // Select PC9 (ADC Channel 9)

    ADC1->CR1 |= (1 << 8);       // Set scan mode
    ADC1->CR2 |= (1 << 1);       // Enable continuous conversion mode
    ADC1->CR2 |= (1 << 0);       // Enable ADC
}

void start_con() {
    ADC1->CR2 |= (1 << 30);      // Start conversion
}

uint32_t adc_read() {
    while (!(ADC1->SR & (1 << 1))); // Wait for conversion to complete
    return ADC1->DR;
}
