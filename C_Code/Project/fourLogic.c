#include <stdint.h>
#include <stm32f4xx.h>

void GPIO_init();
void delay();
void tim3();
void fLed();
void sLed();
void tLed();
void fOLed();


int main(void)
{
	GPIO_init();
	tim3();
while(1){
	fLed();
	delay();
	sLed();
	delay();
	tLed();
	delay();
	fOLed();
	delay();

}
}
void GPIO_init(){
	RCC->AHB1ENR|=(1<<0);
	RCC->AHB1ENR|=(1<<2);
	RCC->APB1ENR|=(1<<1);

	GPIOA->MODER|=(1<<10);
	GPIOA->MODER&=~(1<<11);

	GPIOC->MODER|=(1<<12);
	GPIOC->MODER&=~(1<<13);


}

void delay(){
	while(!(TIM3->SR &(1<<0)));
	TIM3->SR &= ~(1<<0);

}
void tim3(){
TIM3->PSC=32000;
TIM3->ARR=1000-1;
TIM3->CNT=0;
TIM3->CR1|=(1<<0);
}
void fLed(){
	GPIOA->ODR&=~(1<<5);
	GPIOC->ODR&=~(1<<6);

}
void sLed(){
	GPIOA->ODR|=(1<<5);
	GPIOC->ODR&=~(1<<6);

}
void tLed(){
	GPIOA->ODR&=~(1<<5);
	GPIOC->ODR|=(1<<6);

}
void fOLed(){
	GPIOA->ODR|=(1<<5);
	GPIOC->ODR|=(1<<6);

}