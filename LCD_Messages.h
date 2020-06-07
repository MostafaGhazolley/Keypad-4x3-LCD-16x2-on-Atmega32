#ifndef _LCD_Messages_H_
#define _LCD_Messages_H_

#include "LCD_Messages.c"
#include "IOuserDef.h" // #include <avr/io.h> #include <avr/iom32.h>     <<-are inside...

void LCD_Start(void); // Start output welcome on LCD

void LCD_Mob_Req01(void);
void LCD_Mob_Entry(unsigned char Key);

void Access_Granted(void);
void Try_Again(void);
void Locked(void);
void LCD_End(void);

#endif // _LCD_Messages_H_