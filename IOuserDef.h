/*
some definitions if IO ports... since it not all working in iom32.h
if #include <avr/io.h> works... no need that file...

Created by: MostafaGhazolley@Outlook.com
*/

#ifndef _IOuserDef_H_
#define _IOuserDef_H_


#include <avr/io.h>
//#include <avr/iom32.h>
#define _CONCAT(a,b) a##b
#define PORT(x) _CONCAT(PORT,x)
#define PIN(x) _CONCAT(PIN,x)
#define DDR(x) _CONCAT(DDR,x)


#define KEYPAD A  //KEYPAD IS ATTACHED ON PORTA
#define KEYPAD_PORT PORT(KEYPAD)
#define KEYPAD_DDR   DDR(KEYPAD)
#define KEYPAD_PIN   PIN(KEYPAD)

#endif // _IOuserDef_H_