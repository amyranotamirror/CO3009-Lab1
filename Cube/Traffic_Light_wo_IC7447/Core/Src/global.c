/*
 * global.c
 *
 *  Created on: Sep 29, 2023
 *      Author: Amyra Nguyen
 */

#include "global.h"
void set_GPIO_off(GPIO_config *destination){
	HAL_GPIO_WritePin(destination->port, destination->pin, GPIO_PIN_RESET);
}
void set_GPIO_on(GPIO_config *destination){
	HAL_GPIO_WritePin(destination->port, destination->pin, GPIO_PIN_SET);
}
