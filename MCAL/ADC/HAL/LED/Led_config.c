/***************************************************************************************/
/* Title                 :   Led_config                                                */
/* Filename              :   Led_config.c                                              */
/* Author                :   Shaban Abdullah Awad                                      */
/* Origin Date           :   Oct 2, 2021                                               */
/* Version               :   1.0.0                                                     */
/* Compiler              :   mingw GCC                                                 */
/* Target                :   ATmega16 , ATmega32                                       */
/* Notes                 :   None                                                      */
/*                                                                                     */
/***************************************************************************************/


/***************************************************************************************/
/**********************************  INCLUDES  *****************************************/
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\STD_TYPES.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\errorStates.h"

#include"Led_priv.h"
#include"Led_config.h"

#include "E:\NTI\AVR\ATmeg16_Drivers\MCAL\DIO\DIO_interface.h"


/***************************************************************************************/
/***************************************************************************************/
/* Description   : Array of LED_t type Structures to config. The Leds in Sys.          */
/*                 by writing PortID :                                                 */
/*                                     DIO_PORTA    ,   DIO_PORTC                      */
/*                                     DIO_PORTB    ,   DIO_PORTD                      */
/*                 and PinID:                                                          */
/*                                     DIO_PIN0      ,     DIO_PIN4                    */
/*                                     DIO_PIN1      ,     DIO_PIN5                    */
/*                                     DIO_PIN2      ,     DIO_PIN6                    */
/*                                     DIO_PIN3      ,     DIO_PIN7                    */
/*                initial state:                                                       */
/*                                     LED_OFF       ,     LED_ON                      */
/*                                                                                     */
/*                and Connection Method:                                               */
/*                                     LED_SINK      ,     LED_SOURCE                  */
/*                                                                                     */
/*                                                                                     */
/*.....................................*************************************************/
LED_t LED_AstrLedConfig[LED_NUM]={

		{  DIO_PORTD  ,  DIO_PIN1  ,  LED_OFF  ,  LED_SINK  },  /* LED_0 Configuration*/
		//{  DIO_PORTD  ,  DIO_PIN1  ,  LED_OFF ,   LED_SINK  }   /* LED_1 Configuration*/

};


/******************************* END OF FILE. ******************************************/
/***************************************************************************************/
