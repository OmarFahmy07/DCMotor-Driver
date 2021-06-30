/*
 * main.c
 *
 *  Created on: Sep 24, 2020
 *      Author: Omar Fahmy
 */

/* HAL LAYER */
#include "../HAL/DC Motor/DC_Interface.h"
/*MCAL LAYER */
#include "../MCAL/DIO/DIO_Interface.h"

#include <util/delay.h>

void main (void)
{
	DC_U8Init();

	while (1)
	{
		DC_U8RotateAntiClockWise();
		_delay_ms(2000);
		DC_U8RotateClockWise();
		_delay_ms(2000);
		DC_U8StopRotation();
		_delay_ms(2000);
	}
}
