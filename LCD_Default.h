//#include "LCD_Default.c"


#ifndef _LCD_Default_H_
#define _LCD_Default_H_


#include <avr/delay.h>
#include "IOuserDef.h"

#include "LCD_Default.c"

void SendCommand(unsigned char command);  // LCD Commands..
void SendCharacter(unsigned char character);  //LCD outPut a charcter...

#endif // _LCD_Default_H_