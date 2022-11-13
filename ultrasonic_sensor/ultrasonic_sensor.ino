void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  delayMicroseconds(10);
  digitalWrite(7, LOW);
  int echo_time = pulseIn(6, HIGH);
  float convert_time_to_distance = echo_time / 58.2; // to covert cm
  Serial.println(convert_time_to_distance);
}
