/*
 * software_timer.h
 *
 *  Created on: Dec 13, 2023
 *      Author: Huy
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define TICK	10

/*
 * timer 1
 * blink the red led
 * */
extern int timer1_counter;
extern int timer1_flag;

void setTimer1(int duration);

/*
 * timer 2
 * scan_led_1
 * */
extern int timer2_counter;
extern int timer2_flag;

void setTimer2(int duration);

/*
 * timer 3
 * scan_led_2
 * */
extern int timer3_counter;
extern int timer3_flag;

void setTimer3(int duration);

/*
 * timer 4
 * control time for traffic light
 * */
extern int timer4_counter;
extern int timer4_flag;

void setTimer4(int duration);

/*
 * timer 5
 * blink all led
 * */
extern int timer5_counter;
extern int timer5_flag;

void setTimer5(int duration);

void timerRun(void);


#endif /* INC_SOFTWARE_TIMER_H_ */
