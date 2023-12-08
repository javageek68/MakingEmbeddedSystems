/*
 * led_control.c
 *
 *  Created on: Dec 8, 2023
 *      Author: mike
 */

#include "gpio.h"

void set_leds(unsigned char leds)
{

	if (leds & 1 << 0) HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_SET);
	else HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_RESET);

	if (leds & 1 << 0) HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_SET);
	else HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_RESET);

	if (leds & 1 << 0) HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_SET);
	else HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_RESET);

	if (leds & 1 << 0) HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_SET);
	else HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_RESET);

	if (leds & 1 << 0) HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_SET);
	else HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_RESET);

	if (leds & 1 << 0) HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET);
	else HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_RESET);

	if (leds & 1 << 0) HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET);
	else HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_RESET);

	if (leds & 1 << 0) HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
	else HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_RESET);


}
