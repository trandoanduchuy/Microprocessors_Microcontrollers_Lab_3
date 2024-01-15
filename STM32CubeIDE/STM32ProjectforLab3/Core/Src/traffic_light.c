/*
 * traffic_light.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Huy
 */
#include "traffic_light.h"

int led_red_duration = 5;
int led_yellow_duration = 2;
int led_green_duration = 3;

int temp_led_red_duration = 5;
int temp_led_yellow_duration = 2;
int temp_led_green_duration = 3;

int traffic1_counter = 0;
int traffic2_counter = 0;

TRAFFIC_LIGHT_STATUS traffic_light_status = TRAFFIC_LIGHT_INIT;

void traffic_light_run()
{
	switch(traffic_light_status)
	{
	case TRAFFIC_LIGHT_INIT:
		/*Turn off all leds*/
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);

		traffic_light_status = GREEN1_RED2;

		traffic1_counter = led_green_duration;
		traffic2_counter = led_red_duration;
		break;
	case GREEN1_RED2:
		/*Turn on led green 1, turn on led red 2*/
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
		if(traffic1_counter <= 0)
		{
			traffic_light_status = YELLOW1_RED2;
			traffic1_counter = led_yellow_duration;
		}
		break;
	case YELLOW1_RED2:
		/*Turn on led yellow 1 and led red 2*/
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
		if(traffic1_counter <= 0 && traffic2_counter <= 0)
		{
			traffic_light_status = GREEN2_RED1;
			traffic1_counter = led_red_duration;
			traffic2_counter = led_green_duration;
		}
		break;
	case GREEN2_RED1:
		/*Turn on led green 2 and led red 1*/
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_RESET);
		if(traffic2_counter <= 0)
		{
			traffic_light_status = YELLOW2_RED1;
			traffic2_counter = led_yellow_duration;
		}
		break;
	case YELLOW2_RED1:
		/*Turn on led yellow 2 and led red 1*/
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
		if(traffic1_counter <= 0 && traffic2_counter <= 0)
		{
			traffic_light_status = GREEN1_RED2;
			traffic1_counter = led_green_duration;
			traffic2_counter = led_red_duration;
		}
		break;
	default:
		break;
	}
}

void control_time()
{
	if(timer4_flag == 1)
	{
		if(traffic1_counter > 0 && traffic2_counter > 0)
		{
//			traffic1_counter--;
//			traffic2_counter--;
			update_led_buffer_1(--traffic1_counter);
			update_led_buffer_2(--traffic2_counter);
		}
		setTimer4(1000);
	}
}

SYSTEM_MODE system_mode = MODE_INIT;

void main_system()
{
	switch(system_mode)
	{
	case MODE_INIT:
		system_mode = MODE_1;
		break;
	case MODE_1:
		/*The traffic light run normally*/
		traffic_light_run();
		control_time();
		scan_led_1();
		scan_led_2();
		if(isButtonPressed_1() == 1)
		{
			system_mode = MODE_2;
		}
		break;
	case MODE_2:
		/*Increase the duration of led red*/
		blink_all_led_red();						/*Blink all the led red*/
		update_led_buffer_1(2);						/*Update led_buffer_1 to display the mode*/
		scan_led_1();
		increase_led_red_duration();
		scan_led_2();

		if(isButtonPressed_1() == 1)
		{
			update_temp_duration();
			system_mode = MODE_3;
		}
		break;
	case MODE_3:
		/*Increase the duration of led yellow*/
		blink_all_led_yellow();						/*Blink all the led yellow*/
		update_led_buffer_1(3);						/*Update led_buffer_1 to display the mode*/
		scan_led_1();
		increase_led_yellow_duration();
		scan_led_2();

		if(isButtonPressed_1() == 1)
		{
			update_temp_duration();
			system_mode = MODE_4;
		}
		break;
	case MODE_4:
		/*Increase the duration of led green*/
		blink_all_led_green();						/*Blink all the led green*/
		update_led_buffer_1(4);						/*Update led_buffer_1 to display the mode*/
		scan_led_1();
		increase_led_green_duration();				/*Increase the duration of the led green*/
		scan_led_2();

		if(isButtonPressed_1() == 1)
		{
			traffic_light_status = TRAFFIC_LIGHT_INIT;
			update_temp_duration();
			system_mode = MODE_1;
		}
		break;
	default:
		break;
	}
}

void increase_led_red_duration()
{
	if(isButtonPressed_2() == 1)
	{
		if(temp_led_red_duration < 99)
		{
			temp_led_red_duration += 1;
		}
		else
		{
			temp_led_red_duration = 0;
		}
	}
	if(isButtonPressed_3() == 1)
	{
		led_red_duration = temp_led_red_duration;
		led_red_duration = led_yellow_duration + led_green_duration;

	}
	update_led_buffer_2(temp_led_red_duration);
}

void increase_led_yellow_duration()
{
	if(isButtonPressed_2() == 1)
	{
		if(temp_led_yellow_duration < 99)
		{
			temp_led_yellow_duration += 1;
		}
		else
		{
			temp_led_yellow_duration = 0;
		}
	}
	if(isButtonPressed_3() == 1)
	{
		led_yellow_duration = temp_led_yellow_duration;
		led_red_duration = led_yellow_duration + led_green_duration;
	}
	update_led_buffer_2(temp_led_yellow_duration);
}

void increase_led_green_duration()
{
	if(isButtonPressed_2() == 1)
	{
		if(temp_led_green_duration < 99)
		{
			temp_led_green_duration += 1;
		}
		else
		{
			temp_led_green_duration = 0;
		}
	}
	if(isButtonPressed_3() == 1)
	{
		led_green_duration = temp_led_green_duration;
		led_red_duration = led_yellow_duration + led_green_duration;
	}
	update_led_buffer_2(temp_led_green_duration);
}

void update_temp_duration()
{
	temp_led_red_duration = led_red_duration;
	led_yellow_duration = temp_led_yellow_duration;
	led_green_duration = temp_led_green_duration;
}
