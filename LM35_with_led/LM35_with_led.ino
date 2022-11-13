void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  int actual_temp = val / (10/ (1100/ 1024));

  if (actual_temp > 70){
    digitalWrite(9, HIGH);
  }else {
    digitalWrite(9, LOW);
  }
  Serial.println(actual_temp);
  delay(1000);

}
