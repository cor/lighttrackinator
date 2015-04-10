
#include <Servo.h>

int sensor1pin = 0;
int sensor2pin = 1;

Servo motor;

int sensor1lux = 0;
int sensor2lux = 0;

void setup() {

  Serial.begin(9600);
  
  motor.attach(9);
}

void loop() {
  
  sensor1lux = analogRead(sensor1pin);
  sensor2lux = analogRead(sensor2pin);
  
  if (sensor1lux > sensor2lux) {
    Serial.println("rechts");
      motor.write(0);
  } else if (sensor2lux > sensor1lux) {
      Serial.println("links");
      motor.write(180);
  }
}
