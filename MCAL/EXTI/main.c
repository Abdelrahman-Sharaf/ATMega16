/*
 * main.c
 *
 *  Created on: Oct 9, 2021
 *      Author: Shaban
 */

#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\STD_TYPES.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\errorStates.h"

#include "E:\NTI\AVR\ATmeg16_Drivers\MCAL\DIO\DIO_interface.h"

#include "E:\NTI\AVR\ATmeg16_Drivers\HAL\Switch\Switch_config.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\HAL\Switch\Switch_interface.h"

#include "E:\NTI\AVR\ATmeg16_Drivers\HAL\Led\Led_config.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\HAL\Led\Led_interface.h"

#include "EXTI_Cnfg.h"
#include "EXTI_interface.h"

#include<util/delay.h>

#define SREG   *((u8*)0x5F)

void tog(void* pin );

int main(void)
{

	EXTI_enuInit( EXTI_AstrCnfg );
	Switch_enuInit(Switch_AstrSwitchState);
	LED_enuInit( LED_AstrLedConfig );





	EXTI_enuCallBack(tog,&LED_AstrLedConfig[0] ,EXTI_0);


	SREG |=(1<<7);

	while(1)
	{

	}
}


void tog(void* pin )
{

	LED_enuLedToggle( (LED_t*)pin );

}
