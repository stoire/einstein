#include <Arduino.h>
#include <converters/fundamental.h>

long int TIME_SPAN = 1000;
long int BAUD_RATE = 9600;

void setup(){
	Serial.begin(BAUD_RATE);
}

void loop() {
	Serial.println(now());
	delay(TIME_SPAN);
}
