default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o led.o led.c
	avr-gcc -o led.bin led.o
	avr-objcopy -O ihex -R .eeprom led.bin led.hex
	# sudo avrdude -F -V -c arduino -p ATmega2560 -P /dev/ttyACM0 -b 115200 -U flash:w:led.hex
	sudo avrdude -v -p atmega2560 -c wiring -P /dev/ttyACM0 -b 115200 -D -U flash:w:led.hex:i
