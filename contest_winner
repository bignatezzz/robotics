void setup(){
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT); 
  pinMode(A1, INPUT); 
  pinMode(A2, INPUT); 
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
  int b = digitalRead(A1);
  int c = digitalRead(A2);

  if (a == 1 && b == 1 && c == 1) {
    forward();
  }
  else if (a == 1 && b == 1 && c == 0) {
    if (b == 1 && a == 1){
      left();
      delay(100);
      stopAll();
      delay(200);
    }
  }
  else if (a == 1 && b == 0 && c == 1) {
    if (c == 1 && a == 1){
      left();
      delay(100);
      stopAll();
      delay(200);
    }
  }
  else if (a == 1 && b == 0 && c == 0) {
    backward();
    delay(500);
    stopAll();
    delay(200);
    right();
    delay(570);  
  }
  else if (a == 0 && b == 1 && c == 1) {
    backward();
    delay(500);
    stopAll();
    delay(200);
    right();
    delay(570);
  }
  else if (a == 0 && b == 1 && c == 0) {
    if (b == 1){
      left();
      delay(100);
      stopAll();
      delay(200);
    } else if (b == 0) {
      forward();
    }
  }
  else if (a == 0 && b == 0 && c == 1) {
    if (c == 1){
      left();
      delay(100);
      stopAll();
      delay(200);
    } else if (c == 0) {
      forward();
    }
  }
  else if (a == 0 && b == 0 && c == 0) {
    backward();
    delay(500);
    stopAll();
    delay(200);
    right();
    delay(570);
  }
}
