/*****************************************************************************/
/* Title                 :   Switch_config                                   */
/* Filename              :   Switch_config.c                                 */
/* Author                :   Shaban Abdullah Awad                            */
/* Origin Date           :   Oct 2, 2021                                     */
/* Version               :   1.0.0                                           */
/* Compiler              :   mingw GCC                                       */
/* Target                :   ATmega16 , ATmega32                             */
/* Notes                 :   None                                            */
/*                                                                           */
/*****************************************************************************/

/****************************************************************************/
/******************************  INCLUDES  **********************************/


#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\STD_TYPES.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\errorStates.h"

#include "E:\NTI\AVR\ATmeg16_Drivers\MCAL\DIO\DIO_interface.h"

#include "Switch_config.h"
#include "Switch_priv.h"




/******************************************************************************/
/******************************************************************************/
/* Description   : Array of SW_t type Structures to config. switches in Sys.  */
/*                 by writing PortID :                                        */
/*                                     DIO_PORTA    ,   DIO_PORTC             */
/*                                     DIO_PORTB    ,   DIO_PORTD             */
/*                 and PinID:                                                 */
/*                                     DIO_PIN0      ,     DIO_PIN4           */
/*                                     DIO_PIN1      ,     DIO_PIN5           */
/*                                     DIO_PIN2      ,     DIO_PIN6           */
/*                                     DIO_PIN3      ,     DIO_PIN7           */
/*                                                                            */
/*                and Connection Method:                                      */
/*                                     -DIO_PULL_UP_PIN                       */
/*                                                    This config. triggers   */
/*                                                    the internal pull_up    */
/*                                                    resistor in the mcu.    */
/*                                                                            */
/*                                     -DIO_FLOAT_PIN                         */
/*                                                    Chose this config. if   */
/*                                                    you use the external    */
/*                                                    pull_up resistor method.*/
/*                                                                            */
/*                                                                            */
/***...................................****************************************/
SW_t  Switch_AstrSwitchState[SW_NUM]=
{
		{DIO_PORTD , DIO_PIN2  , DIO_PULL_UP_PIN },  /* Switch_0 Configuration*/
		//{DIO_PORTB , DIO_PIN1 , DIO_FLOAT_PIN  },  /* Switch_1 Configuration*/
		//{DIO_PORTB , DIO_PIN2 ,DIO_PULL_UP_PIN }   /* Switch_2 Configuration*/
};



/******************************* END OF FILE. ***********************************/
/********************************************************************************/


