const int temp36pin=A0;
void setup() {
  Serial.begin(9600);
  
}

void loop() {
 float sensorvalue=analogRead(temp36pin);
 float voltage= sensorvalue*(5.0/1023.0);
 float tempc=(voltage-0.5)*100;

 Serial.print("temperature:");
 Serial.print(tempc);
 Serial.println("*c");
 delay(2000);
  
 

}
