#include <avr/io.h>
#include <util/delay.h>


int main(void) {
   DDRA = 0B10000000;
   while (1) {
       PORTA ^= 0B10000000;
        _delay_ms(50);
      }
   }