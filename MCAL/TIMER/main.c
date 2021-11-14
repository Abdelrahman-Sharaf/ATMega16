/*
 * main.c
 *
 *  Created on: Oct 29, 2021
 *      Author: Shaban
 */
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\STD_TYPES.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\errorStates.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\BIT_MATH.h"

#include "TIMER_Cnfg.h"
#include "TIMER_interface.h"

#include<util/delay.h>

int main(void)
{

	TIMER_enuInit(TIMRE_AstrCnfg);

	(*((volatile u8*)0x31)) |=(1<<0);



	while(1)
	{

		TIMER_enuSetSyncDelay( TIMER0, 1000 );

		(*((volatile u8*)0x32)) ^=(1<<0);


	}
}


