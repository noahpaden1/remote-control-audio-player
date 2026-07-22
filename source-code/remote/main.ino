void setup() {
  Serial.begin(38400);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    Serial.println("1");
  }
  if (digitalRead(3) == HIGH) {
    Serial.println("2");
  }
  if (digitalRead(4) == HIGH) {
    Serial.println("3");
  }
  if (digitalRead(5) == HIGH) {
    Serial.println("4");
  }
  if (digitalRead(6) == HIGH) {
    Serial.println("5");
  }
  if (digitalRead(7) == HIGH) {
    Serial.println("6");
  }
  if (digitalRead(8) == HIGH) {
    Serial.println("7");
  }
  if (digitalRead(9) == HIGH) {
    Serial.println("8");
  }
  delay(500);
}
