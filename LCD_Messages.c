

void Locked(void)
{
  unsigned char a[16] = "Locked!!........" ;//First row one LCD
    int i;
    DDRB =0xFF; /* PortB will be the 8-Output data to LCD... */
    DDRD |= (1<<2);
    DDRD |= (1<<3); /* PC.0 -> Register Select , PC.1 -> E ((Set pin 0,1 as output pins))...*/
    _delay_ms(100);
    SendCommand(0x01);   /* Sending all Clear Command */
    SendCommand(0x38);   /* 16*2 Line LCD */
    SendCommand(0x0E);   /* Set Screen and cursor ON! */

   // First Line!...
    for (i=0; (i<=15) && (*(a+i)!='\0');i++)
          {
        SendCharacter(a[i]);
        }
          SendCommand(0xC0); //go cursor to Second line...
}

void Access_Granted(void)
{
  unsigned char a[16] = "Access Granted!!" ;//First row one LCD
    int i;
    DDRB =0xFF; /* PortB will be the 8-Output data to LCD... */
    DDRD |= (1<<2);
    DDRD |= (1<<3); /* PC.0 -> Register Select , PC.1 -> E ((Set pin 0,1 as output pins))...*/
    _delay_ms(100);
    SendCommand(0x01);   /* Sending all Clear Command */
    SendCommand(0x38);   /* 16*2 Line LCD */
    SendCommand(0x0E);   /* Set Screen and cursor ON! */

   // First Line!...
    for (i=0; (i<=15) && (*(a+i)!='\0');i++)
          {
        SendCharacter(a[i]);
        }
          SendCommand(0xC0); //go cursor to Second line...
}

void Try_Again(void)
{
  unsigned char a[16] = "Wrong Pass!!...." ;//First row one LCD
    int i;
    DDRB =0xFF; /* PortB will be the 8-Output data to LCD... */
    DDRD |= (1<<2);
    DDRD |= (1<<3); /* PC.0 -> Register Select , PC.1 -> E ((Set pin 0,1 as output pins))...*/
    _delay_ms(100);
    SendCommand(0x01);   /* Sending all Clear Command */
    SendCommand(0x38);   /* 16*2 Line LCD */
    SendCommand(0x0E);   /* Set Screen and cursor ON! */

   // First Line!...
    for (i=0; (i<=15) && (*(a+i)!='\0');i++)
          {
        SendCharacter(a[i]);
        }
          SendCommand(0xC0); //go cursor to Second line...
}

void LCD_Mob_Req01(void){
	unsigned char a[16] = "Add phone number" ;//First row one LCD
    int i;
	DDRB =0xFF; /* PortB will be the 8-Output data to LCD... */
    DDRD |= (1<<2);
    DDRD |= (1<<3); /* PC.0 -> Register Select , PC.1 -> E ((Set pin 0,1 as output pins))...*/
    _delay_ms(50);
    SendCommand(0x01);   /* Sending all Clear Command */
    SendCommand(0x38);   /* 16*2 Line LCD */
    SendCommand(0x0E);   /* Set Screen and cursor ON! */

   // First Line!...
    for (i=0; (i<=15) && (*(a+i)!='\0');i++)
          {
        SendCharacter(a[i]);
        }
          SendCommand(0xC0); //go cursor to Second line...
    
}

void LCD_Start(void){
    unsigned char a[16] = "    Welcome!    " ;//First row one LCD
    unsigned char b[16] = "SDC.Team MG.V1.4" ;//Second Row on LCD
    int i =0;
    DDRB =0xFF; /* PortB will be the 8-Output data to LCD... */
    DDRD |= (1<<2);
    DDRD |= (1<<3); /* PC.0 -> Register Select , PC.1 -> E ((Set pin 0,1 as output pins))...*/
    _delay_ms(50);
    SendCommand(0x01);   /* Sending all Clear Command */
    SendCommand(0x38);   /* 16*2 Line LCD */
    SendCommand(0x0E);   /* Set Screen and cursor ON! */

   // First Line!...
    for (i=0; (i<=15) && (*(a+i)!='\0');i++){
        SendCharacter(a[i]);
    }
          SendCommand(0xC0); //go cursor to Second line...
    // Second Line    
     for (i=0; (i<=15) && (*(b+i)!='\0');i++){
        SendCharacter(b[i]);
    }
}

void LCD_Mob_Entry(unsigned char Key){
    if (Key !=0xFF && j!=11){ //0xFF is the default return if no key pressed...
            SendCharacter(Key);
           _delay_ms(50);
            j++;
    }
}

void LCD_End(void){
    unsigned char a[16] = "   Thankyou!    " ;//First row one LCD
    unsigned char b[16] = "SDC.Team MG.V1.4" ;//Second Row on LCD
    int i =0;
    DDRB =0xFF; /* PortB will be the 8-Output data to LCD... */
    DDRD |= (1<<2);
    DDRD |= (1<<3); /* PC.0 -> Register Select , PC.1 -> E ((Set pin 0,1 as output pins))...*/
    _delay_ms(50);
    SendCommand(0x01);   /* Sending all Clear Command */
    SendCommand(0x38);   /* 16*2 Line LCD */
    SendCommand(0x0E);   /* Set Screen and cursor ON! */

   // First Line!...
    for (i=0; (i<=15) && (*(a+i)!='\0');i++){
        SendCharacter(a[i]);
    }
          SendCommand(0xC0); //go cursor to Second line...
    // Second Line    
     for (i=0; (i<=15) && (*(b+i)!='\0');i++){
        SendCharacter(b[i]);
    }
}