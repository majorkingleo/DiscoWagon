/*
 * File:   main.c
 * Author: Martin Oberzalek <kingleo@gmx.at>
 * 
 * Created on 11. November 2023, 20:40
 */

#include "led.h"

LED la;

void main_new()
{
    // Use pins as digital
    CMCONbits.CM = 0b111;
    
    // Set RB0,1,2 as output
    TRISBbits.TRISB0 = 0;
    TRISBbits.TRISB1 = 0;
    TRISBbits.TRISB2 = 0;
    
    LED_init( &la, PIN_B0, PIN_B1, PIN_B2 );   
    
    LED_set_color( &la, 255, 0, 0 );
    LED_set_pins( &la );
}

void main(void) {
    
    //main_new();
    
    // Use pins as digital
    CMCONbits.CM = 0b111;
    // Set RB0 as output
    TRISBbits.TRISB0 = 0;
    
    while(1) {
        // Set RB0 pin to 5V
        PORTBbits.RB0 = 1;
        // Wait 1 second
        __delay_ms(1000);
        // Set RB0 pin to 5V
        PORTBbits.RB0 = 0;
        // Wait 1 second
        __delay_ms(1000);
    }
    
    return;    
}
