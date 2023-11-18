#pragma once
#include "common.h"
#include <stdint.h>

typedef enum {
    PIN_A0,
    PIN_A1,
    PIN_A2,
    PIN_A3,
    PIN_A4,
    PIN_A5,
    PIN_A6,
    PIN_A7,
    PIN_B0,
    PIN_B1,
    PIN_B2,
    PIN_B3,
    PIN_B4,
    PIN_B5,
    PIN_B6,
    PIN_B7    
} PIN;

typedef struct _LED
{
    PIN pin_r;
    PIN pin_g;
    PIN pin_b;
    
    uint8_t color_r;
    uint8_t color_g;
    uint8_t color_b;
} LED;

void LED_init( LED * led, PIN pi_red, PIN pin_green, PIN pin_blue );
void LED_set_color( LED *led, uint8_t red, uint8_t green, uint8_t blue );
void LED_set_pins( LED *led );