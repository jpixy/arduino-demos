#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL // 16MHz
#define LED_PIN PB7

int main(void) {
	// set PORTB5 as an output
	DDRB = DDRB | (1<<LED_PIN);	
	PORTB = PORTB & ~(1<<LED_PIN);

	// forever
	while(1){
		// set PORTB5
		PORTB = PORTB | (1<<LED_PIN);
		// wait
		_delay_ms(1000);
		// unset PORTB5
		PORTB = PORTB & ~(1<<LED_PIN);
		// wait somemore
		_delay_ms(1000);
	}
}

