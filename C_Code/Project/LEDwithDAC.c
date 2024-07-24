#include <stdint.h>
#include <stm32f4xx.h>
#include <math.h>


uint16_t analog;

void delayms(uint16_t a);


int main(void)
{
	int i;

RCC->AHB1ENR|=(1<<0);
GPIOA->MODER|=(3<<8);
GPIOA->MODER|=(3<<10);




RCC->APB1ENR|=(1<<29);
DAC->CR|=1;

while(1){
	for(i=1000;i<4096;i+=10){
		DAC->DHR12R1=i;
		analog=DAC->DHR12R1;


		delayms(1);
	}
	for(i=4096;i>0;i-=10){
			DAC->DHR12R1=i;
			analog=DAC->DHR12R1;


			delayms(1);
		}

}

}


void delayms(uint16_t a){
for(int i=0;i<a;i++){
	for(int j=0;j<16000;j++){

	}
}
}


