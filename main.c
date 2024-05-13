/*
 * main.c
 *
 *  Created on: Apr 5, 2024
 *      Author: Toa Fekry
 */


#include <util/delay.h>
#include "MCAL/DIO/Header/DIO_Interface.h"
#include "HAL/LCD/Header/Lcd_Interface.h"






void main()
{

	Lcd_SendInit();
	KeyPad_Init();

	while(1)            //*no btn pressed*//
	{
		u8 Press = KeyPad_ReadBtnValue();


		if(Press=='C')
		{
			Lcd_SendCommand(0x01);
			_delay_ms(100);
		}
		if(Press=='1')
		{
			Lcd_SendString("enter");
			_delay_ms(100);
		}
		if(Press=='2')
		{
			Lcd_SendString("your");
			_delay_ms(100);
		}
		if(Press=='3')
		{
			Lcd_SendString("pass");
			_delay_ms(100);
		}
		if(Press=='4')
		{
			Lcd_SendString("1");
			_delay_ms(100);
		}
		if(Press=='5')
		{
			Lcd_SendString("2");
			_delay_ms(100);
		}
		if(Press=='6')
		{
			Lcd_SendString("3");
			_delay_ms(100);
		}
		if(Press=='7')
		{
			Lcd_SendString("7");
			_delay_ms(100);
		}
		if(Press=='8')
		{
			Lcd_SendString("8");
			_delay_ms(100);
		}
	}

}


