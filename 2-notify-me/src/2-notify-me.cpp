#include "Particle.h"
#include "clickButton.h"

// Connect a momentary pushbutton switch between this pin and GND
const int BUTTON_PIN = D2;

ClickButton button(D2, LOW, true);

void setup() {
	Serial.begin(9600);
	pinMode(BUTTON_PIN, INPUT_PULLUP);

}

void loop() {
	button.Update();
	if (button.depressed) {
		Particle.publish("notifyMe", "", PRIVATE);
	}
}
