void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int detect = analogRead(A0);
  Serial.print(detect);
  Serial.println("");
  delay(1000);


  if (detect > 600){
    digitalWrite(13, HIGH);
  }else {
    digitalWrite(13, LOW);
  }

}
