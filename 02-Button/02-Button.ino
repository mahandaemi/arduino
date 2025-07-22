int a = 0;
void setup() {
  pinMode(12, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  a = digitalRead(12);
  if (a == 0) {
    digitalWrite(11, 0);
  }
  else {
    digitalWrite(11, 1);
    delay(100);
    digitalWrite(11, 0);
    delay(100);
  }
}
