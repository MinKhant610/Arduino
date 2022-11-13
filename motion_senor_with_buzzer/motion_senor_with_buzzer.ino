void setup() {
  // put your setup code here, to run once:
  pinMode(9, INPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead (9) == HIGH){
    digitalWrite(7, HIGH);
    delay(500);
  }else if (digitalRead (9) == LOW) {
    digitalWrite(7, LOW);
    }

}
