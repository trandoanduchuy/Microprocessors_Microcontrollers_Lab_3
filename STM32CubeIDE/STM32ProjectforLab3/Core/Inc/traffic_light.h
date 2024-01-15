/*
 * traffic_light.h
 *
 *  Created on: Jan 13, 2024
 *      Author: Huy
 */

#ifndef INC_TRAFFIC_LIGHT_H_
#define INC_TRAFFIC_LIGHT_H_

#include "global.h"

typedef enum
{
	TRAFFIC_LIGHT_INIT,
	GREEN1_RED2,
	YELLOW1_RED2,
	GREEN2_RED1,
	YELLOW2_RED1
}TRAFFIC_LIGHT_STATUS;

extern int traffic1_counter;
extern int traffic2_counter;


/*Function to run the traffic light*/
void traffic_light_run(void);

/*Function to control the time of the traffic light*/
void control_time(void);

typedef enum
{
	MODE_INIT,
	MODE_1,
	MODE_2,
	MODE_3,
	MODE_4
}SYSTEM_MODE;

/*Function to change between modes of the system*/
void main_system(void);

/*Function to increase the duration of led*/
void increase_led_red_duration();

/*Function to increase the duration of led*/
void increase_led_yellow_duration();

/*Function to increase the duration of led*/
void increase_led_green_duration();

/*Function to check the duration and modify if necessary*/
void update_temp_duration(void);


#endif /* INC_TRAFFIC_LIGHT_H_ */