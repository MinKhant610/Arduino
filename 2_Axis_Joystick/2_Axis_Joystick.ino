int Xaxis;
int Yaxis;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xaxis = analogRead(A0);
  Yaxis = analogRead(A1);
  Serial.print(Xaxis);
  Serial.print("           ");
  Serial.println(Yaxis);
  //delay(1000);
}
