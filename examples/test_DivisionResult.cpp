#include <Arduino.h>
#include <converters/fundamental.h>

long int TIME_SPAN = 1000;
long int BAUD_RATE = 9600;
long int TIME_VAL = 122;

void setup(){
	Serial.begin(BAUD_RATE);
}

void loop() {
	DivisionResult res = min2h(TIME_VAL);

	uint64_t String quocient = String((unsigned long)res.quocient);
	uint64_t String remainder = String((unsigned long)res.remainder);

	Serial.println("res = " + quocient + "h, remainer " + remainder + " minutes");
	delay(500);
}
