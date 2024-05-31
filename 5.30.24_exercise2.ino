
float data = 0;
float value = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(A0);
  data = value * 5 / 1023;
  Serial.println(data);
  // printing voltage value (data) in previous line
}


