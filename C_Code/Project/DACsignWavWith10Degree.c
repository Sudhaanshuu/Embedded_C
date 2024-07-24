#include <stdint.h>
#include <stm32f4xx.h>
#include <math.h>


uint16_t analog,p,q;
void delayms(uint16_t a);
void suku(int p);

int main(void)
{
int i;
const static int sw[] ={2047, 2403, 2747, 3071, 3363, 3615, 3820, 3971, 4063, 4095, 4063, 3971,
		3820, 3615, 3363, 3071, 2747, 2403, 2047, 1691, 1347, 1023, 731, 479, 274,
		 123, 31, 0, 31, 123, 274, 479, 731, 1023, 1347, 1691};
RCC->AHB1ENR|=(1<<0);
GPIOA->MODER|=(3<<8);
GPIOA->MODER|=(3<<10);
GPIOA->MODER|=(1<<10);
GPIOA->MODER&=~(1<<11);


RCC->APB1ENR|=(1<<29);
DAC->CR|=1;

while(1){
	for(i=0;i<36;i++){
		DAC->DHR12R1=sw[i];//rf-417 page
		analog=DAC->DHR12R1;

		delayms(10);
	}

}

}


void delayms(uint16_t a){
for(int i=0;i<a;i++){
	for(int j=0;j<16000;j++){

	}
}
}


