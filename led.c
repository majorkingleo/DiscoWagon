/*
 * File:   led.c
 * Author: Martin
 *
 * Created on 11. November 2023, 21:08
 */

#include "led.h"
#include <string.h>

void LED_init( LED * led, PIN pin_red, PIN pin_green, PIN pin_blue )
{
    memset(led,0,sizeof(LED));
    
    led->pin_r = pin_red;
    led->pin_g = pin_green;
    led->pin_b = pin_blue;
}

void LED_set_color( LED *led, uint8_t red, uint8_t green, uint8_t blue )
{
    led->color_r = red;
    led->color_g = green;
    led->color_b = blue;
}

void set_pin( PIN pin, uint8_t value )
{
    switch( pin )
    {
        case PIN_A0: PORTAbits.RA0 = value; break;
        case PIN_A1: PORTAbits.RA1 = value; break;
        case PIN_A2: PORTAbits.RA2 = value; break;
        case PIN_A3: PORTAbits.RA3 = value; break;
        case PIN_A4: PORTAbits.RA4 = value; break;
        case PIN_A5: PORTAbits.RA5 = value; break;
        case PIN_A6: PORTAbits.RA6 = value; break;
        case PIN_A7: PORTAbits.RA7 = value; break;
        
        case PIN_B0: PORTBbits.RB0 = value; break;
        case PIN_B1: PORTBbits.RB1 = value; break;
        case PIN_B2: PORTBbits.RB2 = value; break;
        case PIN_B3: PORTBbits.RB3 = value; break;
        case PIN_B4: PORTBbits.RB4 = value; break;
        case PIN_B5: PORTBbits.RB5 = value; break;
        case PIN_B6: PORTBbits.RB6 = value; break;
        case PIN_B7: PORTBbits.RB7 = value; break;        
    }
}

void LED_set_pins( LED *led )
{
    set_pin(led->pin_r, led->color_r );
    set_pin(led->pin_g, led->color_g );
    set_pin(led->pin_b, led->color_b );
}