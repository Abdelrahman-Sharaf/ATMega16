/*
 * TIMER_Prog.c
 *
 *  Created on: Oct 29, 2021
 *      Author: Shaban
 */

/****************************************************************************/
/******************************  INCLUDES  **********************************/
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\STD_TYPES.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\errorStates.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\BIT_MATH.h"

#include "TIMER_Priv.h"
#include "TIMER_Cnfg.h"

ES_t TIMER_enuInit(TIMER_t* Cpy_pstrtTimerCnfg )
{
	ES_t Local_enuErrorState = ES_NOK ;

	if( Cpy_pstrtTimerCnfg != NULL )
	{
		u8 Local_u8Iterator = 0 ;

		switch( Local_u8Iterator )
		{
		case TIMER0 :
			if(Cpy_pstrtTimerCnfg[Local_u8Iterator].TIMER_u8Mode == OVF )
			{
				TCCR0 = (TIMER_MSK_BIT<<WGM01) | (TIMER_MSK_BIT<<WGM00) ;
			}
			else
			{

			}


			break;

		case TIMER1 :
			break;

		case TIMER2 :
			break;

		}

		Local_enuErrorState = ES_OK ;
	}
	else
	{
		Local_enuErrorState = ES_NULL_POINTER ;

	}

	return Local_enuErrorState ;

}// End of TIMER_enuInit .
