#include "Particle.h"

const int LED_PIN = D7;

int ledHandler(String param);

void setup() {
	Serial.begin(9600);

	Particle.function("led", ledHandler);

	pinMode(LED_PIN, OUTPUT);
}

void loop() {
}


int ledHandler(String param) {
	digitalWrite(LED_PIN, !digitalRead(LED_PIN));

	return 0;
}
