#include <Arduino.h>
#include <converters/fundamental.h>

void setup(){
	Serial.begin(9600);
}

void loop() {
	Serial.println(now(false));
	delay(500);
}
