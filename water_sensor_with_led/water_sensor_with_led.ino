
void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);  
  pinMode(13, OUTPUT);
}

void loop() {
              
  int value = analogRead(A5);
  if (value > 700){
    digitalWrite(13, HIGH);
  }else {
    digitalWrite(13, LOW);
  }
  
  Serial.print("Sensor value: ");
  Serial.println(value);

  delay(1000);
}
