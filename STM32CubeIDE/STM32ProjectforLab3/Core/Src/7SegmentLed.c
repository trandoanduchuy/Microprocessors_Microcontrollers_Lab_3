/*
 * 7SegmentLed.c
 *
 *  Created on: Jan 11, 2024
 *      Author: Huy
 */
#include "7SegmentLed.h"

SCAN_LED_STATUS scan_led_status_1 = INIT;
SCAN_LED_STATUS scan_led_status_2 = INIT;

int led_buffer_1[2] = {0, 0};
int led_buffer_2[2] = {0, 0};

void display_number_on_led_1(int num){
	if( num == 0){
		HAL_GPIO_WritePin(SEG_0_1_GPIO_Port, SEG_0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_1_GPIO_Port, SEG_1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_1_GPIO_Port, SEG_2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_1_GPIO_Port, SEG_3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_1_GPIO_Port, SEG_4_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_5_1_GPIO_Port, SEG_5_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_6_1_GPIO_Port, SEG_6_1_Pin, GPIO_PIN_SET);
	}

	if(num == 1){
		HAL_GPIO_WritePin(SEG_0_1_GPIO_Port, SEG_0_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_1_1_GPIO_Port, SEG_1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_1_GPIO_Port, SEG_2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_1_GPIO_Port, SEG_3_1_Pin, GPIO_PIN_SET );
		HAL_GPIO_WritePin(SEG_4_1_GPIO_Port, SEG_4_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_5_1_GPIO_Port, SEG_5_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_6_1_GPIO_Port, SEG_6_1_Pin, GPIO_PIN_SET);
	}

	if(num == 2){
		HAL_GPIO_WritePin(SEG_0_1_GPIO_Port, SEG_0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_1_GPIO_Port, SEG_1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_1_GPIO_Port, SEG_2_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_3_1_GPIO_Port, SEG_3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_1_GPIO_Port, SEG_4_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_5_1_GPIO_Port, SEG_5_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_6_1_GPIO_Port, SEG_6_1_Pin, GPIO_PIN_RESET);
	}

	if(num == 3){
		HAL_GPIO_WritePin(SEG_0_1_GPIO_Port, SEG_0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_1_GPIO_Port, SEG_1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_1_GPIO_Port, SEG_2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_1_GPIO_Port, SEG_3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_1_GPIO_Port, SEG_4_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_5_1_GPIO_Port, SEG_5_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_6_1_GPIO_Port, SEG_6_1_Pin, GPIO_PIN_RESET);
	}

	if(num == 4){
		HAL_GPIO_WritePin(SEG_0_1_GPIO_Port, SEG_0_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_1_1_GPIO_Port, SEG_1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_1_GPIO_Port, SEG_2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_1_GPIO_Port, SEG_3_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_4_1_GPIO_Port, SEG_4_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_5_1_GPIO_Port, SEG_5_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_6_1_GPIO_Port, SEG_6_1_Pin, GPIO_PIN_RESET);
	}

	if(num == 5){
		HAL_GPIO_WritePin(SEG_0_1_GPIO_Port, SEG_0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_1_GPIO_Port, SEG_1_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_2_1_GPIO_Port, SEG_2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_1_GPIO_Port, SEG_3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_1_GPIO_Port, SEG_4_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_5_1_GPIO_Port, SEG_5_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_6_1_GPIO_Port, SEG_6_1_Pin, GPIO_PIN_RESET);
	}

	if(num == 6){
		HAL_GPIO_WritePin(SEG_0_1_GPIO_Port, SEG_0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_1_GPIO_Port, SEG_1_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_2_1_GPIO_Port, SEG_2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_1_GPIO_Port, SEG_3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_1_GPIO_Port, SEG_4_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_5_1_GPIO_Port, SEG_5_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_6_1_GPIO_Port, SEG_6_1_Pin, GPIO_PIN_RESET);
	}

	if(num == 7){
		HAL_GPIO_WritePin(SEG_0_1_GPIO_Port, SEG_0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_1_GPIO_Port, SEG_1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_1_GPIO_Port, SEG_2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_1_GPIO_Port, SEG_3_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_4_1_GPIO_Port, SEG_4_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_5_1_GPIO_Port, SEG_5_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_6_1_GPIO_Port, SEG_6_1_Pin, GPIO_PIN_SET);
	}

	if(num == 8){
		HAL_GPIO_WritePin(SEG_0_1_GPIO_Port, SEG_0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_1_GPIO_Port, SEG_1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_1_GPIO_Port, SEG_2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_1_GPIO_Port, SEG_3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_1_GPIO_Port, SEG_4_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_5_1_GPIO_Port, SEG_5_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_6_1_GPIO_Port, SEG_6_1_Pin, GPIO_PIN_RESET);
	}

	if(num == 9){
		HAL_GPIO_WritePin(SEG_0_1_GPIO_Port, SEG_0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_1_GPIO_Port, SEG_1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_1_GPIO_Port, SEG_2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_1_GPIO_Port, SEG_3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_1_GPIO_Port, SEG_4_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_5_1_GPIO_Port, SEG_5_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_6_1_GPIO_Port, SEG_6_1_Pin, GPIO_PIN_RESET);
	}
}

