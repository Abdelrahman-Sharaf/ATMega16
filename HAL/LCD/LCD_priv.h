/*
 * LCD_priv.h
 *
 *  Created on: Oct 6, 2021
 *      Author: Shaban
 */

#ifndef LCD_PRIV_H_
#define LCD_PRIV_H_

//static inline void LCD_invidSendCommend(LCD_t* Cpy_pstrLcdCnfg , u8 Cpy_u8Command);

#define    LCD_8BIT                    0
#define    LCD_4BIT                    1

#define LCD_NOT_CONNECTED              0

#define LCD_TOW_LINE_8BIT_MODE         0x38
#define LCD_DISP_ON_CURSOR_OFF         0x0C
#define LCD_CLEAR_DISP                 0x01
#define LCD_ENT_SET                    0x06

#define C_BIT_7                        ((Cpy_u8Command>>7)&1)
#define C_BIT_6                        ((Cpy_u8Command>>6)&1)
#define C_BIT_5                        ((Cpy_u8Command>>5)&1)
#define C_BIT_4                        ((Cpy_u8Command>>4)&1)
#define C_BIT_3                        ((Cpy_u8Command>>3)&1)
#define C_BIT_2                        ((Cpy_u8Command>>2)&1)
#define C_BIT_1                        ((Cpy_u8Command>>1)&1)
#define C_BIT_0                        ((Cpy_u8Command>>0)&1)











#endif /* LCD_PRIV_H_ */
