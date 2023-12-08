/*
 * led_control.c
 *
 *  Created on: Dec 8, 2023
 *      Author: mike
 */

#include "gpio.h"

void set_leds(unsigned char leds)
{
	if (leds & 1 << 0) HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_8);
	if (leds & 1 << 1) HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_9);
	if (leds & 1 << 2) HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_10);
	if (leds & 1 << 3) HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_11);
	if (leds & 1 << 4) HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_12);
	if (leds & 1 << 5) HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_13);
	if (leds & 1 << 6) HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_14);
	if (leds & 1 << 7) HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_15);
}
