#include "mbed.h"


PwmOut PWM1(D6);


int main() {

  PWM1 = 0.0;
  
  while(1){
      for(int i = 0; i < 10; i++){
          PWM1 = PWM1 + 0.1;
          wait(0.1);
          //PWM1.period(0.1);
      }
      for(int i =0; i < 10; i++){
          PWM1 = PWM1 - 0.1;
          wait(0.1);
          
      }
  }

}