void display_number_on_led_2(int num){
	if( num == 0){
		HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, GPIO_PIN_SET);
	}

	if(num == 1){
		HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, GPIO_PIN_SET );
		HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, GPIO_PIN_SET);
	}

	if(num == 2){
		HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, GPIO_PIN_RESET);
	}

	if(num == 3){
		HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, GPIO_PIN_RESET);
	}

	if(num == 4){
		HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, GPIO_PIN_RESET);
	}

	if(num == 5){
		HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, GPIO_PIN_RESET);
	}

	if(num == 6){
		HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, GPIO_PIN_RESET);
	}

	if(num == 7){
		HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, GPIO_PIN_SET);
	}

	if(num == 8){
		HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, GPIO_PIN_RESET);
	}

	if(num == 9){
		HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, GPIO_PIN_RESET);
	}
}

void scan_led_1()
{
	switch(scan_led_status_1)
	{
	case INIT:
		HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, GPIO_PIN_SET);
		scan_led_status_1 = LED_1;
		setTimer2(ON_TIME_OF_A_LED);
		break;
	case LED_1:
		/*Turn on 7-segment led 0*/
		HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, GPIO_PIN_SET);
		/*Display number on 7-segment led 0*/
		display_number_on_led_1(led_buffer_1[0]);
		if(timer2_flag == 1)
		{
			scan_led_status_1 = LED_2;
			setTimer2(ON_TIME_OF_A_LED);
		}
		break;
	case LED_2:
		/*Turn on 7-segment led 1*/
		HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, GPIO_PIN_RESET);
		/*Display number on 7-segment led 0*/
		display_number_on_led_1(led_buffer_1[1]);
		if(timer2_flag == 1)
		{
			scan_led_status_1 = LED_1;
			setTimer2(ON_TIME_OF_A_LED);
		}
		break;
	default:
		break;
	}
}

void scan_led_2()
{
	switch(scan_led_status_2)
	{
	case INIT:
		HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN_3_GPIO_Port, EN_3_Pin, GPIO_PIN_SET);
		scan_led_status_2 = LED_1;
		setTimer3(ON_TIME_OF_A_LED);
		break;
	case LED_1:
		/*Turn on 7-segment led 0*/
		HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN_3_GPIO_Port, EN_3_Pin, GPIO_PIN_SET);
		/*Display number on 7-segment led 0*/
		display_number_on_led_2(led_buffer_2[0]);
		if(timer3_flag == 1)
		{
			scan_led_status_2 = LED_2;
			setTimer3(ON_TIME_OF_A_LED);
		}
		break;
	case LED_2:
		/*Turn on 7-segment led 1*/
		HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN_3_GPIO_Port, EN_3_Pin, GPIO_PIN_RESET);
		/*Display number on 7-segment led 0*/
		display_number_on_led_2(led_buffer_2[1]);
		if(timer3_flag == 1)
		{
			scan_led_status_2 = LED_1;
			setTimer3(ON_TIME_OF_A_LED);
		}
		break;
	default:
		break;
	}
}

void update_led_buffer_1(int update_value)
{
	led_buffer_1[0] = update_value/10;
	led_buffer_1[1]	= update_value%10;
}

void update_led_buffer_2(int update_value)
{
	led_buffer_2[0] = update_value/10;
	led_buffer_2[1]	= update_value%10;
}