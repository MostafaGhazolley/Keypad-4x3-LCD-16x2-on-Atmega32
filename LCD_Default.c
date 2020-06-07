/******************

Default of sending a character or a command to the LCD devise 
PORTS used are D & C.....

******************/
#include <avr/delay.h>

void SendCommand(unsigned char command)
{
    PORTB=command;
    PORTD&= ~(1<<2);
    PORTD|= (1<<3);
    _delay_ms(100);
    PORTD&= ~(1<<3);
    PORTB =0;
}

void SendCharacter(unsigned char character)
{
    PORTB=character;
    PORTD|= (1<<2);
    PORTD|= (1<<3);
    _delay_ms(100);
    PORTD&= ~(1<<3);
    PORTB =0;
}