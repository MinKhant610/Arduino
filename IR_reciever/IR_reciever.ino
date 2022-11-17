#include <IRremote.h>
int rece_pin = 11;
IRrecv ir_rev(rece_pin);

decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Enabling IRin");
  ir_rev.enableIRIn();
  Serial.println("Enabled IRin");
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}
// not done yet
void loop() {
  // put your main code here, to run repeatedly:
  if (ir_rev.decode(&results)){
    Serial.println(results.value, HEX);
    ir_rev.resume(); 
  }
  if (results.value == 0xFF30CF){
      digitalWrite(10, HIGH);
    }else if (results.value == 0xFF18E7){
      digitalWrite(9, HIGH);
    }else if (results.value == 0xFF7A85){
      digitalWrite(8, HIGH);
    }else if (results.value == 0xFF6897){
      for (int i = 8; i < 11; i++){
        digitalWrite(i, LOW);
      }
    }
  delay(1000);
}
