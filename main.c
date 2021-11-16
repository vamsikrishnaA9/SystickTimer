/*
this program will be further developed to create a delay function as we required. This program will generate the max 
functional delay of 0.233 sec with load register of FFFFFF values. with respect to the system cloc i.e 72Mhz.
*/



#include "stm32f10x.h"
#include "gp_drive.h"
void SysTick_Handler(void);
unsigned int val=0;
int main(void){

	init_gpio(PC, 13, OP_50,O_GP_PP);
	init_gpio(PA, 0, IN,I_PP);
	__disable_irq();
	SysTick->CTRL = 0;   //Intializing CTRl register to 0 first. refer to Program manual systick timer register
	SysTick->LOAD = 7200000-1;  //it will give us 100ms delay with respect to the sys clock 72Mhz
	SysTick->VAL = 0;  
	SysTick->CTRL=7;  // 7- 111 bits to the ctrl reg which enables clock, xception req enable and counter enable.
	__enable_irq();

	while(1){
	

		
	}
	
		
	
}
//this sysTick_Handler will be called for every 100ms.
void SysTick_Handler(void){
  
	Write_gp(PC,13,val);
	val = ~val;

	
}

