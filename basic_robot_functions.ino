

void setup(){
  
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT); 
}

void stopAll() {
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}

void left() {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  }

void right() {
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  }

void forward() {
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  }

void backward() {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  }


void loop() {
  int a = digitalRead(A0);
  if (a == 1) {
    backward();
  } else {
    stopAll();
    delay(1000);
    forward();
    delay(100);
    left();
    delay(475);
 
   }
  }
  
  
  

 
