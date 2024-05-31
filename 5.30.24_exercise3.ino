int data = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(19200);

}

void loop() {
  // put your main code here, to run repeatedly:
  data = digitalRead(A0);
  Serial.println(data);
}
