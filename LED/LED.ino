void setup() {
  // put your setup code here, to run once:
  pinMode(13, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;
  while (i < 13) {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
    i++;
  }
  delay(15000);
}

