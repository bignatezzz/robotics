void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    //digitalWrite(10,   LOW);
    //digitalWrite(11, LOW);
    // LOW LOW or HIGH HIGH stops gearmotor
    
   //digitalWrite(10,   HIGH);
    //digitalWrite(11, LOW);
   //delay(1000);
    //digitalWrite(11,   HIGH);
    //digitalWrite(10, LOW);
    //delay(1000);
    // second code turns gearmotor clockwise then anticlockwise every second (loops)

    digitalWrite(11, LOW);
    
    for (int i = 0; i < 256; i++ )
    // for (3 parameters; initializing variable/creating variable, checks condition of variable (if condition true, excutes for loop), comand to change the variable as loop repeats) )
    {
      analogWrite(10,i);
      delay(30);
    }
     for (int i = 255; i > -1; i-- ) {
      analogWrite(10,i);
      delay(30);
    
     }
}
