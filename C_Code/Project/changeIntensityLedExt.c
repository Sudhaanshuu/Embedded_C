
#include <stdint.h>
#include<stm32f4xx.h>


void PA5_PWM_Config();
void PWM_time();
void Pa5_Duty(uint32_t count,uint32_t dc);

int main(void)
{
	uint32_t count,Lc;
	PA5_PWM_Config();
	PWM_time();
	TIM2->CR1|=(1<<0);
	while(1){
		for(Lc=0;Lc<10;Lc++){
			Pa5_Duty(1000,Lc*10);
			for(count=0;count<500000;count++);

		}
		for(Lc=10;Lc>0;Lc--){
			Pa5_Duty(1000,Lc*10);
			for(count=0;count<500000;count++);

				}
	}


}
void PA5_PWM_Config(){
	RCC->AHB1ENR |=(1<<0);
	GPIOA->MODER &= ~(1<<10);
	GPIOA->MODER |= (1<<11);
	GPIOA->AFR[0] &= ~(0xF<<20);
	GPIOA->AFR[0] |= (1<<20);
}
void PWM_time(){
	RCC->APB1ENR |=(1<<0);
	TIM2->PSC=0;
	TIM2->CCMR1 |= (1<<3);
	TIM2->CCMR1 |=(6<<4);
	TIM2->CCER|=(1<<0);
}

void Pa5_Duty(uint32_t count,uint32_t dc){
	TIM2->ARR=(16000000/count);
	TIM2->CCR1=(dc * TIM2->ARR)/100;
}
