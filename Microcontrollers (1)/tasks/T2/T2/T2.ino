void setup() {
  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(26,OUTPUT);
}

void loop() {
  digitalWrite(22,HIGH);
  delay(500);
  digitalWrite(22,LOW);
  digitalWrite(23,HIGH);
  delay(500);
  digitalWrite(23,LOW);
  digitalWrite(24,HIGH);
  delay(500);
  digitalWrite(24,LOW);
  digitalWrite(25,HIGH);
  delay(500);
  digitalWrite(25,LOW);
  digitalWrite(26,HIGH);
  delay(500);
  digitalWrite(26,LOW);
}
