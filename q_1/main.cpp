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

    uLCD.text_width(4);

    uLCD.text_height(4);

    uLCD.color(GREEN);

    uLCD.locate(1,2);

    uLCD.rectangle(1,1,1,1,1);


    


}