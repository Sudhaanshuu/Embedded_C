#include <stdint.h>
#include <stm32f4xx.h>
#include <stdio.h> // For sprintf function

void start_con();
uint32_t adc_read();
void pc2_adc_init();
void gpio_init();
void uart1_tx_init();
void uart3_rx_init();
void uart_send_data(uint32_t data);
void delay_ms(uint32_t ms);

uint32_t adc_su;
char tx[10]; // Array size updated for string storage
uint8_t rx[25];

int main(void) {
    uint8_t cnt = 0;

    pc2_adc_init();
    gpio_init();
    uart1_tx_init();
    uart3_rx_init();

    adc_su = 418;  // Default value

    while (1) {
        // Check if the button is pressed (PC8)
        if (GPIOC->IDR & (1 << 8)) {
            // Read ADC value from PC9
            start_con();
            adc_su = adc_read();

            // Convert ADC value to string and store in tx[]
            sprintf(tx, "%lu", adc_su);

            // Toggle LED on PC6 to indicate operation
            GPIOC->ODR |= (1 << 6);

            // Send ADC value to UART1
            uart_send_data(adc_su);

            // Transmit and receive data via UART
            for (cnt = 0; cnt < sizeof(tx) - 1 && tx[cnt] != '\0'; cnt++) {
                USART1->DR = tx[cnt];
                while (!(USART1->SR & (1 << 7))); // Wait for TXE

                // Ensure data is received before proceeding
                while (!(USART3->SR & (1 << 5))); // Wait for RXNE
                rx[cnt] = USART3->DR;

                // Optionally, you could add code to display or process `rx` values here

                // Delay to allow proper synchronization
                delay_ms(10);
            }

            // Delay for 1 second
            delay_ms(1000);

            // Turn off LED after operation
            GPIOC->ODR &= ~(1 << 6);
        }

        // Continuously send the latest ADC value every 1 sec when button is not pressed
        if (!(GPIOC->IDR & (1 << 8))) {
            uart_send_data(adc_su);
            delay_ms(1000);
        }
    }

    return 0;
}

void pc2_adc_init() {
    RCC->AHB1ENR |= (1 << 2);
    GPIOC->MODER |= (3 << 4);  // Analog mode for PC9

    RCC->APB2ENR |= (1 << 8);

    ADC1->SQR1 &= ~(0xF << 20);
    ADC1->SQR3 |= (0x9 << 0); // PC9 as ADC channel

    ADC1->CR1 |= (1 << 8);       // Set scan mode
    ADC1->CR2 |= (1 << 1);       // Enable continuous conversion mode
    ADC1->CR2 |= (1 << 0);       // Enable ADC

    ADC1->CR2 |= (1 << 30);      // Enable conversion
}

void start_con() {
    ADC1->CR2 |= (1 << 30);
}

uint32_t adc_read() {
    while (!(ADC1->SR & (1 << 1))) {}
    return ADC1->DR;
}

void gpio_init() {
    // Enable clock for GPIOA and GPIOC
    RCC->AHB1ENR |= (1 << 0) | (1 << 2);

    // Configure PA9 and PA10 for UART1 (Alternate Function)
    GPIOA->MODER |= (2 << 18) | (2 << 20);
    GPIOA->AFR[1] |= (7 << 4) | (7 << 8);

    // Configure PC10 and PC11 for UART3 (Alternate Function)
    GPIOC->MODER |= (2 << 20) | (2 << 22);
    GPIOC->AFR[1] |= (7 << 8) | (7 << 12);

    // Configure PA5 for LED (Output mode)
    GPIOA->MODER |= (1 << 10);

    // Configure PC6 for LED (Output mode)
    GPIOC->MODER |= (1 << 12);

    // Configure PC8 for Button (Input mode)
    GPIOC->MODER &= ~(3 << 16);

    // Configure PC9 for ADC (Analog mode)
    GPIOC->MODER |= (3 << 18);
}

void uart1_tx_init() {
    RCC->APB2ENR |= (1 << 4);    // USART1 clock
    USART1->BRR = 0x683;         // Baud rate
    USART1->CR1 |= (1 << 3);     // TE bit no 3, enabling transmission
    USART1->CR1 |= (1 << 13);    // UE bit no 13, enabling USART
}

void uart3_rx_init() {
    RCC->APB1ENR |= (1 << 18);   // USART3 clock
    USART3->BRR = 0x683;         // Baud rate
    USART3->CR1 |= (1 << 2);     // RE bit no 2, enabling receiving
    USART3->CR1 |= (1 << 13);    // UE bit no 13, enabling USART
}

void uart_send_data(uint32_t data) {
    char buffer[10];
    sprintf(buffer, "%lu\n", data);

    for (uint8_t i = 0; buffer[i] != '\0'; i++) {
        USART1->DR = buffer[i];
        while (!(USART1->SR & (1 << 7))); // Wait for TXE
    }
}

void delay_ms(uint32_t ms) {
    for (uint32_t i = 0; i < ms; i++) {
        for (uint32_t j = 0; j < 16000; j++) {}
    }
}
