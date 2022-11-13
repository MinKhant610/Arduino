void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, INPUT);
  pinMode(8, OUTPUT);

}

//min_val = 0; max_val = 1;
//range is too short

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(9);
  Serial.println(val);
  delay(1000);

  if (val > 0 ){
    digitalWrite(8, HIGH);
  }else {
    digitalWrite(8, LOW);
  }

}
