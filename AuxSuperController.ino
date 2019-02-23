
#include <Joystick.h>

// Create the Joystick
Joystick_ Joystick;

// Constant that maps the phyical pin to the joystick button.
const int buttonZero = 0;


void setup() {
	// Initialize Button Pins
	pinMode(0, INPUT_PULLUP);
	pinMode(1, INPUT_PULLUP);
	pinMode(2, INPUT_PULLUP);
	pinMode(3, INPUT_PULLUP);
	pinMode(4, INPUT_PULLUP);
	pinMode(5, INPUT_PULLUP);
	pinMode(6, INPUT_PULLUP);
	pinMode(7, INPUT_PULLUP);
	pinMode(8, INPUT_PULLUP);
	pinMode(9, INPUT_PULLUP);
	pinMode(10, INPUT_PULLUP);
	pinMode(11, INPUT_PULLUP);
	pinMode(12, INPUT_PULLUP);

	// Initialize Joystick Library
	Joystick.begin();
}

// Last state of the button
int lastButtonState = 0;

void loop() {

	// Read pin values
	for(int i = 0; i < 14; i++){

		int currentButtonState = !digitalRead(i);
		if (currentButtonState != lastButtonState)
		{
			Joystick.setButton(i, 1);
		}else{
			Joystick.setButton(i, 0);
		}

	}
	delay(50);
}
