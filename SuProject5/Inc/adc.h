#ifndef ADC_H
#define ADC_H

#include <stdint.h>
#include <stm32f4xx.h>

void pc9_adc_init();
void start_con();
uint32_t adc_read();

#endif // ADC_H
