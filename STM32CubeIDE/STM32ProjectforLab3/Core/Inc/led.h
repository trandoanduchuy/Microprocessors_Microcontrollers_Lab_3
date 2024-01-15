/*
 * led.h
 *
 *  Created on: Jan 13, 2024
 *      Author: Huy
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "global.h"

typedef enum
{
	BLINK_LED_INIT,
	BLINK_LED_ON,
	BLINK_LED_OFF
}BLINK_LED_STATUS;

/*Function to blink the led red*/
void blink_led_red(void);

#define ON_TIME		250

/*Function to blink all the led red of the traffic_light*/
void blink_all_led_red(void);

/*Function to blink all the led yellow of the traffic light*/
void blink_all_led_yellow(void);

/*Function to blink all the led green of the traffic light*/
void blink_all_led_green(void);

#endif /* INC_LED_H_ */
