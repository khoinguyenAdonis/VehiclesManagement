
#include "tim.h"

void TIMDelay_Config(){
	
	RCC_APB2PeriphClockCmd(TIMER_DElAY_RCC,ENABLE);
	
	TIM_TimeBaseInitTypeDef TIM_InitStruct;
	TIM_InitStruct.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_InitStruct.TIM_CounterMode = TIM_CounterMode_Up;
	TIM_InitStruct.TIM_Period = 0xFFFF-1;
	TIM_InitStruct.TIM_Prescaler = 16800-1;
	TIM_TimeBaseInit(TIM1,&TIM_InitStruct);
	TIM_Cmd(TIMER_DElAY,ENABLE);

}

void Delay_ms(uint32_t time){
	TIM_SetCounter(TIMER_DElAY,0);
	while(TIM_GetCounter(TIMER_DElAY) < time*10);
}