/* #include "stm32f4_usart.h" */

#ifndef __STM32F4_USART_H
#define __STM32F4_USART_H

#include "stm32f4xx.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
#define Type_B 2    // 礚腹计秈
#define Type_O 8    // 礚腹计秈
#define Type_D 10   // 礚腹计秈
#define Type_H 16   // 礚腹计せ秈
#define Type_I 0    // Τ腹计
// #define Type_F 1    // 疊翴计
/*=====================================================================================================*/
/*=====================================================================================================*/
void USART_Print( USART_TypeDef*, u8* );
void NumToChar( u8, u8, u8*, s32 );
/*=====================================================================================================*/
/*=====================================================================================================*/
#endif	 
