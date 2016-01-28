#include <Servo.h>

int SERVO_PIN = 11;
int INTERRUPTOR_PIN = 7;
int LED_PIN = 13;

int MIN_ANGLE = 0;
int MAX_ANGLE = 110;
int DELTA_ANGLE = 5;

int angle;
Servo pusher;

bool shouldDispense = false;

void setup() {
  angle = MIN_ANGLE;
  pusher.attach(SERVO_PIN);
  pusher.write(angle);
  
//  Serial.begin(9600);
}

bool interruptorIsClosed()
{
  return digitalRead(INTERRUPTOR_PIN) == LOW;
}

bool interruptorIsOpen()
{
  return digitalRead(INTERRUPTOR_PIN) == HIGH;
}

void dispense()
{
  for (angle = MIN_ANGLE; angle <= MAX_ANGLE; angle += DELTA_ANGLE) {
    pusher.write(angle);
    delay(DELTA_ANGLE*4);
  }

  for (angle = MAX_ANGLE - DELTA_ANGLE; angle >= MIN_ANGLE; angle -= DELTA_ANGLE) {
    pusher.write(angle);
    delay(DELTA_ANGLE*4);
  }
}

void loop() {
  if (interruptorIsClosed()) {
    shouldDispense = true;
  }

  if (interruptorIsOpen() && shouldDispense) {
    dispense();
    shouldDispense = false;
  }
}
