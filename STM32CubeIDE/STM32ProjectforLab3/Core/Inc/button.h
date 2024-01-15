/*
 * button.h
 *
 *  Created on: Dec 13, 2023
 *      Author: Huy
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "global.h"

#define NORMAL_STATE	1
#define PRESSED_STATE	0


/**********************************************************
 * BUTTON 1
**********************************************************/
/*Function to check if the button 1 is pressed*/
int isButtonPressed_1(void);

/*Function to set the button1_flag*/
void subKeyProcess_1(void);

/*Function to read and filter the button press*/
void getKeyInput_1(void);

/**********************************************************
 * BUTTON 2
**********************************************************/
/*Function to check if the button 1 is pressed*/
int isButtonPressed_2(void);

/*Function to set the button1_flag*/
void subKeyProcess_2(void);

/*Function to read and filter the button press*/
void getKeyInput_2(void);

/**********************************************************
 * BUTTON 3
**********************************************************/
/*Function to check if the button 1 is pressed*/
int isButtonPressed_3(void);

/*Function to set the button1_flag*/
void subKeyProcess_3(void);

/*Function to read and filter the button press*/
void getKeyInput_3(void);


#endif /* INC_BUTTON_H_ */
