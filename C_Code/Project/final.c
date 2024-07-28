#include <stdint.h>
#include <stm32f4xx.h>


void start_con();
uint32_t adc_read();
void pc2_adc_init();
void GPIO_init();
void uart1_init();
void uart_send_data(uint32_t data);
void delay_ms(uint32_t ms);


uint32_t adc_su;

int main(void) {

    pc2_adc_init();
    GPIO_init();
    uart1_init();


    while (1) {

        adc_su = 418;  // default

        // Send to UART
        uart_send_data(adc_su);


        GPIOA->ODR ^= (1 << 5);  // PA5

        delay_ms(100);
    }

    return 0;
}

void pc2_adc_init() {
    RCC->AHB1ENR |= (1 << 2);
    GPIOC->MODER |= (3 << 4);  // analog mode

    RCC->APB2ENR |= (1 << 8);

    ADC1->SQR1 &= ~(0xF << 20);
    ADC1->SQR3 |= (0xC << 0);

    ADC1->CR1 |= (1 << 8);       // Set scan mode
    ADC1->CR2 |= (1 << 1);       // Enable continuous conversion mode
    ADC1->CR2 |= (1 << 0);       // Enable ADC


    ADC1->CR2 |= (1 << 30);//Enable conversion
}


void start_con() {
    ADC1->CR2 |= (1 << 30);
}


uint32_t adc_read() {
    while (!(ADC1->SR & (1 << 1))) {

    }
    return ADC1->DR;
}


void GPIO_init() {
    RCC->AHB1ENR |= (1 << 0);
    GPIOA->MODER |= (2 << 18) | (2 << 20);  // Set PA9, PA10 to af mode
    GPIOA->AFR[1] |= (7 << 4) | (7 << 8);   // Set AF7 for USART1 on PA9, PA10


    GPIOA->MODER |= (1 << 10);   // Led as op
}


void uart1_init() {
    RCC->APB2ENR |= (1 << 4);    // USART1 clock
    USART1->BRR = 0x683;         // baud rate
    USART1->CR1 |= (1 << 3);
    USART1->CR1 |= (1 << 13);
}


void uart_send_data(uint32_t data) {
    char buffer[10];
    sprintf(buffer, "%lu\n", data);

    for (uint8_t i = 0; buffer[i] != '\0'; i++) {
        USART1->DR = buffer[i];
        while (!(USART1->SR & (1 << 7))) {

        }
    }
}


void delay_ms(uint32_t ms) {
    for (uint32_t i = 0; i < ms ; i++) {
    	for(uint32_t  j=0;j<16000;j++){

    	}

    }
}
