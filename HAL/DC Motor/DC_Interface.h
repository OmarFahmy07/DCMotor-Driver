/*
 * DC_Interface.h
 *
 *  Created on: Sep 24, 2020
 *      Author: Omar Fahmy
 */

#ifndef DC_INTERFACE_H_
#define DC_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"

/*************************************************************************************/
/* 								FUNCTIONS PROTOTYPE 								 */
/*************************************************************************************/

/*************************************************************************************/
/* Description: initializes motors' terminals				   						 */
/* Input      : nothing                                                     		 */
/* Output     : Error Checking                                                       */
/*************************************************************************************/
extern u8 DC_U8Init(void);
/*************************************************************************************/

/*************************************************************************************/
/* Description: rotates the motor clockwise				   						     */
/* Input      : nothing                                                     		 */
/* Output     : Error Checking                                                       */
/*************************************************************************************/
extern u8 DC_U8RotateClockWise(void);
/*************************************************************************************/

/*************************************************************************************/
/* Description: rotates the motor anticlockwise				   					     */
/* Input      : nothing                                                     		 */
/* Output     : Error Checking                                                       */
/*************************************************************************************/
extern u8 DC_U8RotateAntiClockWise(void);
/*************************************************************************************/

/*************************************************************************************/
/* Description: stops the motor				   					     				 */
/* Input      : nothing                                                     		 */
/* Output     : Error Checking                                                       */
/*************************************************************************************/
extern u8 DC_U8StopRotation(void);
/*************************************************************************************/


#endif /* DC_INTERFACE_H_ */
