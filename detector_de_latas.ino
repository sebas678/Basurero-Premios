
#include <Servo.h>

Servo motor;
const int buttonPin = 2;
int lastButtonState = 0;
int buttonState = 0;
int buttonPushCounter = 0;


void setup() {
  motor.attach(9);
  pinMode(buttonPin, INPUT);
  motor.write(90);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      buttonPushCounter++;
      motor.write(92);
      delay(5000);
      motor.write(1);
    }
    delay(15);
  }
  lastButtonState = buttonState;
}

