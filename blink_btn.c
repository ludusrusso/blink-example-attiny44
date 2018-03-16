#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRA = 0B10000000;
    PORTA = 0B00001000;
    while (1) {
        int x = PINA & 0B00001000;
        if (x) {
            PORTA = 0B00001000;
        } else {
            PORTA ^= 0B10000000;
            _delay_ms(50); // 10Hz
        }
    }
}