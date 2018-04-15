#include <Servo.h>

Servo daServo;

int servoValue;

void setup() {
    Serial.begin(9600);
    daServo.attach(11);
}

void loop() {
    int daValue = analogRead(A0);

    Serial.print(daValue);

    Serial.print(":");

    servoValue = map(daValue, 0, 1023, 0, 180);

    Serial.println(servoValue);

    daServo.write(servoValue);

    delay(100);
}
