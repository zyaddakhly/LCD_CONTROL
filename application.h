/* 
 * File:   application.h
 * Author: zyadi
 *
 * Created on August 18, 2023, 8:00 AM
 */

#ifndef APPLICATION_H
#define	APPLICATION_H
#include "ECU_Layer/ecu_initialize.h"
extern lcd_4bit_t lcd_1;
extern lcd_8bit_t lcd_2;
extern keypad_t keypad;
extern relay_t relay;
extern dc_motor_t motor ;
extern seg_t seg1;
extern seg_t seg2;
extern led_t led;
#endif	/* APPLICATION_H */

