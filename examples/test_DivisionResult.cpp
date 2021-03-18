#include <Arduino.h>
#include <converters/fundamental.h>

void setup(){
	Serial.begin(9600);
}

void loop() {
	DivisionResult res = min2h(122);
	Serial.println("res = " + String((unsigned long)res.quocient) + "h, remainer " + String((unsigned long)res.remainder) + " minutes");
	delay(500);
}
