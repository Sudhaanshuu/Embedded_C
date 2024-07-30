#include "uart.h"

void uart1_tx_init() {
    RCC->APB2ENR |= (1 << 4);    // USART1 clock
    USART1->BRR = 0x683;         // baud rate
    USART1->CR1 |= (1 << 3);     // TE bit no 3, enabling transmission
    USART1->CR1 |= (1 << 13);    // UE bit no 13, enabling USART
}

void uart3_rx_init() {
    RCC->APB1ENR |= (1 << 18);   // USART3 clock
    USART3->BRR = 0x683;         // baud rate
    USART3->CR1 |= (1 << 2);     // RE bit no 2, enabling receiving
    USART3->CR1 |= (1 << 13);    // UE bit no 13, enabling USART
}

void uart_send_data(uint32_t data) {
    char buffer[10];
    for (uint8_t i = 0; buffer[i] != '\0'; i++) {
        USART1->DR = buffer[i];
        while (!(USART1->SR & (1 << 7))); // Wait for TXE
    }
}
