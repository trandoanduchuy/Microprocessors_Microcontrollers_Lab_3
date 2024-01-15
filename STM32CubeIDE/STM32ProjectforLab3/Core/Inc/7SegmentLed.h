/*
 * 7SegmentLed.h
 *
 *  Created on: Jan 11, 2024
 *      Author: Huy
 */

#ifndef INC_7SEGMENTLED_H_
#define INC_7SEGMENTLED_H_

#include "global.h"

#define ON_TIME_OF_A_LED	1000

typedef enum
{
	INIT,
	LED_1,
	LED_2
}SCAN_LED_STATUS;

/*Function to display a number on led*/
void display_number_on_led_1(int num);

/*Function to display a number on led*/
void display_number_on_led_2(int num);

/*Function to scan led 1*/
void scan_led_1(void);

/*Function to scan led 2*/
void scan_led_2(void);

/*Function to update values of led_buffer_1*/
void update_led_buffer_1(int update_value);

/*Function to update values of led_buffer_2*/
void update_led_buffer_2(int update_value);

#endif /* INC_7SEGMENTLED_H_ */
