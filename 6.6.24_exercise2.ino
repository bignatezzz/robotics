int analogpin = 10;
int a = 0;
int b = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  if (Serial.available() > 0) {
    b = Serial.parseInt();
    if (b == 1000) {
      analogpin = 10;
      digitalWrite(11, LOW);
    }
    else if (b == 2000) {
      analogpin = 11;
      digitalWrite(10, LOW);
    }

    else {
      a = b;
    }
  }
  analogWrite(analogpin, a);
}
