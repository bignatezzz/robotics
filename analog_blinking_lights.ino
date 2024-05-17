void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}
void loop() {
  analogWrite(11, 0);
  delay(1000);
  analogWrite(11, 10);
  delay(1000);
  analogWrite(11, 0);
  delay(1000);
  analogWrite(11, 50);
  delay(1000);
  analogWrite(11, 0);
  delay(1000);
  analogWrite(11, 150);
  delay(1000);
  analogWrite(11, 0);
  delay(1000);
  analogWrite(11, 255);
  delay(1000);
}
