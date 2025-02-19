
const int trigPin = 10;
const int echoPin = 11;

float duration, distance;


// Include the servo library:
#include "Servo.h"

// Create a new servo object:
Servo myservo;

// Define the servo pin:
#define servoPin 9

void setup() {
  // Attach the Servo variable to a pin:
  myservo.attach(servoPin);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
// Servo Motor Basic Code
  for (int angle = 0; angle <= 180; angle += 1) {
    myservo.write(angle);
    delay(15);
  }

  delay(1000);

// Basic Ultrasonic Sensor Code

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);
}
