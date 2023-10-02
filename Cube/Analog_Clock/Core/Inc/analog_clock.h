/*
 * analog_clock.h
 *
 *  Created on: Oct 2, 2023
 *      Author: Amyra Nguyen
 */

#ifndef INC_ANALOG_CLOCK_H_
#define INC_ANALOG_CLOCK_H_

#include "global.h"

void init_analog_clock();
void clearAllClock();
void setNumberOnClock(int num);
void clearNumberOnClock(int num);
void run_timer(uint32_t sum_seconds);

#endif /* INC_ANALOG_CLOCK_H_ */
