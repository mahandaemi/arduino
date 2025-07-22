void setup() {
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,1);
  delay(100);
  digitalWrite(12,0);
  delay(100);
  
}
