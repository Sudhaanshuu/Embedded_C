#include <stdint.h>
#include<stm32f4xx.h>
#include "spi.h"

char dest[20];
char source[] = "CGUniversity";

int main(void)
{
    uint32_t count = 0;
    gpio_init();
    SPI1_master();
    SPI3_slave();

    for(count = 0; count<sizeof(source); count++){
    	SPI1->DR = source[count]; /// sending data from SPI-1
    	while(!(SPI1->SR & (1<<1))){

    	} // wait until TX buffer is empty
    	if(SPI3->SR  & (1<<0)){
    		dest[count] = SPI3->DR; // check  variable rc in live expression,
    	}
    }
    while(1);
}
void gpio_init(){
	RCC->AHB1ENR |= (1<<0);
	GPIOA->MODER |= (2<<10) | (2<<12) | (2<<14);
	GPIOA->OSPEEDR |= (2<<10) | (2<<12) | (2<<14);
	GPIOA->AFR[0] |= (0x555 << 20);

	//FOR GPIOC PIN
	RCC->AHB1ENR |= (1<<2);
	GPIOC->MODER |= (2<<20) | (2<<22) | (2<<24);
	GPIOC->OSPEEDR |= (2<<20) | (2<<22) | (2<<24);
	GPIOC->AFR[1] |= (0x666 << 8);
}

void  SPI1_master(){
	RCC->APB2ENR |= (1<<12);
	SPI1->CR1 |= (1<<0) | (1<<1);
	SPI1->CR1 |= (1<<2);
	SPI1->CR1 |= (0x3<<3);
	SPI1->CR1 &= ~(1<<7); // MSB first
	SPI1->CR1 |= (1<<9); // ENABLE THE SLAVE MANAGEMENT FIRST
	SPI1->CR1 |= (1<<8); // THEN SELECT THE REQUIRED INTERNAL SLAVE
	SPI1->CR1 &= ~(1<<10); // FOR FULL DUPLEX TRANSMISSION
	SPI1->CR1  &= ~(1<<11); // SET FOR 8 BIT FORMAT
	SPI1->CR1 &= ~(3<<12); // FULL DUPLEX : 0, UNIDIRECTIONAL: 1
	SPI1->CR1 &= ~(1<<15); // UNIDIRECTIONAL: 0 (2LINE , 1 FOR SENDING & 1 FOR RECIEVING) IF BIDIRECTIONAL: 1 (1LINE)
	SPI1->CR1 |= (1<<6); // SPI ENABLED
}

void SPI3_slave(){
	RCC->APB1ENR |= (1<<15); // SPI3 CLOCK ENABLE
	SPI3->CR1 &= ~(1<<2); // SLAVE MODE ENABLE
	SPI3->CR1 |= (1<<0) | (1<<1); // CPHA = 1, CPOL = 1
	SPI3->CR1 &= ~(1<<7); // MSB BIT FIRST
	SPI3->CR1 |= (1<<9); // ENABLE THE SLAVE MANAGEMENT
	SPI3->CR1 &= ~(1<<8); // CLEARING THE INTERNAL SLAVE SELECTION AS WE ARE NOT USING THE DAISY CHAINING METHOD
	SPI3->CR1 &= ~(1<<10); // FULL DUPLEX
	SPI3->CR1 &= ~(1<<11); // 8 BIT FORMAT
	SPI3->CR1 &= ~(3<<12); // NO CRC  -> FULL DUPLEX
	SPI3->CR1 &= ~(1<<15); // UNIDIRECTIONAL
	SPI3->CR1 |= (1<<6); // SPI ENABLED
}
