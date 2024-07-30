#ifndef UART_H
#define UART_H

#include <stdint.h>
#include <stm32f4xx.h>
#include <stdio.h>

void uart1_tx_init();
void uart3_rx_init();
void uart_send_data(uint32_t data);

#endif // UART_H
