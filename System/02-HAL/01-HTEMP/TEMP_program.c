/************************************************************************************************************/
/* Author  : Name                                                                                           */
/* Version : Version                                                                                        */
/* Date    : Date  																						    */
/*                                                                                        				    */
/* Description of Interface file -> This file is for the implementation of the functions				    */
/************************************************************************************************************/

/* including sequence */
// LIbaray files
/* Examples */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

// include files of the MCAL layer 
/* Examples */
#include "Arduino.h"

// include files of the HAL layer 
#include "TEMP_interface.h"
#include "TEMP_config.h"


/*example*/
void RCC_voidEnableClock(u8 Copy_u8BusId , u8 Copy_u8PerId )
{
	if (Copy_u8PerId <= 31)
	{
		switch (Copy_u8BusId)
		{
			case RCC_AHB   : SET_BIT (RCC_AHBENR  ,Copy_u8PerId); break;
			case RCC_APB1  : SET_BIT (RCC_APB1ENR ,Copy_u8PerId); break;
			case RCC_APB2  : SET_BIT (RCC_APB2ENR ,Copy_u8PerId); break;
			
		}
	}
	else 
	{
		/*Return error*/
		printf("invalid option");
	}
}

