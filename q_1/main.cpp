#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{
    uLCD.background_color(BLACK);
    uLCD.cls();
    
    uLCD.color(BLUE);

    uLCD.text_width(2);

    uLCD.text_height(2);

    uLCD.printf("\n106061135\n");

    uLCD.rectangle(3,3,3,3,WHITE);


}