void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);

  if (val > 800){
    digitalWrite(6, HIGH);
  }else {
    digitalWrite(6, LOW);
  }

}
