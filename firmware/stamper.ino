/* Firmware for the stamper in ArmStamper
 * This firmware controls the electronic stamper. 
 * When the arcade button is pressed by the arm, stamping occurs with a linearized servo. */

#include <Servo.h>

Servo stamperServo;

const int buttonPin = 12;
const int servoPin = 9;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  stamperServo.attach(servoPin);
  stamperServo.write(90);
}

void loop() {
  if(digitalRead(buttonPin)==LOW){
    //stamp moves dowm
    stamperServo.write(180);
    delay(500);

    //stamps
    stamperServo.write(90);
    delay(500);

    //stamp moves up
    stamperServo.write(0)
    delay(500);

    //stamper stops
    stamperServo.write(90);
    delay(500);
  }
}
