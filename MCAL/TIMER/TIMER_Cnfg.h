/*
 * TIMER_Cnfg.h
 *
 *  Created on: Oct 29, 2021
 *      Author: Shaban
 */

#ifndef TIMER_CNFG_H_
#define TIMER_CNFG_H_


typedef struct
{
	u8  TIMER_u8Mode          ;
	u8  TIMER_u8Prescaler     ;
	u8  TIMER_u8OCOState      ;
	u16 TIMER_u16Freq_in_khz  ;

}TIMER_t;

extern TIMER_t TIMRE_AstrCnfg[TIMER_NUM];



#endif /* TIMER_CNFG_H_ */
