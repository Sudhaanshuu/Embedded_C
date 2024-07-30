#include "adc.h"
#include "gpio.h"
#include "uart.h"

uint32_t adc_val = 0;
uint32_t last_adc_val = 0;
uint8_t rx[8];

int main(void) {
    uint8_t cnt = 0;

    pc9_adc_init();
    gpio_init();
    uart1_tx_init();
    uart3_rx_init();

    while (1) {
        if (!(GPIOC->IDR & (1 << 8))) { // Button pressed
            // Start ADC conversion
            start_con();
            adc_val = adc_read();

            if (adc_val != last_adc_val) {
                GPIOC->ODR |= (1 << 6);

                uart_send_data(adc_val);

                // Transmit and receive data via UART
                for (cnt = 0; cnt < sizeof(rx); cnt++) {
                    USART1->DR = (adc_val >> (cnt * 8)) & 0xFF;
                    while (!(USART1->SR & (1 << 7))); // Wait for TX

                    while (!(USART3->SR & (1 << 5))); // Wait for RX
                    rx[cnt] = USART3->DR;

                    delay_ms(50);
                }

                last_adc_val = adc_val;

                GPIOC->ODR &= ~(1 << 6);

                // Delay for 1 second
                delay_ms(500);
            }
        } else {
            uart_send_data(last_adc_val);

            GPIOC->ODR &= ~(1 << 6);
        }
    }

    return 0;
}
