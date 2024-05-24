//float a = 1023;
//float b = 4;
//float c = a / b; * can print all this on the serial monitor
float data = 0;
float value = 0;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600); * only used when need serial monitor
 // Serial.println(c); *prints variable "c" in serial monitor
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  data = analogRead(A0);
  value = data / 4.0;
  analogWrite(5, value);
  Serial.println(data);
  // printing voltage value (data) in previous line
}




