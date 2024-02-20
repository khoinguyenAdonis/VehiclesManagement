#ifndef __TIM_H__
#define __TIM_H__

/* Includes ------------------------------------------------------------------*/

#include "stm32f4xx.h"
/* Exported macro ------------------------------------------------------------*/
#define  TIMER_DElAY        TIM1
#define  TIMER_DElAY_RCC    RCC_APB2Periph_TIM1
/* Exported functions ------------------------------------------------------- */
void TIMDelay_Config();
void Delay_ms(uint32_t time);
#endif /*__TIM_H__*/