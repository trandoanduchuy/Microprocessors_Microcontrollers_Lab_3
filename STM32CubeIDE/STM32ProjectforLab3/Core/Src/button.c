/*
 * button.c
 *
 *  Created on: Dec 13, 2023
 *      Author: Huy
 */
#include "button.h"

/*********************************************************
 * BUTTON 1
*********************************************************/

int KeyReg0_1 = NORMAL_STATE;
int KeyReg1_1 = NORMAL_STATE;
int KeyReg2_1 = NORMAL_STATE;
int KeyReg3_1 = NORMAL_STATE;

int TimeOutForKeyPress_1 =  500;
int button1_flag = 0;

int isButtonPressed_1(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess_1(){
	button1_flag = 1;
}

void getKeyInput_1(){
	KeyReg0_1 = KeyReg1_1;
	KeyReg1_1 = KeyReg2_1;
	KeyReg2_1 = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);

	if(KeyReg0_1 == KeyReg1_1 && KeyReg1_1 == KeyReg2_1)
	{
		if(KeyReg3_1 != KeyReg2_1)
		{
			KeyReg3_1 = KeyReg2_1;
			if(KeyReg2_1 == PRESSED_STATE)
			{
				subKeyProcess_1();
				TimeOutForKeyPress_1 =  500;
			}
		}
		else
		{
			TimeOutForKeyPress_1--;
			if(TimeOutForKeyPress_1 == 0)
			{
				if(KeyReg2_1 == PRESSED_STATE)
				{
					subKeyProcess_1();
				}
				TimeOutForKeyPress_1 =  500;
			}
		}
	}
}

/*********************************************************
 * BUTTON 2
*********************************************************/

int KeyReg0_2 = NORMAL_STATE;
int KeyReg1_2 = NORMAL_STATE;
int KeyReg2_2 = NORMAL_STATE;
int KeyReg3_2 = NORMAL_STATE;

int TimeOutForKeyPress_2 =  500;
int button2_flag = 0;

int isButtonPressed_2(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess_2(){
	button2_flag = 1;
}

void getKeyInput_2(){
	KeyReg0_2 = KeyReg1_2;
	KeyReg1_2 = KeyReg2_2;
	KeyReg2_2 = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);

	if(KeyReg0_2 == KeyReg1_2 && KeyReg1_2 == KeyReg2_2)
	{
		if(KeyReg3_2 != KeyReg2_2)
		{
			KeyReg3_2 = KeyReg2_2;
			if(KeyReg2_2 == PRESSED_STATE)
			{
				subKeyProcess_2();
				TimeOutForKeyPress_2 =  500;
			}
		}
		else
		{
			TimeOutForKeyPress_2--;
			if(TimeOutForKeyPress_2 == 0)
			{
				if(KeyReg2_2 == PRESSED_STATE)
				{
					subKeyProcess_2();
				}
				TimeOutForKeyPress_2 =  500;
			}
		}
	}
}

/*********************************************************
 * BUTTON 3
*********************************************************/

int KeyReg0_3 = NORMAL_STATE;
int KeyReg1_3 = NORMAL_STATE;
int KeyReg2_3 = NORMAL_STATE;
int KeyReg3_3 = NORMAL_STATE;

int TimeOutForKeyPress_3 =  500;
int button3_flag = 0;

int isButtonPressed_3(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess_3(){
	button3_flag = 1;
}

void getKeyInput_3(){
	KeyReg0_3 = KeyReg1_3;
	KeyReg1_3 = KeyReg2_3;
	KeyReg2_3 = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);

	if(KeyReg0_3 == KeyReg1_3 && KeyReg1_3 == KeyReg2_3)
	{
		if(KeyReg3_3 != KeyReg2_3)
		{
			KeyReg3_3 = KeyReg2_3;
			if(KeyReg2_3 == PRESSED_STATE)
			{
				subKeyProcess_3();
				TimeOutForKeyPress_3 =  500;
			}
		}
		else
		{
			TimeOutForKeyPress_3--;
			if(TimeOutForKeyPress_3 == 0)
			{
				if(KeyReg2_3 == PRESSED_STATE)
				{
					subKeyProcess_3();
				}
				TimeOutForKeyPress_3 =  500;
			}
		}
	}
}


